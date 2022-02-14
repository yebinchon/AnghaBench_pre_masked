
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pmic8xxx_kp {int stuckstate; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pmic8xxx_kp*,int *,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct pmic8xxx_kp*,int *,int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 u16 VAR_4[VAR_1];
 u16 VAR_5[VAR_1];
 int VAR_6;
 struct pmic8xxx_kp *VAR_7 = VAR_3;

 VAR_6 = FUNC_2(VAR_7, VAR_4, VAR_5);
 if (VAR_6 < 0) {
  FUNC_1(VAR_7->dev, "failed to read keypad matrix\n");
  return VAR_0;
 }

 FUNC_0(VAR_7, VAR_4, VAR_7->stuckstate);

 return VAR_0;
}
