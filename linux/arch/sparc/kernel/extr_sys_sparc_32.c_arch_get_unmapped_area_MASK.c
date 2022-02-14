
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_unmapped_area_info {unsigned long length; unsigned long low_limit; unsigned long high_limit; int align_mask; unsigned long align_offset; scalar_t__ flags; } ;
struct file {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long FUNC_0 (struct vm_unmapped_area_info*) ;

unsigned long FUNC_1(struct file *VAR_10, unsigned long VAR_11, unsigned long VAR_12, unsigned long VAR_13, unsigned long VAR_14)
{
 struct vm_unmapped_area_info VAR_15;

 if (VAR_14 & VAR_2) {



  if ((VAR_14 & VAR_3) &&
      ((VAR_11 - (VAR_13 << VAR_5)) & (VAR_7 - 1)))
   return -VAR_0;
  return VAR_11;
 }


 if (VAR_12 > VAR_8 - VAR_6)
  return -VAR_1;
 if (!VAR_11)
  VAR_11 = VAR_9;

 VAR_15.flags = 0;
 VAR_15.length = VAR_12;
 VAR_15.low_limit = VAR_11;
 VAR_15.high_limit = VAR_8;
 VAR_15.align_mask = (VAR_14 & VAR_3) ?
  (VAR_4 & (VAR_7 - 1)) : 0;
 VAR_15.align_offset = VAR_13 << VAR_5;
 return FUNC_0(&VAR_15);
}
