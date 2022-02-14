
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tegra_dfll {TYPE_3__* soc; int tune_range; } ;
struct TYPE_6__ {int (* set_clock_trimmers_low ) () ;TYPE_2__* cvb; } ;
struct TYPE_4__ {int tune1; int tune0_low; } ;
struct TYPE_5__ {TYPE_1__ cpu_dfll_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tegra_dfll*) ;
 int FUNC_1 (struct tegra_dfll*,int ,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct tegra_dfll *VAR_3)
{
 VAR_3->tune_range = VAR_2;

 FUNC_1(VAR_3, VAR_3->soc->cvb->cpu_dfll_data.tune0_low, VAR_0);
 FUNC_1(VAR_3, VAR_3->soc->cvb->cpu_dfll_data.tune1, VAR_1);
 FUNC_0(VAR_3);

 if (VAR_3->soc->set_clock_trimmers_low)
  VAR_3->soc->set_clock_trimmers_low();
}
