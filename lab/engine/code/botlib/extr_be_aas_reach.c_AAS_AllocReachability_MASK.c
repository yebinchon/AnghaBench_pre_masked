
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ aas_lreachability_t ;


 int FUNC_0 (char*) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

aas_lreachability_t *FUNC_1(void)
{
 aas_lreachability_t *VAR_2;

 if (!VAR_0) return ((void*)0);

 if (!VAR_0->next) FUNC_0("AAS_MAX_REACHABILITYSIZE\n");

 VAR_2 = VAR_0;
 VAR_0 = VAR_0->next;
 VAR_1++;
 return VAR_2;
}
