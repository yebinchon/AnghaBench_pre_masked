
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_unmapped_area_info {unsigned long length; unsigned long high_limit; int align_mask; unsigned long align_offset; int low_limit; scalar_t__ flags; } ;
struct vm_area_struct {int dummy; } ;
struct mm_struct {int mmap_base; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_1 (unsigned long) ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_2 () ;
 TYPE_1__* VAR_8 ;
 struct vm_area_struct* FUNC_3 (struct mm_struct*,unsigned long) ;
 unsigned long FUNC_4 (struct vm_area_struct*) ;
 unsigned long FUNC_5 (struct vm_unmapped_area_info*) ;

unsigned long
FUNC_6(struct file *VAR_9, unsigned long VAR_10,
  unsigned long VAR_11, unsigned long VAR_12, unsigned long VAR_13)
{
 struct mm_struct *VAR_14 = VAR_8->mm;
 struct vm_area_struct *VAR_15;
 int VAR_16 = 0;
 int VAR_17 = FUNC_2();
 struct vm_unmapped_area_info VAR_18;




 if (VAR_17)
  VAR_16 = VAR_9 || (VAR_13 & VAR_3);




 if (VAR_13 & VAR_2) {
  if (VAR_17 && VAR_13 & VAR_3 &&
      (VAR_10 - (VAR_12 << VAR_5)) & (VAR_6 - 1))
   return -VAR_0;
  return VAR_10;
 }

 if (VAR_11 > VAR_7)
  return -VAR_1;

 if (VAR_10) {
  if (VAR_16)
   VAR_10 = FUNC_0(VAR_10, VAR_12);
  else
   VAR_10 = FUNC_1(VAR_10);

  VAR_15 = FUNC_3(VAR_14, VAR_10);
  if (VAR_7 - VAR_11 >= VAR_10 &&
      (!VAR_15 || VAR_10 + VAR_11 <= FUNC_4(VAR_15)))
   return VAR_10;
 }

 VAR_18.flags = 0;
 VAR_18.length = VAR_11;
 VAR_18.low_limit = VAR_14->mmap_base;
 VAR_18.high_limit = VAR_7;
 VAR_18.align_mask = VAR_16 ? (VAR_4 & (VAR_6 - 1)) : 0;
 VAR_18.align_offset = VAR_12 << VAR_5;
 return FUNC_5(&VAR_18);
}
