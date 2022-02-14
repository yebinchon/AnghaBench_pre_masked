
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int position; int channel; } ;
struct tegra_ivc {TYPE_1__ tx; } ;


 void* FUNC_0 (int) ;
 int FUNC_1 (struct tegra_ivc*) ;
 void* FUNC_2 (struct tegra_ivc*,int ,int ) ;

void *FUNC_3(struct tegra_ivc *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1 < 0)
  return FUNC_0(VAR_1);

 return FUNC_2(VAR_0, VAR_0->tx.channel, VAR_0->tx.position);
}
