
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_windowgroup {int dummy; } ;
struct tegra_display_hub {struct tegra_windowgroup* wgrps; TYPE_1__* soc; } ;
struct TYPE_2__ {unsigned int num_wgrps; } ;


 int FUNC_0 (struct tegra_windowgroup*) ;

void FUNC_1(struct tegra_display_hub *VAR_0)
{
 unsigned int VAR_1;





 for (VAR_1 = 0; VAR_1 < VAR_0->soc->num_wgrps; VAR_1++) {
  struct tegra_windowgroup *VAR_2 = &VAR_0->wgrps[VAR_1];

  FUNC_0(VAR_2);
 }
}
