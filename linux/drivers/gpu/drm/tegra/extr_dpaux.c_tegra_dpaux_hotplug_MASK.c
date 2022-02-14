
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct tegra_dpaux {TYPE_2__* output; } ;
struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {TYPE_1__ connector; } ;


 int FUNC_0 (int ) ;
 struct tegra_dpaux* FUNC_1 (struct work_struct*) ;

__attribute__((used)) static void FUNC_2(struct work_struct *VAR_0)
{
 struct tegra_dpaux *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->output)
  FUNC_0(VAR_1->output->connector.dev);
}
