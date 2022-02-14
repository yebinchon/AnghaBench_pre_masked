
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tegra_plane {scalar_t__ index; struct tegra_dc* dc; } ;
struct TYPE_5__ {scalar_t__ w; } ;
struct TYPE_4__ {scalar_t__ w; } ;
struct tegra_dc_window {TYPE_2__ dst; TYPE_1__ src; } ;
struct tegra_dc {TYPE_3__* soc; } ;
struct TYPE_6__ {scalar_t__ has_win_a_without_filters; } ;



__attribute__((used)) static bool
FUNC_0(struct tegra_plane *VAR_0,
         const struct tegra_dc_window *VAR_1)
{
 struct tegra_dc *VAR_2 = VAR_0->dc;

 if (VAR_1->src.w == VAR_1->dst.w)
  return 0;

 if (VAR_0->index == 0 && VAR_2->soc->has_win_a_without_filters)
  return 0;

 return 1;
}
