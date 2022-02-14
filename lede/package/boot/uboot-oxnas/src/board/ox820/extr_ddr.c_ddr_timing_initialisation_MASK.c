
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int holdoff_cmd_A; int holdoff_cmd_ARW; int holdoff_cmd_N; int holdoff_cmd_LM; int holdoff_cmd_R; int holdoff_cmd_W; int holdoff_cmd_PC; int holdoff_cmd_RF; int holdoff_bank_R; int holdoff_bank_W; int holdoff_dir_RW; int holdoff_dir_WR; int latency_CAS; int latency_WL; int holdoff_FAW; int width_update; int odt_offset; int odt_drive_all; int use_fixed_re; int delay_wr_to_re; int wr_slave_ratio; int rd_slave_ratio0; int rd_slave_ratio1; } ;
typedef TYPE_1__ T_DDR_TIMING_PARAMETERS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_0(
 const T_DDR_TIMING_PARAMETERS *VAR_6)
{
 volatile UINT VAR_7 = 0;

 VAR_7 = (VAR_6->holdoff_cmd_A << 0);
 VAR_7 = VAR_7 + (VAR_6->holdoff_cmd_ARW << 4);
 VAR_7 = VAR_7 + (VAR_6->holdoff_cmd_N << 8);
 VAR_7 = VAR_7 + (VAR_6->holdoff_cmd_LM << 12);
 VAR_7 = VAR_7 + (VAR_6->holdoff_cmd_R << 16);
 VAR_7 = VAR_7 + (VAR_6->holdoff_cmd_W << 20);
 VAR_7 = VAR_7 + (VAR_6->holdoff_cmd_PC << 24);
 *(volatile UINT *) VAR_3 = VAR_7;

 VAR_7 = (VAR_6->holdoff_cmd_RF << 0);
 VAR_7 = VAR_7 + (VAR_6->holdoff_bank_R << 8);
 VAR_7 = VAR_7 + (VAR_6->holdoff_bank_W << 16);
 VAR_7 = VAR_7 + (VAR_6->holdoff_dir_RW << 24);
 VAR_7 = VAR_7 + (VAR_6->holdoff_dir_WR << 28);
 *(volatile UINT *) VAR_4 = VAR_7;

 VAR_7 = (VAR_6->latency_CAS << 0);
 VAR_7 = VAR_7 + (VAR_6->latency_WL << 4);
 VAR_7 = VAR_7 + (VAR_6->holdoff_FAW << 8);
 VAR_7 = VAR_7 + (VAR_6->width_update << 16);
 VAR_7 = VAR_7 + (VAR_6->odt_offset << 21);
 VAR_7 = VAR_7 + (VAR_6->odt_drive_all << 24);

 *(volatile UINT *) VAR_5 = VAR_7;


 VAR_7 = (VAR_6->use_fixed_re << 16)
   | (VAR_6->delay_wr_to_re << 8)
   | (VAR_6->latency_WL << 4)
   | (VAR_6->latency_CAS << 0);

 *(volatile UINT *) VAR_1 = VAR_7;

 VAR_7 = VAR_6->wr_slave_ratio;

 *(volatile UINT *) VAR_2 = VAR_7;

 VAR_7 = VAR_6->rd_slave_ratio0;
 VAR_7 += VAR_6->rd_slave_ratio1 << 8;

 *(volatile UINT *) VAR_0 = VAR_7;

}
