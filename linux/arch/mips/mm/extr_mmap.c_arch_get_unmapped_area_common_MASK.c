
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_unmapped_area_info {unsigned long length; unsigned long align_mask; unsigned long align_offset; unsigned long low_limit; unsigned long high_limit; scalar_t__ flags; } ;
struct vm_area_struct {int dummy; } ;
struct mm_struct {unsigned long mmap_base; } ;
struct file {int dummy; } ;
typedef enum mmap_allocation_direction { ____Placeholder_mmap_allocation_direction } mmap_allocation_direction ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_1 (unsigned long) ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_1__* VAR_10 ;
 struct vm_area_struct* FUNC_2 (struct mm_struct*,unsigned long) ;
 unsigned long VAR_11 ;
 scalar_t__ FUNC_3 (int) ;
 unsigned long FUNC_4 (struct vm_area_struct*) ;
 unsigned long FUNC_5 (struct vm_unmapped_area_info*) ;

__attribute__((used)) static unsigned long FUNC_6(struct file *VAR_12,
 unsigned long VAR_13, unsigned long VAR_14, unsigned long VAR_15,
 unsigned long VAR_16, enum mmap_allocation_direction VAR_17)
{
 struct mm_struct *VAR_18 = VAR_10->mm;
 struct vm_area_struct *VAR_19;
 unsigned long VAR_20 = VAR_13;
 int VAR_21;
 struct vm_unmapped_area_info VAR_22;

 if (FUNC_3(VAR_14 > VAR_8))
  return -VAR_2;

 if (VAR_16 & VAR_3) {

  if (VAR_8 - VAR_14 < VAR_20)
   return -VAR_1;





  if ((VAR_16 & VAR_4) &&
      ((VAR_20 - (VAR_15 << VAR_6)) & VAR_11))
   return -VAR_1;
  return VAR_20;
 }

 VAR_21 = 0;
 if (VAR_12 || (VAR_16 & VAR_4))
  VAR_21 = 1;


 if (VAR_20) {
  if (VAR_21)
   VAR_20 = FUNC_0(VAR_20, VAR_15);
  else
   VAR_20 = FUNC_1(VAR_20);

  VAR_19 = FUNC_2(VAR_18, VAR_20);
  if (VAR_8 - VAR_14 >= VAR_20 &&
      (!VAR_19 || VAR_20 + VAR_14 <= FUNC_4(VAR_19)))
   return VAR_20;
 }

 VAR_22.length = VAR_14;
 VAR_22.align_mask = VAR_21 ? (VAR_5 & VAR_11) : 0;
 VAR_22.align_offset = VAR_15 << VAR_6;

 if (VAR_17 == VAR_0) {
  VAR_22.flags = VAR_9;
  VAR_22.low_limit = VAR_7;
  VAR_22.high_limit = VAR_18->mmap_base;
  VAR_20 = FUNC_5(&VAR_22);

  if (!(VAR_20 & ~VAR_5))
   return VAR_20;







 }

 VAR_22.flags = 0;
 VAR_22.low_limit = VAR_18->mmap_base;
 VAR_22.high_limit = VAR_8;
 return FUNC_5(&VAR_22);
}
