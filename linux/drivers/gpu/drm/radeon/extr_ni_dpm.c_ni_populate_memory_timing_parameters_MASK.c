
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct rv7xx_pl {int mclk; int sclk; } ;
struct radeon_device {int dummy; } ;
struct TYPE_3__ {void* mc_arb_dram_timing2; void* mc_arb_dram_timing; scalar_t__ mc_arb_rfsh_rate; } ;
typedef TYPE_1__ SMC_NIslands_MCArbDramTimingRegisterSet ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct radeon_device*,int ,int ) ;
 scalar_t__ FUNC_3 (struct radeon_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct radeon_device *VAR_2,
      struct rv7xx_pl *VAR_3,
      SMC_NIslands_MCArbDramTimingRegisterSet *VAR_4)
{
 u32 VAR_5;
 u32 VAR_6;

 VAR_4->mc_arb_rfsh_rate =
  (u8)FUNC_3(VAR_2, VAR_3->sclk);


 FUNC_2(VAR_2, VAR_3->sclk, VAR_3->mclk);

 VAR_5 = FUNC_0(VAR_0);
 VAR_6 = FUNC_0(VAR_1);

 VAR_4->mc_arb_dram_timing = FUNC_1(VAR_5);
 VAR_4->mc_arb_dram_timing2 = FUNC_1(VAR_6);

 return 0;
}
