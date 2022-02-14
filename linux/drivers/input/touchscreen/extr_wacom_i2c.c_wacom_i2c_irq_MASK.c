
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wacom_i2c {int* data; int prox; int tool; int client; struct input_dev* input; } ;
struct input_dev {int dummy; } ;
typedef int irqreturn_t ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int*,int) ;
 int FUNC_1 (struct input_dev*,int ,unsigned int) ;
 int FUNC_2 (struct input_dev*,int ,unsigned char) ;
 int FUNC_3 (struct input_dev*) ;
 unsigned int FUNC_4 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_9, void *VAR_10)
{
 struct wacom_i2c *VAR_11 = VAR_10;
 struct input_dev *VAR_12 = VAR_11->input;
 u8 *VAR_13 = VAR_11->data;
 unsigned int VAR_14, VAR_15, VAR_16;
 unsigned char VAR_17, VAR_18, VAR_19, VAR_20;
 int VAR_21;

 VAR_21 = FUNC_0(VAR_11->client,
    VAR_11->data, sizeof(VAR_11->data));
 if (VAR_21 < 0)
  goto out;

 VAR_17 = VAR_13[3] & 0x01;
 VAR_20 = VAR_13[3] & 0x04;
 VAR_18 = VAR_13[3] & 0x02;
 VAR_19 = VAR_13[3] & 0x10;
 VAR_14 = FUNC_4((__le16 *)&VAR_13[4]);
 VAR_15 = FUNC_4((__le16 *)&VAR_13[6]);
 VAR_16 = FUNC_4((__le16 *)&VAR_13[8]);

 if (!VAR_11->prox)
  VAR_11->tool = (VAR_13[3] & 0x0c) ?
   VAR_6 : VAR_5;

 VAR_11->prox = VAR_13[3] & 0x20;

 FUNC_2(VAR_12, VAR_7, VAR_17 || VAR_20);
 FUNC_2(VAR_12, VAR_11->tool, VAR_11->prox);
 FUNC_2(VAR_12, VAR_3, VAR_18);
 FUNC_2(VAR_12, VAR_4, VAR_19);
 FUNC_1(VAR_12, VAR_1, VAR_14);
 FUNC_1(VAR_12, VAR_2, VAR_15);
 FUNC_1(VAR_12, VAR_0, VAR_16);
 FUNC_3(VAR_12);

out:
 return VAR_8;
}
