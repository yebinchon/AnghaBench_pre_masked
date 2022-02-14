
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmspace {int dummy; } ;
struct thread {TYPE_1__* td_proc; } ;
struct pmap {int* pm_context; int pm_tsb; int pm_active; } ;
struct TYPE_2__ {struct vmspace* p_vmspace; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,...) ;
 int VAR_6 ;
 int FUNC_5 (uintptr_t*,uintptr_t) ;
 int VAR_7 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 size_t VAR_8 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int VAR_9 ;
 int FUNC_10 (int ,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_11 () ;
 struct pmap* FUNC_12 (struct vmspace*) ;

void
FUNC_13(struct thread *VAR_13)
{
 struct vmspace *VAR_14;
 struct pmap *VAR_15;
 int VAR_16;

 FUNC_6();
 VAR_14 = VAR_13->td_proc->p_vmspace;
 VAR_15 = FUNC_12(VAR_14);

 VAR_16 = FUNC_2(VAR_10);
 if (VAR_16 == FUNC_2(VAR_11)) {
  FUNC_11();
  VAR_16 = FUNC_2(VAR_12);
 }
 FUNC_4(VAR_10, VAR_16 + 1);

 VAR_15->pm_context[VAR_8] = VAR_16;




 FUNC_0(FUNC_2(VAR_7), &VAR_15->pm_active);
 FUNC_4(VAR_9, VAR_15);


 FUNC_10(VAR_1, VAR_3, VAR_15->pm_tsb);
 FUNC_10(VAR_2, VAR_4, VAR_15->pm_tsb);
 FUNC_10(VAR_0, VAR_3, (FUNC_9(VAR_0, VAR_3) &
     VAR_6) | VAR_16);
 FUNC_8(VAR_5);
 FUNC_7();
}
