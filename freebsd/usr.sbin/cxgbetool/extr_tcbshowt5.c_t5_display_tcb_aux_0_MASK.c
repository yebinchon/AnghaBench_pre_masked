
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int _TCBVAR ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*) ;

void FUNC_7 (_TCBVAR *VAR_0, int VAR_1)
{







  FUNC_0("STATE:\n");
  FUNC_0("  %-12s (%-2u), %s, lock_tid %u, rss_fw %u\n",
       FUNC_4(FUNC_6("t_state")),
       FUNC_6("t_state"),
       FUNC_3(FUNC_6("ip_version")),
       FUNC_6("lock_tid"),
       FUNC_6("rss_fw")
      );
  FUNC_0("  l2t_ix 0x%x, smac sel 0x%x, tos 0x%x\n",
       FUNC_6("l2t_ix"),
       FUNC_6("smac_sel"),
       FUNC_6("tos")
       );
  FUNC_0("  maxseg %u, recv_scaleflag %u, recv_tstmp %u, recv_sack %u\n",
       FUNC_6("t_maxseg"), FUNC_6("recv_scale"),
       FUNC_6("recv_tstmp"), FUNC_6("recv_sack"));


  FUNC_0("TIMERS:\n");
  FUNC_0("  timer    %u,  dack_timer      %u\n",
    FUNC_6("timer"), FUNC_6("dack_timer"));
  FUNC_0("  mod_schd: tx: %u, rx: %u, reason 0x%1x\n",
       FUNC_6("mod_schd_tx"),
       FUNC_6("mod_schd_rx"),
       ((FUNC_6("mod_schd_reason2")<<2) | (FUNC_6("mod_schd_reason1")<<1) |
        FUNC_6("mod_schd_reason0"))
       );


  FUNC_0("  max_rt   %-2u, rxtshift        %u, keepalive   %u\n",
    FUNC_6("max_rt"), FUNC_6("t_rxtshift"),
    FUNC_6("keepalive"));
  FUNC_0("  timestamp_offset 0x%x,  timestamp 0x%x\n",
    FUNC_6("timestamp_offset"),FUNC_6("timestamp"));


  FUNC_0("  t_rtt_ts_recent_age %u  t_rttseq_recent %u\n",
    FUNC_6("t_rtt_ts_recent_age"), FUNC_6("t_rtseq_recent"));
  FUNC_0("  t_srtt %u, t_rttvar %u\n",
    FUNC_6("t_srtt"),FUNC_6("t_rttvar"));






  FUNC_0("TRANSMIT BUFFER:\n");
  FUNC_0("  snd_una %u, snd_nxt %u, snd_max %u, tx_max %u\n",
       FUNC_6("snd_una"),FUNC_6("snd_nxt"),
       FUNC_6("snd_max"),FUNC_6("tx_max"));
  FUNC_0("  core_fin %u, tx_hdr_offset %u\n",
       FUNC_6("core_fin"), FUNC_1(FUNC_6("tx_max"),FUNC_6("snd_una"))
      );
  if (FUNC_6("recv_scale") && !FUNC_6("active_open")) {
    FUNC_0("  rcv_adv    %-5u << %-2u == %u (recv_scaleflag %u rcv_scale %u active open %u)\n",
  FUNC_6("rcv_adv"), FUNC_6("rcv_scale"),
  FUNC_6("rcv_adv") << FUNC_6("rcv_scale"),
  FUNC_6("recv_scale"), FUNC_6("rcv_scale"), FUNC_6("active_open"));
  } else {
    FUNC_0("  rcv_adv    %-5u (rcv_scale %-2u recv_scaleflag %u active_open %u)\n",
  FUNC_6("rcv_adv"), FUNC_6("rcv_scale"),
  FUNC_6("recv_scale"), FUNC_6("active_open"));
  }

  FUNC_0("  snd_cwnd   %-5u  snd_ssthresh %u  snd_rec %u\n",
       FUNC_6("snd_cwnd") , FUNC_6("snd_ssthresh"), FUNC_6("snd_rec")
      );




  FUNC_0("  cctrl: sel %s, ecn %u, ece %u, cwr %u, rfr %u\n",
       FUNC_2(FUNC_6("cctrl_sel0"),FUNC_6("cctrl_sel1")),
       FUNC_6("cctrl_ecn"), FUNC_6("cctrl_ece"), FUNC_6("cctrl_cwr"),
       FUNC_6("cctrl_rfr"));
  FUNC_0("  t_dupacks %u, dupack_count_odd %u, fast_recovery %u\n",
       FUNC_6("t_dupacks"), FUNC_6("dupack_count_odd"),FUNC_6("fast_recovery"));
  FUNC_0("  core_more    %u, core_urg,       %u  core_push   %u,",
       FUNC_6("core_more"),FUNC_6("core_urg"),FUNC_6("core_push"));
  FUNC_0("  core_flush %u\n",FUNC_6("core_flush"));
  FUNC_0("  nagle        %u, ssws_disable    %u, turbo       %u,",
       FUNC_6("nagle"), FUNC_6("ssws_disabled"), FUNC_6("turbo"));
  FUNC_0("  tx_pdu_out %u\n",FUNC_6("tx_pdu_out"));
  FUNC_0("  tx_pace_auto %u, tx_pace_fixed   %u, tx_queue    %u",
       FUNC_6("tx_pace_auto"),FUNC_6("tx_pace_fixed"),FUNC_6("tx_queue"));


  FUNC_0("   tx_quiesce %u\n",FUNC_6("tx_quiesce"));
  FUNC_0("  tx_channel   %u, tx_channel1     %u, tx_channel0 %u\n",
       FUNC_6("tx_channel"),
       (FUNC_6("tx_channel")>>1)&1,
       FUNC_6("tx_channel")&1
       );




  FUNC_0("  tx_hdr_ptr   0x%-6x   tx_last_ptr 0x%-6x  tx_compact %u\n",
       FUNC_6("tx_hdr_ptr"),FUNC_6("tx_last_ptr"),FUNC_6("tx_compact"));




  FUNC_0("RECEIVE BUFFER:\n");
  FUNC_0("  last_ack_sent %-10u                      rx_compact %u\n",
       FUNC_6("ts_last_ack_sent"),FUNC_6("rx_compact"));
  FUNC_0("  rcv_nxt       %-10u  hdr_off %-10u\n",
       FUNC_6("rcv_nxt"), FUNC_6("rx_hdr_offset"));
  FUNC_0("  frag0_idx     %-10u  length  %-10u  rx_ptr  0x%-8x\n",
       FUNC_6("rx_frag0_start_idx"),
       FUNC_6("rx_frag0_len"),
       FUNC_6("rx_ptr"));
  FUNC_0("  frag1_idx     %-10u  length  %-10u  ",
       FUNC_6("rx_frag1_start_idx_offset"),
       FUNC_6("rx_frag1_len"));




  if (FUNC_6("ulp_type")!=4) {
    FUNC_0("frag1_ptr  0x%-8x\n",FUNC_6("rx_frag1_ptr"));
  } else {
    FUNC_0("\n");
  }


  if (FUNC_6("ulp_type") !=6 && FUNC_6("ulp_type") != 5 && FUNC_6("ulp_type") !=4) {
    FUNC_0("  frag2_idx     %-10u  length  %-10u  frag2_ptr  0x%-8x\n",
  FUNC_6("rx_frag2_start_idx_offset"),
  FUNC_6("rx_frag2_len"),
  FUNC_6("rx_frag2_ptr"));
    FUNC_0("  frag3_idx     %-10u  length  %-10u  frag3_ptr  0x%-8x\n",
  FUNC_6("rx_frag3_start_idx_offset"),
  FUNC_6("rx_frag3_len"),
  FUNC_6("rx_frag3_ptr"));
  }






  FUNC_0("  peer_fin %u,   rx_pdu_out %u, pdu_len %u\n",
       FUNC_6("peer_fin"),FUNC_6("rx_pdu_out"), FUNC_6("pdu_len"));




  if (FUNC_6("recv_scale")) {
    FUNC_0("  rcv_wnd %u >> snd_scale %u == %u, recv_scaleflag = %u\n",
  FUNC_6("rcv_wnd"), FUNC_6("snd_scale"),
  FUNC_6("rcv_wnd") >> FUNC_6("snd_scale"),
  FUNC_6("recv_scale"));
  } else {
    FUNC_0("  rcv_wnd %u.  (snd_scale %u, recv_scaleflag = %u)\n",
  FUNC_6("rcv_wnd"), FUNC_6("snd_scale"),
  FUNC_6("recv_scale"));
  }




 FUNC_0("  dack_mss   %u dack       %u,  dack_not_acked: %u\n",
       FUNC_6("dack_mss"),FUNC_6("dack"),FUNC_6("dack_not_acked"));
  FUNC_0("  rcv_coal   %u rcv_co_psh %u rcv_co_last_psh  %u heart %u\n",
       FUNC_6("rcv_coalesce_enable"),
       FUNC_6("rcv_coalesce_push"),
       FUNC_6("rcv_coalesce_last_psh"),
       FUNC_6("rcv_coalesce_heartbeat"));

  FUNC_0("  rx_channel %u rx_quiesce %u rx_flow_ctrl_dis %u,",
       FUNC_6("rx_channel"), FUNC_6("rx_quiesce"),
       FUNC_6("rx_flow_control_disable"));
  FUNC_0("  rx_flow_ctrl_ddp %u\n",
       FUNC_6("rx_flow_control_ddp"));


  FUNC_0("MISCELANEOUS:\n");
  FUNC_0("  pend_ctl: 0x%1x, unused_flags: 0x%x,  main_slush: 0x%x\n",
       ((FUNC_6("pend_ctl2")<<2) | (FUNC_6("pend_ctl1")<<1) |
        FUNC_6("pend_ctl0")),
       FUNC_6("unused"),FUNC_6("main_slush"));
  FUNC_0("  Migrating %u, ask_mode %u, non_offload %u, rss_info %u\n",
       FUNC_6("migrating"),
       FUNC_6("ask_mode"), FUNC_6("non_offload"), FUNC_6("rss_info"));
  FUNC_0("  ULP: ulp_type %u (%s), ulp_raw %u",
       FUNC_6("ulp_type"), FUNC_5(FUNC_6("ulp_type")),
       FUNC_6("ulp_raw"));


  if (VAR_1==1) {
    FUNC_0(",  ulp_ext %u",FUNC_6("ulp_ext"));
  }
  FUNC_0("\n");




  FUNC_0("  RDMA: error   %u, flm_err %u\n",
       FUNC_6("rdma_error"), FUNC_6("rdma_flm_error"));


}
