
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_v3d_mmap_bo {scalar_t__ flags; int offset; int handle; } ;
struct drm_gem_object {int vma_node; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 struct drm_gem_object* FUNC_2 (struct drm_file*,int ) ;
 int FUNC_3 (struct drm_gem_object*) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct drm_device *VAR_2, void *VAR_3,
        struct drm_file *VAR_4)
{
 struct drm_v3d_mmap_bo *VAR_5 = VAR_3;
 struct drm_gem_object *VAR_6;

 if (VAR_5->flags != 0) {
  FUNC_1("unknown mmap_bo flags: %d\n", VAR_5->flags);
  return -VAR_0;
 }

 VAR_6 = FUNC_2(VAR_4, VAR_5->handle);
 if (!VAR_6) {
  FUNC_0("Failed to look up GEM BO %d\n", VAR_5->handle);
  return -VAR_1;
 }

 VAR_5->offset = FUNC_4(&VAR_6->vma_node);
 FUNC_3(VAR_6);

 return 0;
}
