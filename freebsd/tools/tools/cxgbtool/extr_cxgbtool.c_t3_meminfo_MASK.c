
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static int
FUNC_1(const uint32_t *VAR_0)
{
 enum {
  SG_EGR_CNTX_BADDR = 0x58,
  SG_CQ_CONTEXT_BADDR = 0x6c,
  CIM_SDRAM_BASE_ADDR = 0x28c,
  CIM_SDRAM_ADDR_SIZE = 0x290,
  TP_CMM_MM_BASE = 0x314,
  TP_CMM_TIMER_BASE = 0x318,
  TP_CMM_MM_RX_FLST_BASE = 0x460,
  TP_CMM_MM_TX_FLST_BASE = 0x464,
  TP_CMM_MM_PS_FLST_BASE = 0x468,
  ULPRX_ISCSI_LLIMIT = 0x50c,
  ULPRX_ISCSI_ULIMIT = 0x510,
  ULPRX_TDDP_LLIMIT = 0x51c,
  ULPRX_TDDP_ULIMIT = 0x520,
  ULPRX_STAG_LLIMIT = 0x52c,
  ULPRX_STAG_ULIMIT = 0x530,
  ULPRX_RQ_LLIMIT = 0x534,
  ULPRX_RQ_ULIMIT = 0x538,
  ULPRX_PBL_LLIMIT = 0x53c,
  ULPRX_PBL_ULIMIT = 0x540,
 };

 unsigned int VAR_1 = VAR_0[SG_EGR_CNTX_BADDR / 4],
       VAR_2 = VAR_0[SG_CQ_CONTEXT_BADDR / 4],
       VAR_3 = VAR_0[TP_CMM_TIMER_BASE / 4] & 0xfffffff,
       VAR_4 = VAR_0[TP_CMM_MM_BASE / 4],
       VAR_5 = VAR_0[TP_CMM_MM_PS_FLST_BASE / 4],
       VAR_6 = VAR_0[TP_CMM_MM_RX_FLST_BASE / 4],
       VAR_7 = VAR_0[TP_CMM_MM_TX_FLST_BASE / 4],
       VAR_8 = VAR_0[CIM_SDRAM_BASE_ADDR / 4],
       VAR_9 = VAR_0[CIM_SDRAM_ADDR_SIZE / 4];
 unsigned int VAR_10 = VAR_0[ULPRX_ISCSI_LLIMIT / 4],
       VAR_11 = VAR_0[ULPRX_ISCSI_ULIMIT / 4],
       VAR_12 = VAR_0[ULPRX_TDDP_LLIMIT / 4],
       VAR_13 = VAR_0[ULPRX_TDDP_ULIMIT / 4],
       VAR_14 = VAR_0[ULPRX_STAG_LLIMIT / 4],
       VAR_15 = VAR_0[ULPRX_STAG_ULIMIT / 4],
       VAR_16 = VAR_0[ULPRX_RQ_LLIMIT / 4],
       VAR_17 = VAR_0[ULPRX_RQ_ULIMIT / 4],
       VAR_18 = VAR_0[ULPRX_PBL_LLIMIT / 4],
       VAR_19 = VAR_0[ULPRX_PBL_ULIMIT / 4];

 FUNC_0("CM memory map:\n");
 FUNC_0("  TCB region:      0x%08x - 0x%08x [%u]\n", 0, VAR_1 - 1,
        VAR_1);
 FUNC_0("  Egress contexts: 0x%08x - 0x%08x [%u]\n", VAR_1,
        VAR_2 - 1, VAR_2 - VAR_1);
 FUNC_0("  CQ contexts:     0x%08x - 0x%08x [%u]\n", VAR_2,
        VAR_3 - 1, VAR_3 - VAR_2);
 FUNC_0("  Timers:          0x%08x - 0x%08x [%u]\n", VAR_3,
        VAR_4 - 1, VAR_4 - VAR_3);
 FUNC_0("  Pstructs:        0x%08x - 0x%08x [%u]\n", VAR_4,
        VAR_5 - 1, VAR_5 - VAR_4);
 FUNC_0("  Pstruct FL:      0x%08x - 0x%08x [%u]\n", VAR_5,
        VAR_6 - 1, VAR_6 - VAR_5);
 FUNC_0("  Rx FL:           0x%08x - 0x%08x [%u]\n", VAR_6, VAR_7 - 1,
        VAR_7 - VAR_6);
 FUNC_0("  Tx FL:           0x%08x - 0x%08x [%u]\n", VAR_7, VAR_8 - 1,
        VAR_8 - VAR_7);
 FUNC_0("  uP RAM:          0x%08x - 0x%08x [%u]\n", VAR_8,
        VAR_8 + VAR_9 - 1, VAR_9);

 FUNC_0("\nPMRX memory map:\n");
 FUNC_0("  iSCSI region:    0x%08x - 0x%08x [%u]\n", VAR_10, VAR_11,
        VAR_11 - VAR_10 + 1);
 FUNC_0("  TCP DDP region:  0x%08x - 0x%08x [%u]\n", VAR_12, VAR_13,
        VAR_13 - VAR_12 + 1);
 FUNC_0("  TPT region:      0x%08x - 0x%08x [%u]\n", VAR_14, VAR_15,
        VAR_15 - VAR_14 + 1);
 FUNC_0("  RQ region:       0x%08x - 0x%08x [%u]\n", VAR_16, VAR_17,
        VAR_17 - VAR_16 + 1);
 FUNC_0("  PBL region:      0x%08x - 0x%08x [%u]\n", VAR_18, VAR_19,
        VAR_19 - VAR_18 + 1);
 return 0;
}
