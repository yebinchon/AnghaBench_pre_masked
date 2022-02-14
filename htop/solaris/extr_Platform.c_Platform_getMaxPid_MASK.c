
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int v_proc; } ;
typedef TYPE_1__ kvar_t ;
struct TYPE_6__ {TYPE_1__* ks_data; } ;
typedef TYPE_2__ kstat_t ;
typedef int kstat_ctl_t ;


 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int *,char*,int ,char*) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,TYPE_2__*,int *) ;

int FUNC_4() {
   kstat_ctl_t *VAR_0 = ((void*)0);
   kstat_t *VAR_1 = ((void*)0);
   kvar_t *VAR_2 = ((void*)0);
   int VAR_3 = 32778;
   VAR_0 = FUNC_2();
   if (VAR_0 != ((void*)0)) { VAR_1 = FUNC_1(VAR_0,"unix",0,"var"); }
   if (VAR_1 != ((void*)0)) { FUNC_3(VAR_0,VAR_1,((void*)0)); }
   VAR_2 = VAR_1->ks_data;
   if (VAR_2->v_proc > 0 ) {
      VAR_3 = VAR_2->v_proc;
   }
   if (VAR_0 != ((void*)0)) { FUNC_0(VAR_0); }
   return VAR_3;
}
