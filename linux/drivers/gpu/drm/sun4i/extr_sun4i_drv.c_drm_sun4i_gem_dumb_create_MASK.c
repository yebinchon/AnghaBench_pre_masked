
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mode_create_dumb {int width; int bpp; int pitch; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct drm_file*,struct drm_device*,struct drm_mode_create_dumb*) ;

__attribute__((used)) static int FUNC_3(struct drm_file *VAR_0,
         struct drm_device *VAR_1,
         struct drm_mode_create_dumb *VAR_2)
{

 VAR_2->pitch = FUNC_0(FUNC_1(VAR_2->width * VAR_2->bpp, 8), 2);

 return FUNC_2(VAR_0, VAR_1, VAR_2);
}
