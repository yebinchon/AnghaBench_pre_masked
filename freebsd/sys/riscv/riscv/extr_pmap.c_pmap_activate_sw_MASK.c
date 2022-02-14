
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u_int ;
struct thread {TYPE_1__* td_proc; } ;
typedef TYPE_2__* pmap_t ;
struct TYPE_6__ {int pm_active; int pm_satp; } ;
struct TYPE_5__ {int p_vmspace; } ;


 int FUNC_0 (void*,int *) ;
 int FUNC_1 (void*,int *) ;
 int FUNC_2 (void*,int *) ;
 int FUNC_3 (void*,int *) ;
 void* FUNC_4 (void*) ;
 int FUNC_5 (void*,TYPE_2__*) ;
 void* VAR_0 ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 TYPE_2__* FUNC_8 (int ) ;

void
FUNC_9(struct thread *VAR_1)
{
 pmap_t VAR_2, VAR_3;
 u_int VAR_4;

 VAR_2 = FUNC_4(VAR_0);
 VAR_3 = FUNC_8(VAR_1->td_proc->p_vmspace);
 if (VAR_3 == VAR_2)
  return;
 FUNC_6(VAR_3->pm_satp);

 VAR_4 = FUNC_4(VAR_4);




 FUNC_2(VAR_4, &VAR_3->pm_active);
 FUNC_0(VAR_4, &VAR_2->pm_active);

 FUNC_5(VAR_0, VAR_3);

 FUNC_7();
}
