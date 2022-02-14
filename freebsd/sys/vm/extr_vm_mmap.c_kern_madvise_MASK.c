
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t vm_offset_t ;
typedef int * vm_map_t ;
struct thread {TYPE_2__* td_proc; } ;
struct TYPE_4__ {TYPE_1__* p_vmspace; int p_pid; } ;
struct TYPE_3__ {int vm_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct thread*,int ,int ,int ,int*) ;
 size_t FUNC_1 (size_t) ;
 size_t FUNC_2 (size_t) ;
 int FUNC_3 (int *,size_t,size_t,int) ;
 size_t FUNC_4 (int *) ;
 size_t FUNC_5 (int *) ;

int
FUNC_6(struct thread *VAR_5, uintptr_t VAR_6, size_t VAR_7, int VAR_8)
{
 vm_map_t VAR_9;
 vm_offset_t VAR_10, VAR_11, VAR_12;
 int VAR_13;





 if (VAR_8 == VAR_1) {
  VAR_13 = VAR_2;
  return (FUNC_0(VAR_5, VAR_4, VAR_5->td_proc->p_pid,
      VAR_3, &VAR_13));
 }





 VAR_9 = &VAR_5->td_proc->p_vmspace->vm_map;
 VAR_10 = VAR_6;
 if (VAR_10 < FUNC_5(VAR_9) || VAR_10 + VAR_7 > FUNC_4(VAR_9))
  return (VAR_0);
 if ((VAR_10 + VAR_7) < VAR_10)
  return (VAR_0);





 VAR_12 = FUNC_2(VAR_10);
 VAR_11 = FUNC_1(VAR_10 + VAR_7);




 return (FUNC_3(VAR_9, VAR_12, VAR_11, VAR_8));
}
