
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t vm_size_t ;
typedef size_t vm_offset_t ;
typedef int * vm_map_t ;
struct thread {TYPE_2__* td_proc; } ;
struct TYPE_4__ {TYPE_1__* p_vmspace; } ;
struct TYPE_3__ {int vm_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (int *,size_t,size_t,int,int) ;

int
FUNC_2(struct thread *VAR_7, uintptr_t VAR_8, size_t VAR_9, int VAR_10)
{
 vm_offset_t VAR_11;
 vm_size_t VAR_12;
 vm_map_t VAR_13;
 int VAR_14;

 VAR_11 = VAR_8;
 VAR_12 = (VAR_11 & VAR_6);
 VAR_11 -= VAR_12;
 VAR_9 += VAR_12;
 VAR_9 = (vm_size_t) FUNC_0(VAR_9);
 if (VAR_11 + VAR_9 < VAR_11)
  return (VAR_1);

 if ((VAR_10 & (VAR_4|VAR_5)) == (VAR_4|VAR_5))
  return (VAR_1);

 VAR_13 = &VAR_7->td_proc->p_vmspace->vm_map;




 VAR_14 = FUNC_1(VAR_13, VAR_11, VAR_11 + VAR_9, (VAR_10 & VAR_4) == 0,
     (VAR_10 & VAR_5) != 0);
 switch (VAR_14) {
 case 128:
  return (0);
 case 130:
  return (VAR_3);
 case 129:
  return (VAR_0);
 case 131:
  return (VAR_2);
 default:
  return (VAR_1);
 }
}
