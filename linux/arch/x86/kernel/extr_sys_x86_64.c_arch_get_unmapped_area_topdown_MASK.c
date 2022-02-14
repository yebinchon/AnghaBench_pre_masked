
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_unmapped_area_info {unsigned long length; unsigned long align_offset; scalar_t__ align_mask; int high_limit; int low_limit; int flags; } ;
struct vm_area_struct {int dummy; } ;
struct mm_struct {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 unsigned long const VAR_2 ;
 unsigned long const VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long const VAR_5 ;
 int VAR_6 ;
 unsigned long const VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_1 (int) ;
 int VAR_9 ;
 unsigned long FUNC_2 (struct file*,unsigned long const,unsigned long const,unsigned long const,unsigned long const) ;
 TYPE_1__* VAR_10 ;
 struct vm_area_struct* FUNC_3 (struct mm_struct*,unsigned long) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (unsigned long,unsigned long const) ;
 unsigned long FUNC_9 (unsigned long,unsigned long const,unsigned long const) ;
 unsigned long FUNC_10 (struct vm_area_struct*) ;
 unsigned long FUNC_11 (struct vm_unmapped_area_info*) ;

unsigned long
FUNC_12(struct file *VAR_11, const unsigned long VAR_12,
     const unsigned long VAR_13, const unsigned long VAR_14,
     const unsigned long VAR_15)
{
 struct vm_area_struct *VAR_16;
 struct mm_struct *VAR_17 = VAR_10->mm;
 unsigned long VAR_18 = VAR_12;
 struct vm_unmapped_area_info VAR_19;

 VAR_18 = FUNC_9(VAR_18, VAR_13, VAR_15);
 if (FUNC_0(VAR_18))
  return VAR_18;


 if (VAR_13 > VAR_7)
  return -VAR_1;


 if (VAR_15 & VAR_3)
  return VAR_18;


 if (!FUNC_7() && (VAR_15 & VAR_2))
  goto bottomup;


 if (VAR_18) {
  VAR_18 &= VAR_4;
  if (!FUNC_8(VAR_18, VAR_13))
   goto get_unmapped_area;

  VAR_16 = FUNC_3(VAR_17, VAR_18);
  if (!VAR_16 || VAR_18 + VAR_13 <= FUNC_10(VAR_16))
   return VAR_18;
 }
get_unmapped_area:

 VAR_19.flags = VAR_9;
 VAR_19.length = VAR_13;
 VAR_19.low_limit = VAR_6;
 VAR_19.high_limit = FUNC_6(0);
 if (VAR_18 > VAR_0 && !FUNC_7())
  VAR_19.high_limit += VAR_8 - VAR_0;

 VAR_19.align_mask = 0;
 VAR_19.align_offset = VAR_14 << VAR_5;
 if (VAR_11) {
  VAR_19.align_mask = FUNC_5();
  VAR_19.align_offset += FUNC_4();
 }
 VAR_18 = FUNC_11(&VAR_19);
 if (!(VAR_18 & ~VAR_4))
  return VAR_18;
 FUNC_1(VAR_18 != -VAR_1);

bottomup:






 return FUNC_2(VAR_11, VAR_12, VAR_13, VAR_14, VAR_15);
}
