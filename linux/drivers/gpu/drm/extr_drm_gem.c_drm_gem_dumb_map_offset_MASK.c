
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct drm_gem_object {int vma_node; scalar_t__ import_attach; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_gem_object*) ;
 struct drm_gem_object* FUNC_1 (struct drm_file*,int ) ;
 int FUNC_2 (struct drm_gem_object*) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct drm_file *VAR_2, struct drm_device *VAR_3,
       u32 VAR_4, u64 *VAR_5)
{
 struct drm_gem_object *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_2, VAR_4);
 if (!VAR_6)
  return -VAR_1;


 if (VAR_6->import_attach) {
  VAR_7 = -VAR_0;
  goto out;
 }

 VAR_7 = FUNC_0(VAR_6);
 if (VAR_7)
  goto out;

 *VAR_5 = FUNC_3(&VAR_6->vma_node);
out:
 FUNC_2(VAR_6);

 return VAR_7;
}
