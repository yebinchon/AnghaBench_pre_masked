
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmic8xxx_kp {int dev; int regmap; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct pmic8xxx_kp*,unsigned int) ;
 int FUNC_2 (int ,int ,unsigned int*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct pmic8xxx_kp *VAR_5 = VAR_4;
 unsigned int VAR_6, VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_5->regmap, VAR_1, &VAR_6);
 if (VAR_8 < 0) {
  FUNC_0(VAR_5->dev, "failed to read keyp_ctrl register\n");
  return VAR_0;
 }

 VAR_7 = VAR_6 & VAR_2;

 VAR_8 = FUNC_1(VAR_5, VAR_7);
 if (VAR_8 < 0)
  FUNC_0(VAR_5->dev, "failed to scan matrix\n");

 return VAR_0;
}
