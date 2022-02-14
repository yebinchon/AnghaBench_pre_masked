
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tegra_smmu_swgroup {int reg; } ;
struct tegra_smmu {TYPE_1__* soc; } ;
struct TYPE_4__ {int reg; int bit; } ;
struct tegra_mc_client {unsigned int swgroup; TYPE_2__ smmu; } ;
struct TYPE_3__ {unsigned int num_clients; struct tegra_mc_client* clients; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct tegra_smmu*,int ) ;
 int FUNC_3 (struct tegra_smmu*,int ,int ) ;
 struct tegra_smmu_swgroup* FUNC_4 (struct tegra_smmu*,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct tegra_smmu *VAR_2, unsigned int VAR_3,
         unsigned int VAR_4)
{
 const struct tegra_smmu_swgroup *VAR_5;
 unsigned int VAR_6;
 u32 VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_2->soc->num_clients; VAR_6++) {
  const struct tegra_mc_client *VAR_8 = &VAR_2->soc->clients[VAR_6];

  if (VAR_8->swgroup != VAR_3)
   continue;

  VAR_7 = FUNC_2(VAR_2, VAR_8->smmu.reg);
  VAR_7 |= FUNC_0(VAR_8->smmu.bit);
  FUNC_3(VAR_2, VAR_7, VAR_8->smmu.reg);
 }

 VAR_5 = FUNC_4(VAR_2, VAR_3);
 if (VAR_5) {
  VAR_7 = FUNC_2(VAR_2, VAR_5->reg);
  VAR_7 &= ~VAR_1;
  VAR_7 |= FUNC_1(VAR_4);
  VAR_7 |= VAR_0;
  FUNC_3(VAR_2, VAR_7, VAR_5->reg);
 }
}
