
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmic8xxx_kp {int dev; int regmap; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 int FUNC_3 (int ,int ,unsigned int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct pmic8xxx_kp *VAR_3)
{
 int VAR_4;
 unsigned int VAR_5;

 VAR_4 = FUNC_2(VAR_3->regmap, VAR_1, &VAR_5);
 if (VAR_4 < 0) {
  FUNC_1(VAR_3->dev, "Error reading KEYP_SCAN reg, rc=%d\n", VAR_4);
  return VAR_4;
 }

 VAR_5 |= 0x1;

 VAR_4 = FUNC_3(VAR_3->regmap, VAR_1, VAR_5);
 if (VAR_4 < 0) {
  FUNC_1(VAR_3->dev, "Error writing KEYP_SCAN reg, rc=%d\n", VAR_4);
  return VAR_4;
 }


 FUNC_4((2 * FUNC_0(VAR_2, VAR_0)) + 1);

 return VAR_4;
}
