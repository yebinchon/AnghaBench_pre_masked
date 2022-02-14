
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct input_dev {int dummy; } ;
struct ar1021_i2c {int* data; int client; struct input_dev* input; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int*,int) ;
 int FUNC_2 (struct input_dev*,int ,unsigned int) ;
 int FUNC_3 (struct input_dev*,int ,unsigned int) ;
 int FUNC_4 (struct input_dev*) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_4, void *VAR_5)
{
 struct ar1021_i2c *VAR_6 = VAR_5;
 struct input_dev *VAR_7 = VAR_6->input;
 u8 *VAR_8 = VAR_6->data;
 unsigned int VAR_9, VAR_10, VAR_11;
 int VAR_12;

 VAR_12 = FUNC_1(VAR_6->client,
     VAR_6->data, sizeof(VAR_6->data));
 if (VAR_12 != sizeof(VAR_6->data))
  goto out;


 if (!(VAR_8[0] & FUNC_0(7)))
  goto out;

 VAR_11 = VAR_8[0] & FUNC_0(0);
 VAR_9 = ((VAR_8[2] & 0x1f) << 7) | (VAR_8[1] & 0x7f);
 VAR_10 = ((VAR_8[4] & 0x1f) << 7) | (VAR_8[3] & 0x7f);

 FUNC_2(VAR_7, VAR_0, VAR_9);
 FUNC_2(VAR_7, VAR_1, VAR_10);
 FUNC_3(VAR_7, VAR_2, VAR_11);
 FUNC_4(VAR_7);

out:
 return VAR_3;
}
