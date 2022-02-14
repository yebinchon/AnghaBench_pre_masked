
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
struct rv7xx_pl {int mclk; int sclk; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_3__ {void* mc_arb_burst_time; void* mc_arb_dram_timing2; void* mc_arb_dram_timing; void* mc_arb_rfsh_rate; } ;
typedef TYPE_1__ SMC_SIslands_MCArbDramTimingRegisterSet ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct amdgpu_device*,int ,int ) ;
 void* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct amdgpu_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct amdgpu_device *VAR_4,
      struct rv7xx_pl *VAR_5,
      SMC_SIslands_MCArbDramTimingRegisterSet *VAR_6)
{
 u32 VAR_7;
 u32 VAR_8;
 u32 VAR_9;

 VAR_6->mc_arb_rfsh_rate =
  (u8)FUNC_3(VAR_4, VAR_5->sclk);

 FUNC_1(VAR_4,
         VAR_5->sclk,
                              VAR_5->mclk);

 VAR_7 = FUNC_0(VAR_1);
 VAR_8 = FUNC_0(VAR_2);
 VAR_9 = FUNC_0(VAR_0) & VAR_3;

 VAR_6->mc_arb_dram_timing = FUNC_2(VAR_7);
 VAR_6->mc_arb_dram_timing2 = FUNC_2(VAR_8);
 VAR_6->mc_arb_burst_time = (u8)VAR_9;

 return 0;
}
