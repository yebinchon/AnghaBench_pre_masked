
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_smmu {TYPE_1__* soc; } ;
struct TYPE_2__ {int num_asids; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tegra_smmu*,int,int ) ;

__attribute__((used)) static inline void FUNC_1(struct tegra_smmu *VAR_3,
           unsigned long VAR_4)
{
 u32 VAR_5;

 if (VAR_3->soc->num_asids == 4)
  VAR_5 = (VAR_4 & 0x3) << 29;
 else
  VAR_5 = (VAR_4 & 0x7f) << 24;

 VAR_5 |= VAR_1 | VAR_2;
 FUNC_0(VAR_3, VAR_5, VAR_0);
}
