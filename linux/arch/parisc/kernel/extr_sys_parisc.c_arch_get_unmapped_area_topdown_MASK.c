
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_unmapped_area_info {unsigned long length; int align_mask; unsigned long align_offset; int high_limit; int low_limit; int flags; } ;
struct vm_area_struct {int dummy; } ;
struct mm_struct {int mmap_base; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 unsigned long FUNC_0 (unsigned long,int,unsigned long const) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_1 (struct file*) ;
 unsigned long const VAR_2 ;
 unsigned long const VAR_3 ;
 unsigned long FUNC_2 (unsigned long) ;
 int VAR_4 ;
 unsigned long const VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct file*,unsigned long) ;
 int VAR_7 ;
 unsigned long const VAR_8 ;
 int FUNC_4 (int) ;
 int VAR_9 ;
 unsigned long FUNC_5 (struct file*,unsigned long const,unsigned long const,unsigned long const,unsigned long const) ;
 TYPE_1__* VAR_10 ;
 struct vm_area_struct* FUNC_6 (struct mm_struct*,unsigned long,struct vm_area_struct**) ;
 unsigned long FUNC_7 (int,unsigned long const) ;
 unsigned long FUNC_8 (struct vm_area_struct*) ;
 unsigned long FUNC_9 (struct vm_area_struct*) ;
 unsigned long FUNC_10 (struct vm_unmapped_area_info*) ;

unsigned long
FUNC_11(struct file *VAR_11, const unsigned long VAR_12,
     const unsigned long VAR_13, const unsigned long VAR_14,
     const unsigned long VAR_15)
{
 struct vm_area_struct *VAR_16, *VAR_17;
 struct mm_struct *VAR_18 = VAR_10->mm;
 unsigned long VAR_19 = VAR_12;
 int VAR_20, VAR_21;
 struct vm_unmapped_area_info VAR_22;


 if (VAR_13 > VAR_8)
  return -VAR_1;

 VAR_20 = 0;
 if (VAR_11 || (VAR_15 & VAR_3))
  VAR_20 = 1;
 VAR_21 = FUNC_1(VAR_11);

 if (VAR_15 & VAR_2) {
  if ((VAR_15 & VAR_3) && VAR_21 &&
      (VAR_19 - FUNC_7(VAR_21, VAR_14))
   & (VAR_7 - 1))
   return -VAR_0;
  goto found_addr;
 }


 if (VAR_19) {
  if (VAR_20 && VAR_21)
   VAR_19 = FUNC_0(VAR_19, VAR_21, VAR_14);
  else
   VAR_19 = FUNC_2(VAR_19);

  VAR_16 = FUNC_6(VAR_18, VAR_19, &VAR_17);
  if (VAR_8 - VAR_13 >= VAR_19 &&
      (!VAR_16 || VAR_19 + VAR_13 <= FUNC_9(VAR_16)) &&
      (!VAR_17 || VAR_19 >= FUNC_8(VAR_17)))
   goto found_addr;
 }

 VAR_22.flags = VAR_9;
 VAR_22.length = VAR_13;
 VAR_22.low_limit = VAR_6;
 VAR_22.high_limit = VAR_18->mmap_base;
 VAR_22.align_mask = VAR_21 ? (VAR_4 & (VAR_7 - 1)) : 0;
 VAR_22.align_offset = FUNC_7(VAR_21, VAR_14);
 VAR_19 = FUNC_10(&VAR_22);
 if (!(VAR_19 & ~VAR_4))
  goto found_addr;
 FUNC_4(VAR_19 != -VAR_1);







 return FUNC_5(VAR_11, VAR_12, VAR_13, VAR_14, VAR_15);

found_addr:
 if (VAR_20 && !VAR_21 && !(VAR_19 & ~VAR_4))
  FUNC_3(VAR_11, VAR_19 - (VAR_14 << VAR_5));

 return VAR_19;
}
