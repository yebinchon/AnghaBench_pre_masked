
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct axp288_extcon_info {int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct axp288_extcon_info*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct axp288_extcon_info *VAR_3 = VAR_2;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4 < 0)
  FUNC_1(VAR_3->dev, "failed to handle the interrupt\n");

 return VAR_0;
}
