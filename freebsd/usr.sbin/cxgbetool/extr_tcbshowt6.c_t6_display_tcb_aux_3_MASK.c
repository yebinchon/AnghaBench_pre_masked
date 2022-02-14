
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int _TCBVAR ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;

void FUNC_2 (_TCBVAR *VAR_0, int VAR_1)
{






  FUNC_0("  aux3_slush: 0x%x, unused: buf0 0x%x, buf1: 0x%x\n",
       FUNC_1("aux3_slush"),FUNC_1("ddp_buf0_unused"),FUNC_1("ddp_buf1_unused"));


  FUNC_0("  ind_full: %u, tls_key_mode: %u\n",
       FUNC_1("ddp_indicate_fll"),FUNC_1("tls_key_mode"));


  FUNC_0("  DDP: DDPOFF  ActBuf  IndOut  WaitFrag  Rx2Tx  BufInf\n");
  FUNC_0("         %u       %u       %u        %u        %u      %u\n",
       FUNC_1("ddp_off"),FUNC_1("ddp_active_buf"),FUNC_1("ddp_indicate_out"),
       FUNC_1("ddp_wait_frag"),FUNC_1("ddp_rx2tx"),FUNC_1("ddp_buf_inf")
      );


  FUNC_0("        Ind  PshfEn PushDis Flush NoInvalidate\n");
  FUNC_0("   Buf0: %u      %u       %u    %u       %u\n",
       FUNC_1("ddp_buf0_indicate"),
       FUNC_1("ddp_pshf_enable_0"), FUNC_1("ddp_push_disable_0"),
       FUNC_1("ddp_buf0_flush"), FUNC_1("ddp_psh_no_invalidate0")
        );
  FUNC_0("   Buf1: %u      %u       %u    %u       %u\n",
       FUNC_1("ddp_buf1_indicate"),
       FUNC_1("ddp_pshf_enable_1"), FUNC_1("ddp_push_disable_1"),
       FUNC_1("ddp_buf1_flush"), FUNC_1("ddp_psh_no_invalidate1")
        );
  FUNC_0("        Valid  Offset   Length    Tag\n");
  FUNC_0("   Buf0:  %u    0x%6.6x 0x%6.6x  0x%8.8x",
       FUNC_1("ddp_buf0_valid"),FUNC_1("rx_ddp_buf0_offset"),
       FUNC_1("rx_ddp_buf0_len"),FUNC_1("rx_ddp_buf0_tag")


        );
  if (0==FUNC_1("ddp_off") && 1==FUNC_1("ddp_buf0_valid") && 0==FUNC_1("ddp_active_buf")) {
    FUNC_0("   (Active)\n");
  } else {
    FUNC_0(" (Inactive)\n");
  }


  FUNC_0("   Buf1:  %u    0x%6.6x 0x%6.6x  0x%8.8x",
       FUNC_1("ddp_buf1_valid"),FUNC_1("rx_ddp_buf1_offset"),
       FUNC_1("rx_ddp_buf1_len"),FUNC_1("rx_ddp_buf1_tag")


        );


  if (0==FUNC_1("ddp_off") && 1==FUNC_1("ddp_buf1_valid") && 1==FUNC_1("ddp_active_buf")) {
    FUNC_0("   (Active)\n");
  } else {
    FUNC_0(" (Inactive)\n");
  }






  if (1==FUNC_1("ddp_off")) {
    FUNC_0("   DDP is off (which also disables indicate)\n");
  } else if (1==FUNC_1("ddp_buf0_valid") && 0==FUNC_1("ddp_active_buf")) {
    FUNC_0("   Data being DDP'ed to buf 0, ");
    FUNC_0("which has %u - %u = %u bytes of space left\n",
  FUNC_1("rx_ddp_buf0_len"),FUNC_1("rx_ddp_buf0_offset"),
  FUNC_1("rx_ddp_buf0_len")-FUNC_1("rx_ddp_buf0_offset")
        );
    if (1==FUNC_1("ddp_buf1_valid")) {
      FUNC_0("   And buf1, which is also valid, has %u - %u = %u bytes of space left\n",
    FUNC_1("rx_ddp_buf1_len"),FUNC_1("rx_ddp_buf1_offset"),
    FUNC_1("rx_ddp_buf1_len")-FUNC_1("rx_ddp_buf1_offset")
   );
    }
  } else if (1==FUNC_1("ddp_buf1_valid") && 1==FUNC_1("ddp_active_buf")) {
    FUNC_0("   Data being DDP'ed to buf 1, ");
    FUNC_0("which has %u - %u = %u bytes of space left\n",
  FUNC_1("rx_ddp_buf1_len"),FUNC_1("rx_ddp_buf1_offset"),
  FUNC_1("rx_ddp_buf1_len")-FUNC_1("rx_ddp_buf1_offset")
        );
    if (1==FUNC_1("ddp_buf0_valid")) {
      FUNC_0("   And buf0, which is also valid, has %u - %u = %u bytes of space left\n",
    FUNC_1("rx_ddp_buf0_len"),FUNC_1("rx_ddp_buf0_offset"),
    FUNC_1("rx_ddp_buf0_len")-FUNC_1("rx_ddp_buf0_offset")
   );
    }
  } else if (0==FUNC_1("ddp_buf0_valid") && 1==FUNC_1("ddp_buf1_valid") && 0==FUNC_1("ddp_active_buf")) {
    FUNC_0("   !!! Invalid DDP buf 1 valid, but buf 0 active.\n");
  } else if (1==FUNC_1("ddp_buf0_valid") && 0==FUNC_1("ddp_buf1_valid") && 1==FUNC_1("ddp_active_buf")) {
    FUNC_0("   !!! Invalid DDP buf 0 valid, but buf 1 active.\n");
  } else {
    FUNC_0("   DDP is enabled, but no buffers are active && valid.\n");




    if (0==FUNC_1("ddp_indicate_out")) {
      if (0==FUNC_1("ddp_buf0_indicate") && 0==FUNC_1("ddp_buf1_indicate")) {
 FUNC_0("   0 length Indicate buffers ");
 if (0==FUNC_1("rx_hdr_offset")) {
   FUNC_0("will cause new data to be held in PMRX.\n");
 } else {
   FUNC_0("is causing %u bytes to be held in PMRX\n",
        FUNC_1("rx_hdr_offset"));
 }
      } else {
 FUNC_0("   Data being indicated to host\n");
      }
    } else if (1==FUNC_1("ddp_indicate_out")) {
      FUNC_0("   Indicate is off, which ");
      if (0==FUNC_1("rx_hdr_offset")) {
 FUNC_0("will cause new data to be held in PMRX.\n");
      } else {
 FUNC_0("is causing %u bytes to be held in PMRX\n",
      FUNC_1("rx_hdr_offset"));
      }
    }
  }




}
