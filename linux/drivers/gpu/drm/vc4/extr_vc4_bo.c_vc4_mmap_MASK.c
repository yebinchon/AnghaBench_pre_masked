
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; unsigned long vm_pgoff; scalar_t__ vm_start; scalar_t__ vm_end; struct drm_gem_object* vm_private_data; } ;
struct TYPE_5__ {TYPE_1__* dev; } ;
struct TYPE_6__ {int paddr; int vaddr; TYPE_2__ base; } ;
struct vc4_bo {scalar_t__ madv; TYPE_3__ base; scalar_t__ validated_shader; } ;
struct file {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,struct vm_area_struct*,int ,int ,scalar_t__) ;
 int FUNC_2 (struct file*,struct vm_area_struct*) ;
 int FUNC_3 (struct vm_area_struct*) ;
 struct vc4_bo* FUNC_4 (struct drm_gem_object*) ;

int FUNC_5(struct file *VAR_5, struct vm_area_struct *VAR_6)
{
 struct drm_gem_object *VAR_7;
 unsigned long VAR_8;
 struct vc4_bo *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_5, VAR_6);
 if (VAR_10)
  return VAR_10;

 VAR_7 = VAR_6->vm_private_data;
 VAR_9 = FUNC_4(VAR_7);

 if (VAR_9->validated_shader && (VAR_6->vm_flags & VAR_4)) {
  FUNC_0("mmaping of shader BOs for writing not allowed.\n");
  return -VAR_0;
 }

 if (VAR_9->madv != VAR_2) {
  FUNC_0("mmaping of %s BO not allowed\n",
     VAR_9->madv == VAR_1 ?
     "purgeable" : "purged");
  return -VAR_0;
 }






 VAR_6->vm_flags &= ~VAR_3;
 VAR_8 = VAR_6->vm_pgoff;
 VAR_6->vm_pgoff = 0;
 VAR_10 = FUNC_1(VAR_9->base.base.dev->dev, VAR_6, VAR_9->base.vaddr,
     VAR_9->base.paddr, VAR_6->vm_end - VAR_6->vm_start);
 VAR_6->vm_pgoff = VAR_8;

 if (VAR_10)
  FUNC_3(VAR_6);

 return VAR_10;
}
