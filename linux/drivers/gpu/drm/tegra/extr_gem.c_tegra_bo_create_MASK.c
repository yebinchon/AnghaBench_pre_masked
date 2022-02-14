
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; } ;
struct tegra_bo {int gem; int flags; TYPE_1__ tiling; } ;
struct drm_device {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 struct tegra_bo* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct tegra_bo*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tegra_bo*) ;
 int FUNC_4 (struct drm_device*,struct tegra_bo*) ;
 struct tegra_bo* FUNC_5 (struct drm_device*,size_t) ;

struct tegra_bo *FUNC_6(struct drm_device *VAR_4, size_t VAR_5,
     unsigned long VAR_6)
{
 struct tegra_bo *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_5(VAR_4, VAR_5);
 if (FUNC_1(VAR_7))
  return VAR_7;

 VAR_8 = FUNC_4(VAR_4, VAR_7);
 if (VAR_8 < 0)
  goto release;

 if (VAR_6 & VAR_1)
  VAR_7->tiling.mode = VAR_3;

 if (VAR_6 & VAR_0)
  VAR_7->flags |= VAR_2;

 return VAR_7;

release:
 FUNC_2(&VAR_7->gem);
 FUNC_3(VAR_7);
 return FUNC_0(VAR_8);
}
