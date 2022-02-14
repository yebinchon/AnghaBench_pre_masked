
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mode_create_dumb {int pitch; int height; int handle; int size; int bpp; int width; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct drm_device*,struct drm_file*,int ,int,int *,char*) ;

int FUNC_3(struct drm_file *VAR_2, struct drm_device *VAR_3,
  struct drm_mode_create_dumb *VAR_4)
{
 VAR_4->pitch = FUNC_1(VAR_4->width, VAR_4->bpp);
 VAR_4->size = FUNC_0(VAR_4->pitch * VAR_4->height);
 return FUNC_2(VAR_3, VAR_2, VAR_4->size,
   VAR_0 | VAR_1, &VAR_4->handle, "dumb");
}
