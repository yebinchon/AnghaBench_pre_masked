
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmic8xxx_kp {int dev; int ctrl_reg; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct pmic8xxx_kp *VAR_2)
{
 int VAR_3;

 VAR_2->ctrl_reg |= VAR_1;

 VAR_3 = FUNC_1(VAR_2->regmap, VAR_0, VAR_2->ctrl_reg);
 if (VAR_3 < 0)
  FUNC_0(VAR_2->dev, "Error writing KEYP_CTRL reg, rc=%d\n", VAR_3);

 return VAR_3;
}
