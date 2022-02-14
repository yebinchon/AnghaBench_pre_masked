
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_unmapped_area_info {unsigned long length; int align_mask; unsigned long align_offset; void* high_limit; int low_limit; scalar_t__ flags; } ;
struct vm_area_struct {int dummy; } ;
struct mm_struct {void* mmap_base; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 int FUNC_0 (int) ;
 unsigned long FUNC_1 (unsigned long,unsigned long const) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long const VAR_2 ;
 unsigned long const VAR_3 ;
 unsigned long FUNC_2 (unsigned long) ;
 int VAR_4 ;
 unsigned long const VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_11 ;
 TYPE_1__* VAR_12 ;
 struct vm_area_struct* FUNC_4 (struct mm_struct*,unsigned long) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;
 unsigned long FUNC_7 (struct vm_area_struct*) ;
 unsigned long FUNC_8 (struct vm_unmapped_area_info*) ;

unsigned long
FUNC_9(struct file *VAR_13, const unsigned long VAR_14,
     const unsigned long VAR_15, const unsigned long VAR_16,
     const unsigned long VAR_17)
{
 struct vm_area_struct *VAR_18;
 struct mm_struct *VAR_19 = VAR_12->mm;
 unsigned long VAR_20 = VAR_8;
 unsigned long VAR_21 = VAR_14;
 int VAR_22;
 struct vm_unmapped_area_info VAR_23;


 FUNC_0(!FUNC_5(VAR_10));

 if (VAR_17 & VAR_2) {



  if ((VAR_17 & VAR_3) &&
      ((VAR_21 - (VAR_16 << VAR_5)) & (VAR_7 - 1)))
   return -VAR_0;
  return VAR_21;
 }

 if (FUNC_6(VAR_15 > VAR_20))
  return -VAR_1;

 VAR_22 = 0;
 if (VAR_13 || (VAR_17 & VAR_3))
  VAR_22 = 1;


 if (VAR_21) {
  if (VAR_22)
   VAR_21 = FUNC_1(VAR_21, VAR_16);
  else
   VAR_21 = FUNC_2(VAR_21);

  VAR_18 = FUNC_4(VAR_19, VAR_21);
  if (VAR_20 - VAR_15 >= VAR_21 &&
      (!VAR_18 || VAR_21 + VAR_15 <= FUNC_7(VAR_18)))
   return VAR_21;
 }

 VAR_23.flags = VAR_11;
 VAR_23.length = VAR_15;
 VAR_23.low_limit = VAR_6;
 VAR_23.high_limit = VAR_19->mmap_base;
 VAR_23.align_mask = VAR_22 ? (VAR_4 & (VAR_7 - 1)) : 0;
 VAR_23.align_offset = VAR_16 << VAR_5;
 VAR_21 = FUNC_8(&VAR_23);







 if (VAR_21 & ~VAR_4) {
  FUNC_3(VAR_21 != -VAR_1);
  VAR_23.flags = 0;
  VAR_23.low_limit = VAR_9;
  VAR_23.high_limit = VAR_8;
  VAR_21 = FUNC_8(&VAR_23);
 }

 return VAR_21;
}
