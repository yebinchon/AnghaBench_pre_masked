
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_unmapped_area_info {unsigned long length; unsigned long high_limit; unsigned long align_mask; unsigned long align_offset; int low_limit; scalar_t__ flags; } ;
struct vm_area_struct {int dummy; } ;
struct TYPE_3__ {unsigned long asce_limit; } ;
struct mm_struct {TYPE_1__ context; int mmap_base; } ;
struct file {int dummy; } ;
struct TYPE_4__ {struct mm_struct* mm; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_1 (struct mm_struct*,unsigned long) ;
 TYPE_2__* VAR_7 ;
 struct vm_area_struct* FUNC_2 (struct mm_struct*,unsigned long) ;
 unsigned long VAR_8 ;
 unsigned long FUNC_3 (struct vm_area_struct*) ;
 unsigned long FUNC_4 (struct vm_unmapped_area_info*) ;

unsigned long
FUNC_5(struct file *VAR_9, unsigned long VAR_10,
  unsigned long VAR_11, unsigned long VAR_12, unsigned long VAR_13)
{
 struct mm_struct *VAR_14 = VAR_7->mm;
 struct vm_area_struct *VAR_15;
 struct vm_unmapped_area_info VAR_16;
 int VAR_17;

 if (VAR_11 > VAR_6 - VAR_8)
  return -VAR_0;

 if (VAR_13 & VAR_1)
  goto check_asce_limit;

 if (VAR_10) {
  VAR_10 = FUNC_0(VAR_10);
  VAR_15 = FUNC_2(VAR_14, VAR_10);
  if (VAR_6 - VAR_11 >= VAR_10 && VAR_10 >= VAR_8 &&
      (!VAR_15 || VAR_10 + VAR_11 <= FUNC_3(VAR_15)))
   goto check_asce_limit;
 }

 VAR_16.flags = 0;
 VAR_16.length = VAR_11;
 VAR_16.low_limit = VAR_14->mmap_base;
 VAR_16.high_limit = VAR_6;
 if (VAR_9 || (VAR_13 & VAR_2))
  VAR_16.align_mask = VAR_3 << VAR_5;
 else
  VAR_16.align_mask = 0;
 VAR_16.align_offset = VAR_12 << VAR_5;
 VAR_10 = FUNC_4(&VAR_16);
 if (VAR_10 & ~VAR_4)
  return VAR_10;

check_asce_limit:
 if (VAR_10 + VAR_11 > VAR_7->mm->context.asce_limit &&
     VAR_10 + VAR_11 <= VAR_6) {
  VAR_17 = FUNC_1(VAR_14, VAR_10 + VAR_11);
  if (VAR_17)
   return (unsigned long) VAR_17;
 }

 return VAR_10;
}
