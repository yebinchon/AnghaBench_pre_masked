
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int mmu_t ;
struct TYPE_8__ {TYPE_3__* td_pcb; } ;
struct TYPE_5__ {int usr_segm; } ;
struct TYPE_6__ {TYPE_1__ aim; } ;
struct TYPE_7__ {TYPE_2__ pcb_cpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* VAR_4 ;

__attribute__((used)) static int
FUNC_0(mmu_t VAR_5, vm_offset_t VAR_6, int *VAR_7,
    vm_offset_t *VAR_8)
{
 vm_offset_t VAR_9;

 if ((VAR_6 >> VAR_2) == (VAR_3 >> VAR_2)) {
  VAR_9 = VAR_4->td_pcb->pcb_cpu.aim.usr_segm;
  VAR_6 &= VAR_0 | VAR_1;
  VAR_6 |= VAR_9 << VAR_2;
  *VAR_8 = VAR_6;
  *VAR_7 = 1;
 } else {
  *VAR_8 = VAR_6;
  *VAR_7 = 0;
 }

 return (0);
}
