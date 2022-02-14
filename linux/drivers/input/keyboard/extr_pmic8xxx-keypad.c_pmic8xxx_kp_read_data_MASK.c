
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pmic8xxx_kp {int dev; int regmap; } ;


 int FUNC_0 (int ,char*,int,unsigned int) ;
 int FUNC_1 (struct pmic8xxx_kp*,unsigned int) ;
 int FUNC_2 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct pmic8xxx_kp *VAR_0, u16 *VAR_1,
     u16 VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 unsigned int VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_4 = FUNC_2(VAR_0->regmap, VAR_2, &VAR_6);
  if (VAR_4)
   return VAR_4;
  FUNC_0(VAR_0->dev, "%d = %d\n", VAR_5, VAR_6);
  VAR_1[VAR_5] = FUNC_1(VAR_0, VAR_6);
 }

 return 0;
}
