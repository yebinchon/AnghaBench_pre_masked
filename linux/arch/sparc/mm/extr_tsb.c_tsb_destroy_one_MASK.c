
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsb_config {int tsb_reg_val; int * tsb; } ;


 int FUNC_0 (int ,int *) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_1(struct tsb_config *VAR_1)
{
 unsigned long VAR_2;

 if (!VAR_1->tsb)
  return;
 VAR_2 = VAR_1->tsb_reg_val & 0x7UL;
 FUNC_0(VAR_0[VAR_2], VAR_1->tsb);
 VAR_1->tsb = ((void*)0);
 VAR_1->tsb_reg_val = 0UL;
}
