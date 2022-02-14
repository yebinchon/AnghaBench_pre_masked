
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_drm {int pitch_align; } ;
struct tegra_bo {int dummy; } ;
struct drm_mode_create_dumb {int width; int bpp; int pitch; int size; int height; int handle; } ;
struct drm_file {int dummy; } ;
struct drm_device {struct tegra_drm* dev_private; } ;


 unsigned int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (struct tegra_bo*) ;
 int FUNC_2 (struct tegra_bo*) ;
 int FUNC_3 (unsigned int,int ) ;
 struct tegra_bo* FUNC_4 (struct drm_file*,struct drm_device*,int,int ,int *) ;

int FUNC_5(struct drm_file *VAR_0, struct drm_device *VAR_1,
    struct drm_mode_create_dumb *VAR_2)
{
 unsigned int VAR_3 = FUNC_0(VAR_2->width * VAR_2->bpp, 8);
 struct tegra_drm *VAR_4 = VAR_1->dev_private;
 struct tegra_bo *VAR_5;

 VAR_2->pitch = FUNC_3(VAR_3, VAR_4->pitch_align);
 VAR_2->size = VAR_2->pitch * VAR_2->height;

 VAR_5 = FUNC_4(VAR_0, VAR_1, VAR_2->size, 0,
      &VAR_2->handle);
 if (FUNC_1(VAR_5))
  return FUNC_2(VAR_5);

 return 0;
}
