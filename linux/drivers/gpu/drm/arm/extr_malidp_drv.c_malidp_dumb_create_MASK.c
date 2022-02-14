
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct malidp_drm {int dev; } ;
struct drm_mode_create_dumb {int width; int bpp; int pitch; } ;
struct drm_file {int dummy; } ;
struct drm_device {struct malidp_drm* dev_private; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct drm_file*,struct drm_device*,struct drm_mode_create_dumb*) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct drm_file *VAR_0,
         struct drm_device *VAR_1,
         struct drm_mode_create_dumb *VAR_2)
{
 struct malidp_drm *VAR_3 = VAR_1->dev_private;

 u8 VAR_4 = FUNC_3(VAR_3->dev, 1);

 VAR_2->pitch = FUNC_0(FUNC_1(VAR_2->width * VAR_2->bpp, 8), VAR_4);

 return FUNC_2(VAR_0, VAR_1, VAR_2);
}
