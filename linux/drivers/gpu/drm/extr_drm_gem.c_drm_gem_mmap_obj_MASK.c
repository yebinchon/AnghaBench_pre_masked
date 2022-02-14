
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; int vm_flags; int vm_page_prot; struct drm_gem_object* vm_private_data; scalar_t__ vm_ops; } ;
struct drm_gem_object {TYPE_1__* funcs; struct drm_device* dev; } ;
struct drm_device {TYPE_2__* driver; } ;
struct TYPE_4__ {scalar_t__ gem_vm_ops; } ;
struct TYPE_3__ {scalar_t__ vm_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct drm_gem_object*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;

int FUNC_4(struct drm_gem_object *VAR_5, unsigned long VAR_6,
       struct vm_area_struct *VAR_7)
{
 struct drm_device *VAR_8 = VAR_5->dev;


 if (VAR_6 < VAR_7->vm_end - VAR_7->vm_start)
  return -VAR_0;

 if (VAR_5->funcs && VAR_5->funcs->vm_ops)
  VAR_7->vm_ops = VAR_5->funcs->vm_ops;
 else if (VAR_8->driver->gem_vm_ops)
  VAR_7->vm_ops = VAR_8->driver->gem_vm_ops;
 else
  return -VAR_0;

 VAR_7->vm_flags |= VAR_3 | VAR_4 | VAR_2 | VAR_1;
 VAR_7->vm_private_data = VAR_5;
 VAR_7->vm_page_prot = FUNC_2(FUNC_3(VAR_7->vm_flags));
 VAR_7->vm_page_prot = FUNC_1(VAR_7->vm_page_prot);







 FUNC_0(VAR_5);

 return 0;
}
