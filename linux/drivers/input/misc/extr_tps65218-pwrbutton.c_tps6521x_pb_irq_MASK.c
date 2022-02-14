
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps6521x_pwrbutton {int idev; int dev; int regmap; struct tps6521x_data* data; } ;
struct tps6521x_data {unsigned int pb_mask; int reg_status; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,unsigned int*) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_2, void *VAR_3)
{
 struct tps6521x_pwrbutton *VAR_4 = VAR_3;
 const struct tps6521x_data *VAR_5 = VAR_4->data;
 unsigned int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_4(VAR_4->regmap, VAR_5->reg_status, &VAR_6);
 if (VAR_7) {
  FUNC_0(VAR_4->dev, "can't read register: %d\n", VAR_7);
  goto out;
 }

 if (VAR_6 & VAR_5->pb_mask) {
  FUNC_1(VAR_4->idev, VAR_1, 1);
  FUNC_3(VAR_4->dev, 0);
 } else {
  FUNC_1(VAR_4->idev, VAR_1, 0);
 }

 FUNC_2(VAR_4->idev);

out:
 return VAR_0;
}
