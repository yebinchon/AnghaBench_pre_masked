
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef scalar_t__ vm_offset_t ;
typedef int * vm_map_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_4__ {TYPE_1__* p_vmspace; } ;
struct TYPE_3__ {int vm_map; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int ,int ,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int
FUNC_7(void *VAR_4, int VAR_5, int VAR_6)
{
 boolean_t VAR_7;
 vm_prot_t VAR_8;
 vm_map_t VAR_9;

 FUNC_0((VAR_6 & ~VAR_2) == 0,
     ("illegal ``rw'' argument to useracc (%x)\n", VAR_6));
 VAR_8 = VAR_6;
 VAR_9 = &VAR_3->p_vmspace->vm_map;
 if ((vm_offset_t)VAR_4 + VAR_5 > FUNC_5(VAR_9) ||
     (vm_offset_t)VAR_4 + VAR_5 < (vm_offset_t)VAR_4) {
  return (VAR_0);
 }
 FUNC_4(VAR_9);
 VAR_7 = FUNC_3(VAR_9, FUNC_2((vm_offset_t)VAR_4),
     FUNC_1((vm_offset_t)VAR_4 + VAR_5), VAR_8);
 FUNC_6(VAR_9);
 return (VAR_7 == VAR_1);
}
