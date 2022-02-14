
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct input_dev {int dummy; } ;
struct exc3000_data {int prop; int timer; int client; int * buf; struct input_dev* input; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int*) ;
 int FUNC_2 (struct input_dev*,int *,int *,int) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct input_dev*) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int *,scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_5, void *VAR_6)
{
 struct exc3000_data *VAR_7 = VAR_6;
 struct input_dev *VAR_8 = VAR_7->input;
 u8 *VAR_9 = VAR_7->buf;
 int VAR_10, VAR_11;
 int VAR_12;

 VAR_12 = FUNC_1(VAR_7->client, VAR_9, &VAR_11);
 if (VAR_12) {

  FUNC_6(&VAR_7->timer,
     VAR_4 + FUNC_7(VAR_2));
  goto out;
 }




 FUNC_0(&VAR_7->timer);

 while (VAR_11 > 0) {
  VAR_10 = FUNC_5(VAR_11, VAR_1);
  FUNC_2(VAR_8, &VAR_7->prop, VAR_9 + 4, VAR_10);
  VAR_11 -= VAR_10;
  VAR_9 += VAR_0;
 }

 FUNC_3(VAR_8);
 FUNC_4(VAR_8);

out:
 return VAR_3;
}
