
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_windowgroup_soc {scalar_t__ dc; unsigned int num_windows; unsigned int* windows; int index; } ;
struct tegra_dc {scalar_t__ pipe; TYPE_1__* soc; } ;
struct drm_plane {int type; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {unsigned int num_wgrps; struct tegra_windowgroup_soc* wgrps; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_plane*) ;
 struct drm_plane* FUNC_1 (struct drm_device*,struct tegra_dc*,int ,unsigned int) ;

__attribute__((used)) static struct drm_plane *FUNC_2(struct drm_device *VAR_1,
          struct tegra_dc *VAR_2)
{
 struct drm_plane *VAR_3, *VAR_4 = ((void*)0);
 unsigned int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_2->soc->num_wgrps; VAR_5++) {
  const struct tegra_windowgroup_soc *VAR_7 = &VAR_2->soc->wgrps[VAR_5];

  if (VAR_7->dc == VAR_2->pipe) {
   for (VAR_6 = 0; VAR_6 < VAR_7->num_windows; VAR_6++) {
    unsigned int VAR_8 = VAR_7->windows[VAR_6];

    VAR_3 = FUNC_1(VAR_1, VAR_2,
          VAR_7->index,
          VAR_8);
    if (FUNC_0(VAR_3))
     return VAR_3;





    if (!VAR_4) {
     VAR_3->type = VAR_0;
     VAR_4 = VAR_3;
    }
   }
  }
 }

 return VAR_4;
}
