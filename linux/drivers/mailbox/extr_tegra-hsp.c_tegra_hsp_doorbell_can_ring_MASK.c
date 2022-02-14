
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_hsp_doorbell {int channel; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static bool FUNC_2(struct tegra_hsp_doorbell *VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_1(&VAR_2->channel, VAR_0);

 return (VAR_3 & FUNC_0(VAR_1)) != 0;
}
