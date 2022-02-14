
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_dfll {TYPE_1__* dev; } ;
struct TYPE_2__ {int of_node; } ;


 int FUNC_0 (TYPE_1__*,char*,char const*,int) ;
 int FUNC_1 (int ,char const*,int *) ;

__attribute__((used)) static bool FUNC_2(struct tegra_dfll *VAR_0, const char *VAR_1, u32 *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_0->dev->of_node, VAR_1, VAR_2);

 if (VAR_3 < 0) {
  FUNC_0(VAR_0->dev, "failed to read DT parameter %s: %d\n",
   VAR_1, VAR_3);
  return 0;
 }

 return 1;
}
