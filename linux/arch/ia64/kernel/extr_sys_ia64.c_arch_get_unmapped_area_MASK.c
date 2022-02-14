
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_unmapped_area_info {unsigned long length; unsigned long low_limit; int high_limit; unsigned long align_mask; scalar_t__ align_offset; scalar_t__ flags; } ;
struct mm_struct {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 scalar_t__ VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned long VAR_9 ;
 TYPE_1__* VAR_10 ;
 scalar_t__ FUNC_1 (struct mm_struct*,unsigned long,unsigned long) ;
 unsigned long FUNC_2 (struct vm_unmapped_area_info*) ;

unsigned long
FUNC_3 (struct file *VAR_11, unsigned long VAR_12, unsigned long VAR_13,
   unsigned long VAR_14, unsigned long VAR_15)
{
 long VAR_16 = (VAR_15 & VAR_3);
 unsigned long VAR_17 = 0;
 struct mm_struct *VAR_18 = VAR_10->mm;
 struct vm_unmapped_area_info VAR_19;

 if (VAR_13 > VAR_6)
  return -VAR_1;


 if (VAR_15 & VAR_2) {
  if (FUNC_1(VAR_18, VAR_12, VAR_13))
   return -VAR_0;
  return VAR_12;
 }





 if (!VAR_12)
  VAR_12 = VAR_9;

 if (VAR_16 && (VAR_8 > 0xfffffffful))






  VAR_17 = VAR_4 & (VAR_7 - 1);

 VAR_19.flags = 0;
 VAR_19.length = VAR_13;
 VAR_19.low_limit = VAR_12;
 VAR_19.high_limit = VAR_8;
 VAR_19.align_mask = VAR_17;
 VAR_19.align_offset = 0;
 return FUNC_2(&VAR_19);
}
