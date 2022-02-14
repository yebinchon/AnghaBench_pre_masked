
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssp_state {int cr0; int cr1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_0(struct ssp_state *VAR_5)
{
 VAR_4 = VAR_1;

 VAR_2 = VAR_5->cr0 & ~VAR_0;
 VAR_3 = VAR_5->cr1;
 VAR_2 = VAR_5->cr0;
}
