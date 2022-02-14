
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_unmapped_area_info {unsigned long length; unsigned long low_limit; unsigned long high_limit; unsigned long align_offset; scalar_t__ align_mask; scalar_t__ flags; } ;
struct vm_area_struct {int dummy; } ;
struct mm_struct {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 unsigned long VAR_1 ;
 unsigned long FUNC_1 (unsigned long) ;
 unsigned long VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (unsigned long,unsigned long,unsigned long*,unsigned long*) ;
 struct vm_area_struct* FUNC_3 (struct mm_struct*,unsigned long) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 unsigned long FUNC_6 (unsigned long,unsigned long,unsigned long) ;
 unsigned long FUNC_7 (struct vm_area_struct*) ;
 unsigned long FUNC_8 (struct vm_unmapped_area_info*) ;

unsigned long
FUNC_9(struct file *VAR_4, unsigned long VAR_5,
  unsigned long VAR_6, unsigned long VAR_7, unsigned long VAR_8)
{
 struct mm_struct *VAR_9 = VAR_3->mm;
 struct vm_area_struct *VAR_10;
 struct vm_unmapped_area_info VAR_11;
 unsigned long VAR_12, VAR_13;

 VAR_5 = FUNC_6(VAR_5, VAR_6, VAR_8);
 if (FUNC_0(VAR_5))
  return VAR_5;

 if (VAR_8 & VAR_1)
  return VAR_5;

 FUNC_2(VAR_5, VAR_8, &VAR_12, &VAR_13);

 if (VAR_6 > VAR_13)
  return -VAR_0;

 if (VAR_5) {
  VAR_5 = FUNC_1(VAR_5);
  VAR_10 = FUNC_3(VAR_9, VAR_5);
  if (VAR_13 - VAR_6 >= VAR_5 &&
      (!VAR_10 || VAR_5 + VAR_6 <= FUNC_7(VAR_10)))
   return VAR_5;
 }

 VAR_11.flags = 0;
 VAR_11.length = VAR_6;
 VAR_11.low_limit = VAR_12;
 VAR_11.high_limit = VAR_13;
 VAR_11.align_mask = 0;
 VAR_11.align_offset = VAR_7 << VAR_2;
 if (VAR_4) {
  VAR_11.align_mask = FUNC_5();
  VAR_11.align_offset += FUNC_4();
 }
 return FUNC_8(&VAR_11);
}
