
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ refcnt; } ;
typedef TYPE_1__ time_amortization_table_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int) ;

void FUNC_2 (time_amortization_table_t **VAR_1) {
  if (VAR_1 == ((void*)0)) {
    return;
  }
  if (*VAR_1 == ((void*)0)) {
    return;
  }
  (*VAR_1)->refcnt--;
  FUNC_0 ((*VAR_1)->refcnt >= 0);
  if (!(*VAR_1)->refcnt) {
    FUNC_1 (*VAR_1, sizeof (time_amortization_table_t));
    VAR_0--;
  }
  *VAR_1 = ((void*)0);
}
