
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vm_area_struct {unsigned int vm_end; unsigned int vm_start; int vm_pgoff; TYPE_3__* vm_file; } ;
struct drm_gem_object {int vma_node; } ;
struct TYPE_5__ {int bdev; } ;
struct amdgpu_device {TYPE_2__ mman; } ;
struct TYPE_4__ {int ttm; int bdev; } ;
struct amdgpu_bo {int flags; TYPE_1__ tbo; } ;
struct TYPE_6__ {int private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct amdgpu_bo*) ;
 unsigned int FUNC_1 (struct amdgpu_bo*) ;
 struct amdgpu_device* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 struct amdgpu_bo* FUNC_6 (struct drm_gem_object*) ;
 int FUNC_7 (TYPE_3__*,struct vm_area_struct*,int *) ;

int FUNC_8(struct drm_gem_object *VAR_5,
     struct vm_area_struct *VAR_6)
{
 struct amdgpu_bo *VAR_7 = FUNC_6(VAR_5);
 struct amdgpu_device *VAR_8 = FUNC_2(VAR_7->tbo.bdev);
 unsigned VAR_9 = FUNC_1(VAR_7);
 int VAR_10;

 if (!VAR_6->vm_file)
  return -VAR_2;

 if (VAR_8 == ((void*)0))
  return -VAR_2;


 if (VAR_9 < VAR_6->vm_end - VAR_6->vm_start)
  return -VAR_1;

 if (FUNC_3(VAR_7->tbo.ttm) ||
     (VAR_7->flags & VAR_0)) {
  return -VAR_3;
 }
 VAR_6->vm_pgoff += FUNC_0(VAR_7) >> VAR_4;


 VAR_10 = FUNC_4(&VAR_5->vma_node, VAR_6->vm_file->private_data);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_7(VAR_6->vm_file, VAR_6, &VAR_8->mman.bdev);
 FUNC_5(&VAR_5->vma_node, VAR_6->vm_file->private_data);

 return VAR_10;
}
