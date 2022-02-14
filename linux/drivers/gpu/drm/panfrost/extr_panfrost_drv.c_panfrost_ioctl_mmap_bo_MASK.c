
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_panfrost_mmap_bo {scalar_t__ flags; int offset; int handle; } ;
struct drm_gem_object {int vma_node; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ is_heap; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct drm_gem_object*) ;
 struct drm_gem_object* FUNC_3 (struct drm_file*,int ) ;
 int FUNC_4 (struct drm_gem_object*) ;
 int FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (struct drm_gem_object*) ;

__attribute__((used)) static int FUNC_7(struct drm_device *VAR_2, void *VAR_3,
        struct drm_file *VAR_4)
{
 struct drm_panfrost_mmap_bo *VAR_5 = VAR_3;
 struct drm_gem_object *VAR_6;
 int VAR_7;

 if (VAR_5->flags != 0) {
  FUNC_1("unknown mmap_bo flags: %d\n", VAR_5->flags);
  return -VAR_0;
 }

 VAR_6 = FUNC_3(VAR_4, VAR_5->handle);
 if (!VAR_6) {
  FUNC_0("Failed to look up GEM BO %d\n", VAR_5->handle);
  return -VAR_1;
 }


 if (FUNC_6(VAR_6)->is_heap)
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_6);
 if (VAR_7 == 0)
  VAR_5->offset = FUNC_5(&VAR_6->vma_node);
 FUNC_4(VAR_6);

 return VAR_7;
}
