
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_size_t ;
typedef int vm_offset_t ;
typedef int vm_inherit_t ;
struct thread {TYPE_2__* td_proc; } ;
struct minherit_args {int len; int inherit; scalar_t__ addr; } ;
struct TYPE_4__ {TYPE_1__* p_vmspace; } ;
struct TYPE_3__ {int vm_map; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int,int,int ) ;

int
FUNC_2(struct thread *VAR_3, struct minherit_args *VAR_4)
{
 vm_offset_t VAR_5;
 vm_size_t VAR_6, VAR_7;
 vm_inherit_t VAR_8;

 VAR_5 = (vm_offset_t)VAR_4->addr;
 VAR_6 = VAR_4->len;
 VAR_8 = VAR_4->inherit;

 VAR_7 = (VAR_5 & VAR_2);
 VAR_5 -= VAR_7;
 VAR_6 += VAR_7;
 VAR_6 = (vm_size_t) FUNC_0(VAR_6);
 if (VAR_5 + VAR_6 < VAR_5)
  return (VAR_1);

 switch (FUNC_1(&VAR_3->td_proc->p_vmspace->vm_map, VAR_5,
     VAR_5 + VAR_6, VAR_8)) {
 case 128:
  return (0);
 case 129:
  return (VAR_0);
 }
 return (VAR_1);
}
