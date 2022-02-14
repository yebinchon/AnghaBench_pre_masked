
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_offset_t ;
struct TYPE_6__ {TYPE_1__* p_vmspace; } ;
struct TYPE_5__ {size_t td_vslock_sz; } ;
struct TYPE_4__ {int vm_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 TYPE_3__* VAR_6 ;
 TYPE_2__* VAR_7 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,scalar_t__,scalar_t__,int) ;
 scalar_t__ VAR_8 ;

int
FUNC_4(void *VAR_9, size_t VAR_10)
{
 vm_offset_t VAR_11, VAR_12, VAR_13;
 vm_size_t VAR_14;
 int VAR_15;

 VAR_12 = (vm_offset_t)VAR_9 + VAR_10;
 VAR_13 = FUNC_2((vm_offset_t)VAR_9);
 VAR_11 = FUNC_1(VAR_12);
 if (VAR_12 < (vm_offset_t)VAR_9 || VAR_11 < (vm_offset_t)VAR_9)
  return (VAR_1);
 VAR_14 = FUNC_0(VAR_11 - VAR_13);
 if (VAR_14 > VAR_8)
  return (VAR_2);
 VAR_15 = FUNC_3(&VAR_6->p_vmspace->vm_map, VAR_13, VAR_11,
     VAR_5 | VAR_4);
 if (VAR_15 == VAR_3) {
  VAR_7->td_vslock_sz += VAR_10;
  return (0);
 }





 return (VAR_0);
}
