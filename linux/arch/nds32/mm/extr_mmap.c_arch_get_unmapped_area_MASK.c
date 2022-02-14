
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_unmapped_area_info {unsigned long length; unsigned long high_limit; int align_mask; unsigned long align_offset; int low_limit; scalar_t__ flags; } ;
struct vm_area_struct {unsigned long vm_start; } ;
struct mm_struct {int mmap_base; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_2 (unsigned long) ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 TYPE_1__* VAR_9 ;
 struct vm_area_struct* FUNC_3 (struct mm_struct*,unsigned long) ;
 unsigned long FUNC_4 (struct vm_unmapped_area_info*) ;

unsigned long
FUNC_5(struct file *VAR_10, unsigned long VAR_11,
         unsigned long VAR_12, unsigned long VAR_13,
         unsigned long VAR_14)
{
 struct mm_struct *VAR_15 = VAR_9->mm;
 struct vm_area_struct *VAR_16;
 int VAR_17 = 0;
 struct vm_unmapped_area_info VAR_18;
 int VAR_19 = 0;
 if(FUNC_1(VAR_0))
  VAR_19 = 1;





 if (VAR_19)
  VAR_17 = VAR_10 || (VAR_14 & VAR_4);




 if (VAR_14 & VAR_3) {
  if (VAR_19 && VAR_14 & VAR_4 &&
      (VAR_11 - (VAR_13 << VAR_6)) & (VAR_7 - 1))
   return -VAR_1;
  return VAR_11;
 }

 if (VAR_12 > VAR_8)
  return -VAR_2;

 if (VAR_11) {
  if (VAR_17)
   VAR_11 = FUNC_0(VAR_11, VAR_13);
  else
   VAR_11 = FUNC_2(VAR_11);

  VAR_16 = FUNC_3(VAR_15, VAR_11);
  if (VAR_8 - VAR_12 >= VAR_11 &&
      (!VAR_16 || VAR_11 + VAR_12 <= VAR_16->vm_start))
   return VAR_11;
 }

 VAR_18.flags = 0;
 VAR_18.length = VAR_12;
 VAR_18.low_limit = VAR_15->mmap_base;
 VAR_18.high_limit = VAR_8;
 VAR_18.align_mask = VAR_17 ? (VAR_5 & (VAR_7 - 1)) : 0;
 VAR_18.align_offset = VAR_13 << VAR_6;
 return FUNC_4(&VAR_18);
}
