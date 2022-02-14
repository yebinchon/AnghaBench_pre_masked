
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_unmapped_area_info {unsigned long length; unsigned long low_limit; unsigned long high_limit; int align_mask; scalar_t__ align_offset; scalar_t__ flags; } ;
struct file {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 scalar_t__ VAR_7 ;
 unsigned long VAR_8 ;
 scalar_t__ FUNC_1 (struct file*,unsigned long,unsigned long) ;
 unsigned long FUNC_2 (struct vm_unmapped_area_info*) ;

unsigned long FUNC_3(struct file *VAR_9, unsigned long VAR_10, unsigned long VAR_11,
  unsigned long VAR_12, unsigned long VAR_13)
{
 struct vm_unmapped_area_info VAR_14;

 if (VAR_11 > VAR_8)
  return -VAR_1;
 if (VAR_11 & ~VAR_2)
  return -VAR_0;


 if (VAR_13 & VAR_5) {
  if (FUNC_1(VAR_9, VAR_10, VAR_11))
   return -VAR_0;
  return VAR_10;
 }


 if ((FUNC_0(VAR_10) != VAR_7) || (VAR_10 & (VAR_4 - 1)))
  VAR_10 = VAR_3;

 VAR_14.flags = 0;
 VAR_14.length = VAR_11;
 VAR_14.low_limit = VAR_10;
 VAR_14.high_limit = VAR_3 + VAR_8;
 VAR_14.align_mask = VAR_6 & (VAR_4 - 1);
 VAR_14.align_offset = 0;
 return FUNC_2(&VAR_14);
}
