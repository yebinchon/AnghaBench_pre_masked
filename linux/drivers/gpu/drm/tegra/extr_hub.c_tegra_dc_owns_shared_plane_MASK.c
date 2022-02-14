
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_plane {int index; struct tegra_dc* dc; } ;
struct tegra_dc {int pipe; struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int ,int ) ;
 int FUNC_1 (struct tegra_plane*,struct tegra_dc*) ;

__attribute__((used)) static bool FUNC_2(struct tegra_dc *VAR_0,
           struct tegra_plane *VAR_1)
{
 struct device *VAR_2 = VAR_0->dev;

 if (FUNC_1(VAR_1, VAR_0) == VAR_0->pipe) {
  if (VAR_1->dc == VAR_0)
   return 1;

  FUNC_0(VAR_2, "head %u owns window %u but is not attached\n",
    VAR_0->pipe, VAR_1->index);
 }

 return 0;
}
