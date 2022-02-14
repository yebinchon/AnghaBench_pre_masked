
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_area_struct {unsigned long vm_start; int vm_flags; } ;
struct TYPE_3__ {unsigned long gmap_addr; int gmap_write_flag; int gmap_int_code; int gmap_pfault; } ;
struct task_struct {TYPE_1__ thread; int min_flt; int maj_flt; struct mm_struct* mm; } ;
struct pt_regs {unsigned long int_parm_long; int int_code; } ;
struct mm_struct {int mmap_sem; } ;
struct gmap {scalar_t__ pfault_enabled; } ;
typedef enum fault_type { ____Placeholder_fault_type } fault_type ;
struct TYPE_4__ {scalar_t__ gmap; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;

 unsigned long VAR_9 ;
 scalar_t__ FUNC_0 (int ) ;

 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_2__ VAR_14 ;


 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 unsigned long VAR_26 ;
 unsigned long FUNC_1 (struct gmap*,unsigned long,unsigned long) ;
 unsigned long FUNC_2 (struct gmap*,unsigned long) ;
 int FUNC_3 (struct pt_regs*,int ) ;
 struct task_struct* VAR_27 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct vm_area_struct*,unsigned long) ;
 scalar_t__ FUNC_6 (struct task_struct*) ;
 int FUNC_7 () ;
 struct vm_area_struct* FUNC_8 (struct mm_struct*,unsigned long) ;
 int FUNC_9 (struct pt_regs*) ;
 int FUNC_10 (struct vm_area_struct*,unsigned long,unsigned int) ;
 scalar_t__ FUNC_11 (struct vm_area_struct*) ;
 scalar_t__ FUNC_12 (struct pt_regs*,int) ;
 int FUNC_13 (int ,int,struct pt_regs*,unsigned long) ;
 unsigned long VAR_28 ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (struct pt_regs*) ;

__attribute__((used)) static inline vm_fault_t FUNC_17(struct pt_regs *VAR_29, int VAR_30)
{
 struct gmap *VAR_31;
 struct task_struct *VAR_32;
 struct mm_struct *VAR_33;
 struct vm_area_struct *VAR_34;
 enum fault_type VAR_35;
 unsigned long VAR_36;
 unsigned long VAR_37;
 unsigned int VAR_38;
 vm_fault_t VAR_39;

 VAR_32 = VAR_27;




 FUNC_3(VAR_29, VAR_13);

 if (FUNC_12(VAR_29, 14))
  return 0;

 VAR_33 = VAR_32->mm;
 VAR_36 = VAR_29->int_parm_long;






 VAR_39 = VAR_16;
 VAR_35 = FUNC_9(VAR_29);
 switch (VAR_35) {
 case 130:
  goto out;
 case 128:
  VAR_39 = VAR_17;
  goto out;
 case 129:
 case 131:
  if (FUNC_7() || !VAR_33)
   goto out;
  break;
 }

 VAR_37 = VAR_36 & VAR_26;
 FUNC_13(VAR_10, 1, VAR_29, VAR_37);
 VAR_38 = VAR_3 | VAR_4;
 if (FUNC_16(VAR_29))
  VAR_38 |= VAR_7;
 if (VAR_30 == VAR_25 || (VAR_36 & VAR_28) == 0x400)
  VAR_38 |= VAR_8;
 FUNC_4(&VAR_33->mmap_sem);

 VAR_31 = ((void*)0);
 if (FUNC_0(VAR_0) && VAR_35 == 131) {
  VAR_31 = (struct gmap *) VAR_14.gmap;
  VAR_27->thread.gmap_addr = VAR_37;
  VAR_27->thread.gmap_write_flag = !!(VAR_38 & VAR_8);
  VAR_27->thread.gmap_int_code = VAR_29->int_code & 0xffff;
  VAR_37 = FUNC_2(VAR_31, VAR_37);
  if (VAR_37 == -VAR_1) {
   VAR_39 = VAR_17;
   goto out_up;
  }
  if (VAR_31->pfault_enabled)
   VAR_38 |= VAR_5;
 }

retry:
 VAR_39 = VAR_17;
 VAR_34 = FUNC_8(VAR_33, VAR_37);
 if (!VAR_34)
  goto out_up;

 if (FUNC_14(VAR_34->vm_start > VAR_37)) {
  if (!(VAR_34->vm_flags & VAR_24))
   goto out_up;
  if (FUNC_5(VAR_34, VAR_37))
   goto out_up;
 }





 VAR_39 = VAR_15;
 if (FUNC_14(!(VAR_34->vm_flags & VAR_30)))
  goto out_up;

 if (FUNC_11(VAR_34))
  VAR_37 &= VAR_9;





 VAR_39 = FUNC_10(VAR_34, VAR_37, VAR_38);

 if ((VAR_39 & VAR_22) && FUNC_6(VAR_27)) {
  VAR_39 = VAR_23;
  if (VAR_38 & VAR_5)
   goto out_up;
  goto out;
 }
 if (FUNC_14(VAR_39 & VAR_18))
  goto out_up;






 if (VAR_38 & VAR_3) {
  if (VAR_39 & VAR_19) {
   VAR_32->maj_flt++;
   FUNC_13(VAR_11, 1,
          VAR_29, VAR_37);
  } else {
   VAR_32->min_flt++;
   FUNC_13(VAR_12, 1,
          VAR_29, VAR_37);
  }
  if (VAR_39 & VAR_22) {
   if (FUNC_0(VAR_0) && VAR_31 &&
       (VAR_38 & VAR_5)) {


    VAR_27->thread.gmap_pfault = 1;
    VAR_39 = VAR_21;
    goto out_up;
   }


   VAR_38 &= ~(VAR_3 |
       VAR_5);
   VAR_38 |= VAR_6;
   FUNC_4(&VAR_33->mmap_sem);
   goto retry;
  }
 }
 if (FUNC_0(VAR_0) && VAR_31) {
  VAR_37 = FUNC_1(VAR_31, VAR_27->thread.gmap_addr,
           VAR_37);
  if (VAR_37 == -VAR_1) {
   VAR_39 = VAR_17;
   goto out_up;
  }
  if (VAR_37 == -VAR_2) {
   VAR_39 = VAR_20;
   goto out_up;
  }
 }
 VAR_39 = 0;
out_up:
 FUNC_15(&VAR_33->mmap_sem);
out:
 return VAR_39;
}
