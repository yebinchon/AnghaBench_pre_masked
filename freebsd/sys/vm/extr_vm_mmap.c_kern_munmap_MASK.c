
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t vm_size_t ;
typedef size_t vm_offset_t ;
typedef int * vm_map_t ;
typedef TYPE_3__* vm_map_entry_t ;
struct thread {TYPE_2__* td_proc; } ;
struct pmckern_map_out {uintptr_t pm_address; size_t pm_size; } ;
struct TYPE_9__ {size_t start; int end; } ;
struct TYPE_8__ {TYPE_1__* p_vmspace; } ;
struct TYPE_7__ {int vm_map; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct thread*,int ,void*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (size_t) ;
 scalar_t__ FUNC_4 (int *,size_t,int ,int ) ;
 int FUNC_5 (int *,size_t,size_t) ;
 TYPE_3__* FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,size_t,TYPE_3__**) ;
 size_t FUNC_10 (int *) ;
 size_t FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

int
FUNC_14(struct thread *VAR_5, uintptr_t VAR_6, size_t VAR_7)
{





 vm_offset_t VAR_8;
 vm_size_t VAR_9;
 vm_map_t VAR_10;

 if (VAR_7 == 0)
  return (VAR_0);

 VAR_8 = VAR_6;
 VAR_9 = (VAR_8 & VAR_1);
 VAR_8 -= VAR_9;
 VAR_7 += VAR_9;
 VAR_7 = (vm_size_t) FUNC_3(VAR_7);
 if (VAR_8 + VAR_7 < VAR_8)
  return (VAR_0);




 VAR_10 = &VAR_5->td_proc->p_vmspace->vm_map;
 if (VAR_8 < FUNC_11(VAR_10) || VAR_8 + VAR_7 > FUNC_10(VAR_10))
  return (VAR_0);
 FUNC_7(VAR_10);
 FUNC_5(VAR_10, VAR_8, VAR_8 + VAR_7);
  FUNC_12(VAR_10);


 return (0);
}
