
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_du_device {int dummy; } ;
struct drm_mode_create_dumb {int width; int bpp; int pitch; } ;
struct drm_file {int dummy; } ;
struct drm_device {struct rcar_du_device* dev_private; } ;


 unsigned int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_file*,struct drm_device*,struct drm_mode_create_dumb*) ;
 scalar_t__ FUNC_2 (struct rcar_du_device*,int ) ;
 int FUNC_3 (unsigned int,unsigned int) ;

int FUNC_4(struct drm_file *VAR_1, struct drm_device *VAR_2,
   struct drm_mode_create_dumb *VAR_3)
{
 struct rcar_du_device *VAR_4 = VAR_2->dev_private;
 unsigned int VAR_5 = FUNC_0(VAR_3->width * VAR_3->bpp, 8);
 unsigned int VAR_6;





 if (FUNC_2(VAR_4, VAR_0))
  VAR_6 = 128;
 else
  VAR_6 = 16 * VAR_3->bpp / 8;

 VAR_3->pitch = FUNC_3(VAR_5, VAR_6);

 return FUNC_1(VAR_1, VAR_2, VAR_3);
}
