
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_special_mapping {int dummy; } ;
struct vm_fault {int pgoff; int page; } ;
struct vm_area_struct {TYPE_2__* vm_mm; } ;
struct vdso_image {int size; scalar_t__ data; } ;
struct TYPE_3__ {struct vdso_image* vdso_image; } ;
struct TYPE_4__ {TYPE_1__ context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static vm_fault_t FUNC_2(const struct vm_special_mapping *VAR_2,
        struct vm_area_struct *VAR_3, struct vm_fault *VAR_4)
{
 const struct vdso_image *VAR_5 = VAR_3->vm_mm->context.vdso_image;

 if (!VAR_5 || (VAR_4->pgoff << VAR_0) >= VAR_5->size)
  return VAR_1;

 VAR_4->page = FUNC_1(VAR_5->data + (VAR_4->pgoff << VAR_0));
 FUNC_0(VAR_4->page);
 return 0;
}
