
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_vc4_mmap_bo {int offset; int handle; } ;
struct drm_gem_object {int vma_node; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 struct drm_gem_object* FUNC_1 (struct drm_file*,int ) ;
 int FUNC_2 (struct drm_gem_object*) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct drm_device *VAR_1, void *VAR_2,
        struct drm_file *VAR_3)
{
 struct drm_vc4_mmap_bo *VAR_4 = VAR_2;
 struct drm_gem_object *VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_4->handle);
 if (!VAR_5) {
  FUNC_0("Failed to look up GEM BO %d\n", VAR_4->handle);
  return -VAR_0;
 }


 VAR_4->offset = FUNC_3(&VAR_5->vma_node);

 FUNC_2(VAR_5);
 return 0;
}
