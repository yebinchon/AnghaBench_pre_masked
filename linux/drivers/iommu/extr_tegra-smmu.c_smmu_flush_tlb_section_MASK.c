
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
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct tegra_smmu*,int,int ) ;

__attribute__((used)) static inline void FUNC_2(struct tegra_smmu *VAR_2,
       unsigned long VAR_3,
       unsigned long VAR_4)
{
 u32 VAR_5;

 if (VAR_2->soc->num_asids == 4)
  VAR_5 = (VAR_3 & 0x3) << 29;
 else
  VAR_5 = (VAR_3 & 0x7f) << 24;

 VAR_5 |= VAR_1 | FUNC_0(VAR_4);
 FUNC_1(VAR_2, VAR_5, VAR_0);
}
