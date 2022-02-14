
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ aas_lreachability_t ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

void FUNC_1(aas_lreachability_t *VAR_2)
{
 FUNC_0(VAR_2, 0, sizeof(aas_lreachability_t));

 VAR_2->next = VAR_0;
 VAR_0 = VAR_2;
 VAR_1--;
}
