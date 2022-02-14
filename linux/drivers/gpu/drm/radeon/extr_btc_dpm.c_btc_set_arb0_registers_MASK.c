
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;
struct evergreen_arb_registers {int mc_arb_rfsh_rate; int mc_arb_burst_time; int mc_arb_dram_timing2; int mc_arb_dram_timing; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct radeon_device *VAR_8,
       struct evergreen_arb_registers *VAR_9)
{
 u32 VAR_10;

 FUNC_2(VAR_1, VAR_9->mc_arb_dram_timing);
 FUNC_2(VAR_2, VAR_9->mc_arb_dram_timing2);

 VAR_10 = (VAR_9->mc_arb_rfsh_rate & VAR_4) >>
  VAR_5;
 FUNC_3(VAR_3, FUNC_0(VAR_10), ~VAR_4);

 VAR_10 = (VAR_9->mc_arb_burst_time & VAR_6) >>
  VAR_7;
 FUNC_3(VAR_0, FUNC_1(VAR_10), ~VAR_6);
}
