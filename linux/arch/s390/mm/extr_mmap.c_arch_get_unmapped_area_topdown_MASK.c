
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_unmapped_area_info {unsigned long length; unsigned long high_limit; unsigned long align_mask; unsigned long align_offset; int low_limit; scalar_t__ flags; } ;
struct vm_area_struct {int dummy; } ;
struct TYPE_3__ {unsigned long asce_limit; } ;
struct mm_struct {unsigned long mmap_base; TYPE_1__ context; } ;
struct file {int dummy; } ;
struct TYPE_4__ {struct mm_struct* mm; } ;


 unsigned long VAR_0 ;
 unsigned long const VAR_1 ;
 unsigned long const VAR_2 ;
 unsigned long const VAR_3 ;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned long VAR_4 ;
 unsigned long const VAR_5 ;
 int VAR_6 ;
 unsigned long const VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (struct mm_struct*,unsigned long) ;
 TYPE_2__* VAR_10 ;
 struct vm_area_struct* FUNC_3 (struct mm_struct*,unsigned long) ;
 int FUNC_4 (int ,unsigned long const) ;
 unsigned long const VAR_11 ;
 unsigned long FUNC_5 (struct vm_area_struct*) ;
 unsigned long FUNC_6 (struct vm_unmapped_area_info*) ;

unsigned long
FUNC_7(struct file *VAR_12, const unsigned long VAR_13,
     const unsigned long VAR_14, const unsigned long VAR_15,
     const unsigned long VAR_16)
{
 struct vm_area_struct *VAR_17;
 struct mm_struct *VAR_18 = VAR_10->mm;
 unsigned long VAR_19 = VAR_13;
 struct vm_unmapped_area_info VAR_20;
 int VAR_21;


 if (VAR_14 > VAR_7 - VAR_11)
  return -VAR_0;

 if (VAR_16 & VAR_1)
  goto check_asce_limit;


 if (VAR_19) {
  VAR_19 = FUNC_0(VAR_19);
  VAR_17 = FUNC_3(VAR_18, VAR_19);
  if (VAR_7 - VAR_14 >= VAR_19 && VAR_19 >= VAR_11 &&
    (!VAR_17 || VAR_19 + VAR_14 <= FUNC_5(VAR_17)))
   goto check_asce_limit;
 }

 VAR_20.flags = VAR_9;
 VAR_20.length = VAR_14;
 VAR_20.low_limit = FUNC_4(VAR_6, VAR_11);
 VAR_20.high_limit = VAR_18->mmap_base;
 if (VAR_12 || (VAR_16 & VAR_2))
  VAR_20.align_mask = VAR_3 << VAR_5;
 else
  VAR_20.align_mask = 0;
 VAR_20.align_offset = VAR_15 << VAR_5;
 VAR_19 = FUNC_6(&VAR_20);







 if (VAR_19 & ~VAR_4) {
  FUNC_1(VAR_19 != -VAR_0);
  VAR_20.flags = 0;
  VAR_20.low_limit = VAR_8;
  VAR_20.high_limit = VAR_7;
  VAR_19 = FUNC_6(&VAR_20);
  if (VAR_19 & ~VAR_4)
   return VAR_19;
 }

check_asce_limit:
 if (VAR_19 + VAR_14 > VAR_10->mm->context.asce_limit &&
     VAR_19 + VAR_14 <= VAR_7) {
  VAR_21 = FUNC_2(VAR_18, VAR_19 + VAR_14);
  if (VAR_21)
   return (unsigned long) VAR_21;
 }

 return VAR_19;
}
