
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_sci_xfer {scalar_t__ xfer_buf; } ;
struct ti_sci_msg_rm_udmap_tx_ch_cfg_req {int tx_burst_size; int tx_sched_priority; int fdepth; int tx_orderid; int tx_qos; int tx_priority; int txcq_qnum; int tx_credit_count; int tx_fetch_size; int tx_supr_tdpkt; int tx_chan_type; int tx_atype; int tx_filt_pswords; int tx_filt_einfo; int tx_pause_on_err; int index; int nav_id; int valid_params; } ;
struct ti_sci_msg_rm_udmap_tx_ch_cfg {int index; int tx_burst_size; int tx_sched_priority; int fdepth; int tx_orderid; int tx_qos; int tx_priority; int txcq_qnum; int tx_credit_count; int tx_fetch_size; int tx_supr_tdpkt; int tx_chan_type; int tx_atype; int tx_filt_pswords; int tx_filt_einfo; int tx_pause_on_err; int nav_id; int valid_params; } ;
struct ti_sci_msg_hdr {int dummy; } ;
struct ti_sci_info {int minfo; struct device* dev; } ;
struct ti_sci_handle {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ti_sci_xfer*) ;
 scalar_t__ FUNC_1 (struct ti_sci_handle const*) ;
 int FUNC_2 (struct ti_sci_xfer*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct device*,char*,int ,int) ;
 int FUNC_4 (struct device*,char*,int) ;
 struct ti_sci_info* FUNC_5 (struct ti_sci_handle const*) ;
 int FUNC_6 (struct ti_sci_info*,struct ti_sci_xfer*) ;
 struct ti_sci_xfer* FUNC_7 (struct ti_sci_info*,int ,int ,int,int) ;
 scalar_t__ FUNC_8 (struct ti_sci_msg_hdr*) ;
 int FUNC_9 (int *,struct ti_sci_xfer*) ;

__attribute__((used)) static int FUNC_10(const struct ti_sci_handle *VAR_3,
   const struct ti_sci_msg_rm_udmap_tx_ch_cfg *VAR_4)
{
 struct ti_sci_msg_rm_udmap_tx_ch_cfg_req *VAR_5;
 struct ti_sci_msg_hdr *VAR_6;
 struct ti_sci_xfer *VAR_7;
 struct ti_sci_info *VAR_8;
 struct device *VAR_9;
 int VAR_10 = 0;

 if (FUNC_1(VAR_3))
  return -VAR_0;

 VAR_8 = FUNC_5(VAR_3);
 VAR_9 = VAR_8->dev;

 VAR_7 = FUNC_7(VAR_8, VAR_1,
       VAR_2,
       sizeof(*VAR_5), sizeof(*VAR_6));
 if (FUNC_0(VAR_7)) {
  VAR_10 = FUNC_2(VAR_7);
  FUNC_4(VAR_9, "Message TX_CH_CFG alloc failed(%d)\n", VAR_10);
  return VAR_10;
 }
 VAR_5 = (struct ti_sci_msg_rm_udmap_tx_ch_cfg_req *)VAR_7->xfer_buf;
 VAR_5->valid_params = VAR_4->valid_params;
 VAR_5->nav_id = VAR_4->nav_id;
 VAR_5->index = VAR_4->index;
 VAR_5->tx_pause_on_err = VAR_4->tx_pause_on_err;
 VAR_5->tx_filt_einfo = VAR_4->tx_filt_einfo;
 VAR_5->tx_filt_pswords = VAR_4->tx_filt_pswords;
 VAR_5->tx_atype = VAR_4->tx_atype;
 VAR_5->tx_chan_type = VAR_4->tx_chan_type;
 VAR_5->tx_supr_tdpkt = VAR_4->tx_supr_tdpkt;
 VAR_5->tx_fetch_size = VAR_4->tx_fetch_size;
 VAR_5->tx_credit_count = VAR_4->tx_credit_count;
 VAR_5->txcq_qnum = VAR_4->txcq_qnum;
 VAR_5->tx_priority = VAR_4->tx_priority;
 VAR_5->tx_qos = VAR_4->tx_qos;
 VAR_5->tx_orderid = VAR_4->tx_orderid;
 VAR_5->fdepth = VAR_4->fdepth;
 VAR_5->tx_sched_priority = VAR_4->tx_sched_priority;
 VAR_5->tx_burst_size = VAR_4->tx_burst_size;

 VAR_10 = FUNC_6(VAR_8, VAR_7);
 if (VAR_10) {
  FUNC_4(VAR_9, "Mbox send TX_CH_CFG fail %d\n", VAR_10);
  goto fail;
 }

 VAR_6 = (struct ti_sci_msg_hdr *)VAR_7->xfer_buf;
 VAR_10 = FUNC_8(VAR_6) ? 0 : -VAR_0;

fail:
 FUNC_9(&VAR_8->minfo, VAR_7);
 FUNC_3(VAR_9, "TX_CH_CFG: chn %u ret:%u\n", VAR_4->index, VAR_10);
 return VAR_10;
}
