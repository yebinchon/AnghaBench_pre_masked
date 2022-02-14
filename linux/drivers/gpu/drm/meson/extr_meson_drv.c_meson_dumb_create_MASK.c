
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mode_create_dumb {int pitch; int width; int bpp; int height; int size; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (struct drm_file*,struct drm_device*,struct drm_mode_create_dumb*) ;

__attribute__((used)) static int FUNC_4(struct drm_file *VAR_1, struct drm_device *VAR_2,
        struct drm_mode_create_dumb *VAR_3)
{



 VAR_3->pitch = FUNC_0(FUNC_1(VAR_3->width * VAR_3->bpp, 8), VAR_0);
 VAR_3->size = FUNC_2(VAR_3->pitch * VAR_3->height);

 return FUNC_3(VAR_1, VAR_2, VAR_3);
}
