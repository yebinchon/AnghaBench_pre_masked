
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_cma_object {int base; int vaddr; int paddr; } ;
struct drm_device {int dev; } ;


 int VAR_0 ;
 struct drm_gem_cma_object* FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct drm_gem_cma_object*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct drm_gem_cma_object* FUNC_2 (struct drm_device*,size_t) ;
 int FUNC_3 (int ,char*,size_t) ;
 int FUNC_4 (int ,size_t,int *,int) ;
 int FUNC_5 (int *) ;
 size_t FUNC_6 (size_t,int ) ;

struct drm_gem_cma_object *FUNC_7(struct drm_device *VAR_4,
           size_t VAR_5)
{
 struct drm_gem_cma_object *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_6(VAR_5, VAR_2);

 VAR_6 = FUNC_2(VAR_4, VAR_5);
 if (FUNC_1(VAR_6))
  return VAR_6;

 VAR_6->vaddr = FUNC_4(VAR_4->dev, VAR_5, &VAR_6->paddr,
          VAR_1 | VAR_3);
 if (!VAR_6->vaddr) {
  FUNC_3(VAR_4->dev, "failed to allocate buffer with size %zu\n",
   VAR_5);
  VAR_7 = -VAR_0;
  goto error;
 }

 return VAR_6;

error:
 FUNC_5(&VAR_6->base);
 return FUNC_0(VAR_7);
}
