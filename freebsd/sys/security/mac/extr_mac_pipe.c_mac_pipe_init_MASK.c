
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipepair {int * pp_label; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 () ;

void
FUNC_1(struct pipepair *VAR_2)
{

 if (VAR_1 & VAR_0)
  VAR_2->pp_label = FUNC_0();
 else
  VAR_2->pp_label = ((void*)0);
}
