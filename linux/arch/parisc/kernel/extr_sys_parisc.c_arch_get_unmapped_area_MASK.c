
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_unmapped_area_info {unsigned long length; int align_mask; unsigned long align_offset; int high_limit; int low_limit; scalar_t__ flags; } ;
struct vm_area_struct {int dummy; } ;
struct mm_struct {int mmap_legacy_base; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 unsigned long FUNC_0 (unsigned long,int,unsigned long) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_1 (struct file*) ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_2 (unsigned long) ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_3 (struct file*,unsigned long) ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 TYPE_1__* VAR_8 ;
 struct vm_area_struct* FUNC_4 (struct mm_struct*,unsigned long,struct vm_area_struct**) ;
 int FUNC_5 (int *) ;
 unsigned long FUNC_6 (int,unsigned long) ;
 unsigned long FUNC_7 (struct vm_area_struct*) ;
 unsigned long FUNC_8 (struct vm_area_struct*) ;
 unsigned long FUNC_9 (struct vm_unmapped_area_info*) ;

unsigned long FUNC_10(struct file *VAR_9, unsigned long VAR_10,
  unsigned long VAR_11, unsigned long VAR_12, unsigned long VAR_13)
{
 struct mm_struct *VAR_14 = VAR_8->mm;
 struct vm_area_struct *VAR_15, *VAR_16;
 unsigned long VAR_17 = VAR_7;
 int VAR_18, VAR_19;
 struct vm_unmapped_area_info VAR_20;

 if (VAR_11 > VAR_17)
  return -VAR_1;

 VAR_18 = 0;
 if (VAR_9 || (VAR_13 & VAR_3))
  VAR_18 = 1;
 VAR_19 = FUNC_1(VAR_9);

 if (VAR_13 & VAR_2) {
  if ((VAR_13 & VAR_3) && VAR_19 &&
      (VAR_10 - FUNC_6(VAR_19, VAR_12))
    & (VAR_6 - 1))
   return -VAR_0;
  goto found_addr;
 }

 if (VAR_10) {
  if (VAR_18 && VAR_19)
   VAR_10 = FUNC_0(VAR_10, VAR_19, VAR_12);
  else
   VAR_10 = FUNC_2(VAR_10);

  VAR_15 = FUNC_4(VAR_14, VAR_10, &VAR_16);
  if (VAR_17 - VAR_11 >= VAR_10 &&
      (!VAR_15 || VAR_10 + VAR_11 <= FUNC_8(VAR_15)) &&
      (!VAR_16 || VAR_10 >= FUNC_7(VAR_16)))
   goto found_addr;
 }

 VAR_20.flags = 0;
 VAR_20.length = VAR_11;
 VAR_20.low_limit = VAR_14->mmap_legacy_base;
 VAR_20.high_limit = FUNC_5(((void*)0));
 VAR_20.align_mask = VAR_19 ? (VAR_4 & (VAR_6 - 1)) : 0;
 VAR_20.align_offset = FUNC_6(VAR_19, VAR_12);
 VAR_10 = FUNC_9(&VAR_20);

found_addr:
 if (VAR_18 && !VAR_19 && !(VAR_10 & ~VAR_4))
  FUNC_3(VAR_9, VAR_10 - (VAR_12 << VAR_5));

 return VAR_10;
}
