
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_bo {int gem; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 struct tegra_bo* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct tegra_bo*) ;
 int FUNC_2 (struct drm_file*,int *,int *) ;
 int FUNC_3 (int *) ;
 struct tegra_bo* FUNC_4 (struct drm_device*,size_t,unsigned long) ;
 int FUNC_5 (int *) ;

struct tegra_bo *FUNC_6(struct drm_file *VAR_0,
          struct drm_device *VAR_1,
          size_t VAR_2,
          unsigned long VAR_3,
          u32 *VAR_4)
{
 struct tegra_bo *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_4(VAR_1, VAR_2, VAR_3);
 if (FUNC_1(VAR_5))
  return VAR_5;

 VAR_6 = FUNC_2(VAR_0, &VAR_5->gem, VAR_4);
 if (VAR_6) {
  FUNC_5(&VAR_5->gem);
  return FUNC_0(VAR_6);
 }

 FUNC_3(&VAR_5->gem);

 return VAR_5;
}
