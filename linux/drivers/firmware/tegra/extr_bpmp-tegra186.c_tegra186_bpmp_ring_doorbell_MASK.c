
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_bpmp {struct tegra186_bpmp* priv; } ;
struct TYPE_2__ {int channel; } ;
struct tegra186_bpmp {TYPE_1__ mbox; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct tegra_bpmp *VAR_0)
{
 struct tegra186_bpmp *VAR_1 = VAR_0->priv;
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1->mbox.channel, ((void*)0));
 if (VAR_2 < 0)
  return VAR_2;

 FUNC_0(VAR_1->mbox.channel, 0);

 return 0;
}
