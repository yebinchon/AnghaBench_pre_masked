
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_gem_object {int dummy; } ;
struct drm_mode_create_dumb {int width; int bpp; int pitch; int size; int height; int handle; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct rockchip_gem_object*) ;
 struct rockchip_gem_object* FUNC_3 (struct drm_file*,struct drm_device*,int,int *) ;

int FUNC_4(struct drm_file *VAR_0,
        struct drm_device *VAR_1,
        struct drm_mode_create_dumb *VAR_2)
{
 struct rockchip_gem_object *VAR_3;
 int VAR_4 = FUNC_1(VAR_2->width * VAR_2->bpp, 8);




 VAR_2->pitch = FUNC_0(VAR_4, 64);
 VAR_2->size = VAR_2->pitch * VAR_2->height;

 VAR_3 = FUNC_3(VAR_0, VAR_1, VAR_2->size,
       &VAR_2->handle);

 return FUNC_2(VAR_3);
}
