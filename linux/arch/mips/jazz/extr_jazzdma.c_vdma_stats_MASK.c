
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

void FUNC_2(void)
{
 int VAR_10;

 FUNC_0("vdma_stats: CONFIG: %08x\n",
        FUNC_1(VAR_2));
 FUNC_0("R4030 translation table base: %08x\n",
        FUNC_1(VAR_8));
 FUNC_0("R4030 translation table limit: %08x\n",
        FUNC_1(VAR_9));
 FUNC_0("vdma_stats: INV_ADDR: %08x\n",
        FUNC_1(VAR_4));
 FUNC_0("vdma_stats: R_FAIL_ADDR: %08x\n",
        FUNC_1(VAR_7));
 FUNC_0("vdma_stats: M_FAIL_ADDR: %08x\n",
        FUNC_1(VAR_6));
 FUNC_0("vdma_stats: IRQ_SOURCE: %08x\n",
        FUNC_1(VAR_5));
 FUNC_0("vdma_stats: I386_ERROR: %08x\n",
        FUNC_1(VAR_3));
 FUNC_0("vdma_chnl_modes:   ");
 for (VAR_10 = 0; VAR_10 < 8; VAR_10++)
  FUNC_0("%04x ",
         (unsigned) FUNC_1(VAR_1 +
         (VAR_10 << 5)));
 FUNC_0("\n");
 FUNC_0("vdma_chnl_enables: ");
 for (VAR_10 = 0; VAR_10 < 8; VAR_10++)
  FUNC_0("%04x ",
         (unsigned) FUNC_1(VAR_0 +
         (VAR_10 << 5)));
 FUNC_0("\n");
}
