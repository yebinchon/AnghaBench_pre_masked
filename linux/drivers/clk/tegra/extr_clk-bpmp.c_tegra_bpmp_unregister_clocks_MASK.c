
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_bpmp {unsigned int num_clocks; TYPE_1__** clocks; } ;
struct TYPE_2__ {int hw; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct tegra_bpmp *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_clocks; VAR_1++)
  FUNC_0(&VAR_0->clocks[VAR_1]->hw);
}
