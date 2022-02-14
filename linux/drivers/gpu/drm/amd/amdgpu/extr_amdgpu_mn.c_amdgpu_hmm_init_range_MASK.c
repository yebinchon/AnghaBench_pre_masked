
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hmm_range {int pfn_shift; int values; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0(struct hmm_range *VAR_3)
{
 if (VAR_3) {
  VAR_3->flags = VAR_1;
  VAR_3->values = VAR_2;
  VAR_3->pfn_shift = VAR_0;
 }
}
