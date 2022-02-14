
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ aas_lreachability_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;

void FUNC_1(void)
{
 int VAR_4;

 VAR_3 = (aas_lreachability_t *) FUNC_0(
      VAR_0 * sizeof(aas_lreachability_t));
 for (VAR_4 = 0; VAR_4 < VAR_0-1; VAR_4++)
 {
  VAR_3[VAR_4].next = &VAR_3[VAR_4+1];
 }
 VAR_3[VAR_0-1].next = ((void*)0);
 VAR_1 = VAR_3;
 VAR_2 = 0;
}
