
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_devfreq {int dummy; } ;
struct TYPE_2__ {int parent; } ;
struct devfreq {TYPE_1__ dev; } ;






 struct tegra_devfreq* FUNC_0 (int ) ;
 int FUNC_1 (struct devfreq*) ;
 int FUNC_2 (struct devfreq*) ;
 int FUNC_3 (struct devfreq*) ;
 int FUNC_4 (struct devfreq*) ;
 int FUNC_5 (struct tegra_devfreq*) ;
 int FUNC_6 (struct tegra_devfreq*) ;

__attribute__((used)) static int FUNC_7(struct devfreq *VAR_0,
     unsigned int VAR_1, void *VAR_2)
{
 struct tegra_devfreq *VAR_3 = FUNC_0(VAR_0->dev.parent);

 switch (VAR_1) {
 case 130:
  FUNC_2(VAR_0);
  FUNC_5(VAR_3);
  break;

 case 129:
  FUNC_6(VAR_3);
  FUNC_3(VAR_0);
  break;

 case 128:
  FUNC_6(VAR_3);
  FUNC_4(VAR_0);
  break;

 case 131:
  FUNC_1(VAR_0);
  FUNC_5(VAR_3);
  break;
 }

 return 0;
}
