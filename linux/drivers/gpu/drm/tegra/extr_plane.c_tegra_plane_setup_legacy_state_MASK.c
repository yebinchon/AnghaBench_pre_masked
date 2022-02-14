
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_plane_state {int dummy; } ;
struct tegra_plane {int dummy; } ;


 int FUNC_0 (struct tegra_plane*,struct tegra_plane_state*) ;
 int FUNC_1 (struct tegra_plane*,struct tegra_plane_state*) ;

int FUNC_2(struct tegra_plane *VAR_0,
       struct tegra_plane_state *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 return 0;
}
