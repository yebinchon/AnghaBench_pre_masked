
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t vm_size_t ;
typedef size_t vm_offset_t ;
struct thread {TYPE_2__* td_proc; } ;
struct TYPE_4__ {TYPE_1__* p_vmspace; } ;
struct TYPE_3__ {int vm_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 size_t VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (size_t) ;
 int FUNC_5 (int *,size_t,size_t,int,int ) ;

int
FUNC_6(struct thread *VAR_8, uintptr_t VAR_9, size_t VAR_10, int VAR_11)
{
 vm_offset_t VAR_12;
 vm_size_t VAR_13;
 int VAR_14, VAR_15;

 VAR_12 = VAR_9;
 if ((VAR_11 & ~(VAR_7 | FUNC_1(VAR_7))) != 0)
  return (VAR_1);
 VAR_15 = FUNC_2(VAR_11);
 VAR_11 = FUNC_0(VAR_11);
 VAR_13 = (VAR_12 & VAR_4);
 VAR_12 -= VAR_13;
 VAR_10 += VAR_13;
 VAR_10 = (vm_size_t) FUNC_4(VAR_10);






 if (VAR_12 + VAR_10 < VAR_12)
  return (VAR_1);

 VAR_14 = 128;
 if (VAR_15 != 0) {
  if ((VAR_15 & VAR_11) != VAR_11)
   return (VAR_1);
  VAR_14 = FUNC_5(&VAR_8->td_proc->p_vmspace->vm_map,
      VAR_12, VAR_12 + VAR_10, VAR_15, VAR_6);
 }
 if (VAR_14 == 128)
  VAR_14 = FUNC_5(&VAR_8->td_proc->p_vmspace->vm_map,
      VAR_12, VAR_12 + VAR_10, VAR_11, VAR_3);

 switch (VAR_14) {
 case 128:
  return (0);
 case 130:
  return (VAR_0);
 case 129:
  return (VAR_2);
 }
 return (VAR_1);
}
