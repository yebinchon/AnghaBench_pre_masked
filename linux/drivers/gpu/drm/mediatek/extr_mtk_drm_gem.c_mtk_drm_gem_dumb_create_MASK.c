
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_drm_gem_obj {int base; } ;
struct drm_mode_create_dumb {int pitch; int width; int bpp; int size; int height; int handle; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (struct mtk_drm_gem_obj*) ;
 int FUNC_2 (struct mtk_drm_gem_obj*) ;
 int FUNC_3 (struct drm_file*,int *,int *) ;
 int FUNC_4 (int *) ;
 struct mtk_drm_gem_obj* FUNC_5 (struct drm_device*,int,int) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct drm_file *VAR_0, struct drm_device *VAR_1,
       struct drm_mode_create_dumb *VAR_2)
{
 struct mtk_drm_gem_obj *VAR_3;
 int VAR_4;

 VAR_2->pitch = FUNC_0(VAR_2->width * VAR_2->bpp, 8);
 VAR_2->size = VAR_2->pitch * VAR_2->height;

 VAR_3 = FUNC_5(VAR_1, VAR_2->size, 0);
 if (FUNC_1(VAR_3))
  return FUNC_2(VAR_3);





 VAR_4 = FUNC_3(VAR_0, &VAR_3->base, &VAR_2->handle);
 if (VAR_4)
  goto err_handle_create;


 FUNC_4(&VAR_3->base);

 return 0;

err_handle_create:
 FUNC_6(&VAR_3->base);
 return VAR_4;
}
