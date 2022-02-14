
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tegra_dc {TYPE_1__* soc; } ;
struct drm_plane {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_4__ {int (* destroy ) (struct drm_plane*) ;} ;
struct TYPE_3__ {scalar_t__ supports_cursor; } ;


 struct drm_plane* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct drm_plane*) ;
 int FUNC_2 (struct drm_plane*) ;
 int FUNC_3 (struct drm_plane*) ;
 int FUNC_4 (struct drm_plane*) ;
 struct drm_plane* FUNC_5 (struct drm_device*,struct tegra_dc*,int,int) ;
 TYPE_2__ VAR_0 ;
 struct drm_plane* FUNC_6 (struct drm_device*,struct tegra_dc*) ;

__attribute__((used)) static struct drm_plane *FUNC_7(struct drm_device *VAR_1,
          struct tegra_dc *VAR_2)
{
 struct drm_plane *VAR_3[2], *VAR_4;
 unsigned int VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 VAR_4 = FUNC_6(VAR_1, VAR_2);
 if (FUNC_1(VAR_4))
  return VAR_4;

 if (VAR_2->soc->supports_cursor)
  VAR_5 = 2;
 else
  VAR_5 = 1;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  VAR_3[VAR_6] = FUNC_5(VAR_1, VAR_2, 1 + VAR_6,
         0);
  if (FUNC_1(VAR_3[VAR_6])) {
   VAR_7 = FUNC_2(VAR_3[VAR_6]);

   while (VAR_6--)
    VAR_0.destroy(VAR_3[VAR_6]);

   VAR_0.destroy(VAR_4);
   return FUNC_0(VAR_7);
  }
 }

 return VAR_4;
}
