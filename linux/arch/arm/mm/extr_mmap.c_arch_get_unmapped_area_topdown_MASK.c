
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_unmapped_area_info {unsigned long length; unsigned long low_limit; unsigned long high_limit; int align_mask; unsigned long align_offset; scalar_t__ flags; } ;
struct vm_area_struct {int dummy; } ;
struct mm_struct {unsigned long mmap_base; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 unsigned long FUNC_0 (unsigned long,unsigned long const) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long const VAR_3 ;
 unsigned long const VAR_4 ;
 unsigned long FUNC_1 (unsigned long) ;
 int VAR_5 ;
 unsigned long const VAR_6 ;
 int VAR_7 ;
 unsigned long const VAR_8 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_9 ;
 int FUNC_3 () ;
 TYPE_1__* VAR_10 ;
 struct vm_area_struct* FUNC_4 (struct mm_struct*,unsigned long) ;
 unsigned long FUNC_5 (struct vm_area_struct*) ;
 unsigned long FUNC_6 (struct vm_unmapped_area_info*) ;

unsigned long
FUNC_7(struct file *VAR_11, const unsigned long VAR_12,
   const unsigned long VAR_13, const unsigned long VAR_14,
   const unsigned long VAR_15)
{
 struct vm_area_struct *VAR_16;
 struct mm_struct *VAR_17 = VAR_10->mm;
 unsigned long VAR_18 = VAR_12;
 int VAR_19 = 0;
 int VAR_20 = FUNC_3();
 struct vm_unmapped_area_info VAR_21;





 if (VAR_20)
  VAR_19 = VAR_11 || (VAR_15 & VAR_4);


 if (VAR_13 > VAR_8)
  return -VAR_1;

 if (VAR_15 & VAR_3) {
  if (VAR_20 && VAR_15 & VAR_4 &&
      (VAR_18 - (VAR_14 << VAR_6)) & (VAR_7 - 1))
   return -VAR_0;
  return VAR_18;
 }


 if (VAR_18) {
  if (VAR_19)
   VAR_18 = FUNC_0(VAR_18, VAR_14);
  else
   VAR_18 = FUNC_1(VAR_18);
  VAR_16 = FUNC_4(VAR_17, VAR_18);
  if (VAR_8 - VAR_13 >= VAR_18 &&
    (!VAR_16 || VAR_18 + VAR_13 <= FUNC_5(VAR_16)))
   return VAR_18;
 }

 VAR_21.flags = VAR_9;
 VAR_21.length = VAR_13;
 VAR_21.low_limit = VAR_2;
 VAR_21.high_limit = VAR_17->mmap_base;
 VAR_21.align_mask = VAR_19 ? (VAR_5 & (VAR_7 - 1)) : 0;
 VAR_21.align_offset = VAR_14 << VAR_6;
 VAR_18 = FUNC_6(&VAR_21);







 if (VAR_18 & ~VAR_5) {
  FUNC_2(VAR_18 != -VAR_1);
  VAR_21.flags = 0;
  VAR_21.low_limit = VAR_17->mmap_base;
  VAR_21.high_limit = VAR_8;
  VAR_18 = FUNC_6(&VAR_21);
 }

 return VAR_18;
}
