
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_unmapped_area_info {unsigned long length; unsigned long low_limit; unsigned long high_limit; int align_mask; unsigned long align_offset; scalar_t__ flags; } ;
struct vm_area_struct {int dummy; } ;
struct mm_struct {int dummy; } ;
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
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 int VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 int FUNC_2 (int) ;
 TYPE_1__* VAR_13 ;
 struct vm_area_struct* FUNC_3 (struct mm_struct*,unsigned long) ;
 unsigned long FUNC_4 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;
 unsigned long FUNC_7 (struct vm_area_struct*) ;
 unsigned long FUNC_8 (struct vm_unmapped_area_info*) ;

unsigned long FUNC_9(struct file *VAR_14, unsigned long VAR_15, unsigned long VAR_16, unsigned long VAR_17, unsigned long VAR_18)
{
 struct mm_struct *VAR_19 = VAR_13->mm;
 struct vm_area_struct * VAR_20;
 unsigned long VAR_21 = VAR_8;
 int VAR_22;
 struct vm_unmapped_area_info VAR_23;

 if (VAR_18 & VAR_2) {



  if ((VAR_18 & VAR_3) &&
      ((VAR_15 - (VAR_17 << VAR_5)) & (VAR_6 - 1)))
   return -VAR_0;
  return VAR_15;
 }

 if (FUNC_5(VAR_10))
  VAR_21 = VAR_7;
 if (FUNC_6(VAR_16 > VAR_21 || VAR_16 >= VAR_12))
  return -VAR_1;

 VAR_22 = 0;
 if (VAR_14 || (VAR_18 & VAR_3))
  VAR_22 = 1;

 if (VAR_15) {
  if (VAR_22)
   VAR_15 = FUNC_0(VAR_15, VAR_17);
  else
   VAR_15 = FUNC_1(VAR_15);

  VAR_20 = FUNC_3(VAR_19, VAR_15);
  if (VAR_21 - VAR_16 >= VAR_15 &&
      (!VAR_20 || VAR_15 + VAR_16 <= FUNC_7(VAR_20)))
   return VAR_15;
 }

 VAR_23.flags = 0;
 VAR_23.length = VAR_16;
 VAR_23.low_limit = VAR_9;
 VAR_23.high_limit = FUNC_4(VAR_21, VAR_12);
 VAR_23.align_mask = VAR_22 ? (VAR_4 & (VAR_6 - 1)) : 0;
 VAR_23.align_offset = VAR_17 << VAR_5;
 VAR_15 = FUNC_8(&VAR_23);

 if ((VAR_15 & ~VAR_4) && VAR_21 > VAR_11) {
  FUNC_2(VAR_15 != -VAR_1);
  VAR_23.low_limit = VAR_11;
  VAR_23.high_limit = VAR_21;
  VAR_15 = FUNC_8(&VAR_23);
 }

 return VAR_15;
}
