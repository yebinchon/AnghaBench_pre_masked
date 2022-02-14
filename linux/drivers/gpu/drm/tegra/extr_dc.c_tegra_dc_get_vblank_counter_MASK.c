
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_dc {int base; scalar_t__ syncpt; TYPE_1__* soc; } ;
struct drm_crtc {int dummy; } ;
struct TYPE_2__ {int has_nvdisplay; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 struct tegra_dc* FUNC_2 (struct drm_crtc*) ;

__attribute__((used)) static u32 FUNC_3(struct drm_crtc *VAR_0)
{
 struct tegra_dc *VAR_1 = FUNC_2(VAR_0);


 if (VAR_1->syncpt && !VAR_1->soc->has_nvdisplay)
  return FUNC_1(VAR_1->syncpt);


 return (u32)FUNC_0(&VAR_1->base);
}
