
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_special_mapping {int dummy; } ;
struct vm_fault {int pgoff; int address; } ;
struct vm_area_struct {int vm_page_prot; TYPE_2__* vm_mm; } ;
struct vdso_image {long sym_vvar_start; long sym_vvar_page; long sym_pvclock_page; long sym_hvclock_page; } ;
struct pvclock_vsyscall_time_info {int dummy; } ;
struct ms_hyperv_tsc_page {int dummy; } ;
struct TYPE_3__ {struct vdso_image* vdso_image; } ;
struct TYPE_4__ {TYPE_1__ context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pvclock_vsyscall_time_info*) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 struct ms_hyperv_tsc_page* FUNC_2 () ;
 int FUNC_3 (int ) ;
 struct pvclock_vsyscall_time_info* FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct ms_hyperv_tsc_page*) ;
 int FUNC_7 (struct vm_area_struct*,int ,int) ;
 int FUNC_8 (struct vm_area_struct*,int ,int,int ) ;

__attribute__((used)) static vm_fault_t FUNC_9(const struct vm_special_mapping *VAR_5,
        struct vm_area_struct *VAR_6, struct vm_fault *VAR_7)
{
 const struct vdso_image *VAR_8 = VAR_6->vm_mm->context.vdso_image;
 long VAR_9;

 if (!VAR_8)
  return VAR_3;

 VAR_9 = (long)(VAR_7->pgoff << VAR_0) +
  VAR_8->sym_vvar_start;
 if (VAR_9 == 0)
  return VAR_3;

 if (VAR_9 == VAR_8->sym_vvar_page) {
  return FUNC_7(VAR_6, VAR_7->address,
    FUNC_1(&VAR_4) >> VAR_0);
 } else if (VAR_9 == VAR_8->sym_pvclock_page) {
  struct pvclock_vsyscall_time_info *VAR_10 =
   FUNC_4();
  if (VAR_10 && FUNC_5(VAR_2)) {
   return FUNC_8(VAR_6, VAR_7->address,
     FUNC_0(VAR_10) >> VAR_0,
     FUNC_3(VAR_6->vm_page_prot));
  }
 } else if (VAR_9 == VAR_8->sym_hvclock_page) {
  struct ms_hyperv_tsc_page *VAR_11 = FUNC_2();

  if (VAR_11 && FUNC_5(VAR_1))
   return FUNC_7(VAR_6, VAR_7->address,
     FUNC_6(VAR_11) >> VAR_0);
 }

 return VAR_3;
}
