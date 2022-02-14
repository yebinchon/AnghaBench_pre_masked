
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct a6xx_hfi_msg_bw_table {int bw_level_num; int ddr_cmds_num; int ddr_wait_bitmask; int* ddr_cmds_addrs; int** ddr_cmds_data; int cnoc_cmds_num; int cnoc_wait_bitmask; int* cnoc_cmds_addrs; int** cnoc_cmds_data; int member_0; } ;
struct a6xx_gmu {int dummy; } ;
typedef int msg ;


 int VAR_0 ;
 int FUNC_0 (struct a6xx_gmu*,int ,struct a6xx_hfi_msg_bw_table*,int,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct a6xx_gmu *VAR_1)
{
 struct a6xx_hfi_msg_bw_table VAR_2 = { 0 };







 VAR_2.bw_level_num = 1;

 VAR_2.ddr_cmds_num = 3;
 VAR_2.ddr_wait_bitmask = 0x07;

 VAR_2.ddr_cmds_addrs[0] = 0x50000;
 VAR_2.ddr_cmds_addrs[1] = 0x5005c;
 VAR_2.ddr_cmds_addrs[2] = 0x5000c;

 VAR_2.ddr_cmds_data[0][0] = 0x40000000;
 VAR_2.ddr_cmds_data[0][1] = 0x40000000;
 VAR_2.ddr_cmds_data[0][2] = 0x40000000;






 VAR_2.cnoc_cmds_num = 3;
 VAR_2.cnoc_wait_bitmask = 0x05;

 VAR_2.cnoc_cmds_addrs[0] = 0x50034;
 VAR_2.cnoc_cmds_addrs[1] = 0x5007c;
 VAR_2.cnoc_cmds_addrs[2] = 0x5004c;

 VAR_2.cnoc_cmds_data[0][0] = 0x40000000;
 VAR_2.cnoc_cmds_data[0][1] = 0x00000000;
 VAR_2.cnoc_cmds_data[0][2] = 0x40000000;

 VAR_2.cnoc_cmds_data[1][0] = 0x60000001;
 VAR_2.cnoc_cmds_data[1][1] = 0x20000001;
 VAR_2.cnoc_cmds_data[1][2] = 0x60000001;

 return FUNC_0(VAR_1, VAR_0, &VAR_2, sizeof(VAR_2),
  ((void*)0), 0);
}
