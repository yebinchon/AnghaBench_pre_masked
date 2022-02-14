
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int * vm_map_t ;
struct thread {TYPE_2__* td_proc; } ;
struct munlockall_args {int dummy; } ;
struct TYPE_6__ {TYPE_1__* p_vmspace; } ;
struct TYPE_5__ {int vm_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct thread*,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (TYPE_2__*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int ,int) ;

int
FUNC_10(struct thread *VAR_7, struct munlockall_args *VAR_8)
{
 vm_map_t VAR_9;
 int VAR_10;

 VAR_9 = &VAR_7->td_proc->p_vmspace->vm_map;
 VAR_10 = FUNC_2(VAR_7, VAR_2);
 if (VAR_10)
  return (VAR_10);


 FUNC_4(VAR_9);
 FUNC_7(VAR_9, 0, VAR_1);
 FUNC_8(VAR_9);


 VAR_10 = FUNC_9(VAR_9, FUNC_6(VAR_9), FUNC_5(VAR_9),
     VAR_5|VAR_4);
 return (VAR_10);
}
