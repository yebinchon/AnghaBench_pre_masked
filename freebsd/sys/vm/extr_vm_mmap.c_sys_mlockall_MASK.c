
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_2__* vm_map_t ;
struct thread {TYPE_9__* td_proc; } ;
struct mlockall_args {int how; } ;
struct TYPE_14__ {TYPE_1__* p_vmspace; } ;
struct TYPE_13__ {scalar_t__ size; int pmap; } ;
struct TYPE_12__ {TYPE_2__ vm_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_9__*) ;
 int FUNC_1 (TYPE_9__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_2 (struct thread*,int ) ;
 int VAR_13 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct thread*,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_14 ;
 int FUNC_6 (TYPE_9__*,int ,scalar_t__) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,int ,int ) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*,int ,int ,int) ;

int
FUNC_13(struct thread *VAR_15, struct mlockall_args *VAR_16)
{
 vm_map_t VAR_17;
 int VAR_18;

 VAR_17 = &VAR_15->td_proc->p_vmspace->vm_map;
 VAR_18 = FUNC_4(VAR_15, VAR_8);
 if (VAR_18)
  return (VAR_18);

 if ((VAR_16->how == 0) || ((VAR_16->how & ~(VAR_6|VAR_7)) != 0))
  return (VAR_1);





 if (!VAR_13 && VAR_16->how & VAR_6) {
  if (VAR_17->size > FUNC_2(VAR_15, VAR_10))
   return (VAR_2);
 }
 if (VAR_16->how & VAR_7) {
  FUNC_7(VAR_17);
  FUNC_10(VAR_17, VAR_5, 0);
  FUNC_11(VAR_17);
  VAR_18 = 0;
 }

 if (VAR_16->how & VAR_6) {






  VAR_18 = FUNC_12(VAR_17, FUNC_9(VAR_17), FUNC_8(VAR_17),
      VAR_12|VAR_11);
  if (VAR_18 == VAR_4)
   VAR_18 = 0;
  else if (VAR_18 == VAR_3)
   VAR_18 = VAR_2;
  else
   VAR_18 = VAR_0;
 }
 return (VAR_18);
}
