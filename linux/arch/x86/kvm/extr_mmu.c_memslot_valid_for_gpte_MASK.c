
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_memory_slot {int flags; scalar_t__ dirty_bitmap; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct kvm_memory_slot *VAR_1,
       bool VAR_2)
{
 if (!VAR_1 || VAR_1->flags & VAR_0)
  return 0;
 if (VAR_2 && VAR_1->dirty_bitmap)
  return 0;

 return 1;
}
