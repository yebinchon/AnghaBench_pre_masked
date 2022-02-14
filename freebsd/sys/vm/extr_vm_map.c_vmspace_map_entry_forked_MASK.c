
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_offset_t ;
typedef TYPE_2__* vm_map_entry_t ;
struct TYPE_4__ {int size; } ;
struct vmspace {int vm_tsize; scalar_t__ vm_taddr; int vm_dsize; scalar_t__ vm_daddr; int vm_ssize; TYPE_1__ vm_map; } ;
struct TYPE_5__ {int eflags; scalar_t__ end; scalar_t__ start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(const struct vmspace *VAR_3, struct vmspace *VAR_4,
    vm_map_entry_t VAR_5)
{
 vm_size_t VAR_6;
 vm_offset_t VAR_7;

 if ((VAR_5->eflags & VAR_2) != 0)
  return;
 VAR_6 = VAR_5->end - VAR_5->start;
 VAR_4->vm_map.size += VAR_6;
 if (VAR_5->eflags & (VAR_0 | VAR_1)) {
  VAR_4->vm_ssize += FUNC_1(VAR_6);
 } else if (VAR_5->start >= (vm_offset_t)VAR_3->vm_daddr &&
     VAR_5->start < (vm_offset_t)VAR_3->vm_daddr + FUNC_2(VAR_3->vm_dsize)) {
  VAR_7 = FUNC_0(VAR_5->end,
      (vm_offset_t)VAR_3->vm_daddr + FUNC_2(VAR_3->vm_dsize));
  VAR_4->vm_dsize += FUNC_1(VAR_7 - VAR_5->start);
 } else if (VAR_5->start >= (vm_offset_t)VAR_3->vm_taddr &&
     VAR_5->start < (vm_offset_t)VAR_3->vm_taddr + FUNC_2(VAR_3->vm_tsize)) {
  VAR_7 = FUNC_0(VAR_5->end,
      (vm_offset_t)VAR_3->vm_taddr + FUNC_2(VAR_3->vm_tsize));
  VAR_4->vm_tsize += FUNC_1(VAR_7 - VAR_5->start);
 }
}
