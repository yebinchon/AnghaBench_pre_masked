
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssp_state {int cr1; int cr0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0(struct ssp_state *VAR_3)
{
 VAR_3->cr0 = VAR_1;
 VAR_3->cr1 = VAR_2;

 VAR_1 &= ~VAR_0;
}
