
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct a6xx_gmu {int hfi_irq; int gmu_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct a6xx_gmu*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct a6xx_gmu *VAR_2)
{
 FUNC_0(VAR_2->gmu_irq);
 FUNC_0(VAR_2->hfi_irq);

 FUNC_1(VAR_2, VAR_0, ~0);
 FUNC_1(VAR_2, VAR_1, ~0);
}
