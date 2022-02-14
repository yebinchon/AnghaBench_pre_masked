
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mode_create_dumb {int width; int bpp; unsigned int height; void* pitch; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 unsigned int FUNC_0 (int,int) ;
 int FUNC_1 (struct drm_file*,struct drm_device*,struct drm_mode_create_dumb*) ;
 void* FUNC_2 (unsigned int,int) ;

__attribute__((used)) static int FUNC_3(struct drm_file *VAR_0,
       struct drm_device *VAR_1,
       struct drm_mode_create_dumb *VAR_2)
{
 unsigned int VAR_3 = FUNC_0(VAR_2->width * VAR_2->bpp, 8);





 VAR_2->pitch = FUNC_2(VAR_3, 128);
 VAR_2->height = FUNC_2(VAR_2->height, 4);

 return FUNC_1(VAR_0, VAR_1, VAR_2);
}
