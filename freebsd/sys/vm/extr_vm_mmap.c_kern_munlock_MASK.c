
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t vm_offset_t ;
typedef TYPE_2__* vm_map_t ;
struct thread {TYPE_4__* td_proc; } ;
struct TYPE_9__ {TYPE_1__* p_vmspace; } ;
struct TYPE_8__ {int pmap; } ;
struct TYPE_7__ {TYPE_2__ vm_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct thread*,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (TYPE_4__*,int ,int ) ;
 size_t FUNC_6 (size_t) ;
 size_t FUNC_7 (size_t) ;
 int FUNC_8 (TYPE_2__*,size_t,size_t,int) ;

int
FUNC_9(struct thread *VAR_8, uintptr_t VAR_9, size_t VAR_10)
{
 vm_offset_t VAR_11, VAR_12, VAR_13, VAR_14;



 int VAR_15;

 VAR_15 = FUNC_3(VAR_8, VAR_3);
 if (VAR_15)
  return (VAR_15);
 VAR_11 = VAR_9;
 VAR_13 = VAR_11 + VAR_10;
 VAR_14 = FUNC_7(VAR_11);
 VAR_12 = FUNC_6(VAR_13);
 if (VAR_13 < VAR_11 || VAR_12 < VAR_11)
  return (VAR_0);
 VAR_15 = FUNC_8(&VAR_8->td_proc->p_vmspace->vm_map, VAR_14, VAR_12,
     VAR_6 | VAR_5);
 return (VAR_15 == VAR_2 ? 0 : VAR_1);
}
