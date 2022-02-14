
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prcm_config {int flags; scalar_t__ xtal_speed; unsigned long dpll_speed; scalar_t__ mpu_speed; } ;


 int VAR_0 ;
 struct prcm_config const* VAR_1 ;
 unsigned long FUNC_0 () ;
 struct prcm_config* VAR_2 ;
 scalar_t__ VAR_3 ;

void FUNC_1(void)
{
 const struct prcm_config *VAR_4 = ((void*)0);
 unsigned long VAR_5;

 VAR_5 = FUNC_0();
 for (VAR_4 = VAR_2; VAR_4->mpu_speed; VAR_4++) {
  if (!(VAR_4->flags & VAR_0))
   continue;
  if (VAR_4->xtal_speed != VAR_3)
   continue;
  if (VAR_4->dpll_speed <= VAR_5)
   break;
 }
 VAR_1 = VAR_4;
}
