
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_sci_xfer {scalar_t__ xfer_buf; } ;
struct ti_sci_msg_rm_udmap_flow_cfg_req {int rx_ps_location; int rx_fdq3_qnum; int rx_fdq2_qnum; int rx_fdq1_qnum; int rx_fdq0_sz0_qnum; int rx_dest_tag_lo_sel; int rx_dest_tag_hi_sel; int rx_src_tag_lo_sel; int rx_src_tag_hi_sel; int rx_dest_tag_lo; int rx_dest_tag_hi; int rx_src_tag_lo; int rx_src_tag_hi; int rx_dest_qnum; int rx_sop_offset; int rx_desc_type; int rx_error_handling; int rx_psinfo_present; int rx_einfo_present; int flow_index; int nav_id; int valid_params; } ;
struct ti_sci_msg_rm_udmap_flow_cfg {int flow_index; int rx_ps_location; int rx_fdq3_qnum; int rx_fdq2_qnum; int rx_fdq1_qnum; int rx_fdq0_sz0_qnum; int rx_dest_tag_lo_sel; int rx_dest_tag_hi_sel; int rx_src_tag_lo_sel; int rx_src_tag_hi_sel; int rx_dest_tag_lo; int rx_dest_tag_hi; int rx_src_tag_lo; int rx_src_tag_hi; int rx_dest_qnum; int rx_sop_offset; int rx_desc_type; int rx_error_handling; int rx_psinfo_present; int rx_einfo_present; int nav_id; int valid_params; } ;
struct ti_sci_msg_hdr {int dummy; } ;
struct ti_sci_info {struct device* dev; int minfo; } ;
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
   const struct ti_sci_msg_rm_udmap_flow_cfg *VAR_4)
{
 struct ti_sci_msg_rm_udmap_flow_cfg_req *VAR_5;
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
  FUNC_4(VAR_9, "RX_FL_CFG: Message alloc failed(%d)\n", VAR_10);
  return VAR_10;
 }
 VAR_5 = (struct ti_sci_msg_rm_udmap_flow_cfg_req *)VAR_7->xfer_buf;
 VAR_5->valid_params = VAR_4->valid_params;
 VAR_5->nav_id = VAR_4->nav_id;
 VAR_5->flow_index = VAR_4->flow_index;
 VAR_5->rx_einfo_present = VAR_4->rx_einfo_present;
 VAR_5->rx_psinfo_present = VAR_4->rx_psinfo_present;
 VAR_5->rx_error_handling = VAR_4->rx_error_handling;
 VAR_5->rx_desc_type = VAR_4->rx_desc_type;
 VAR_5->rx_sop_offset = VAR_4->rx_sop_offset;
 VAR_5->rx_dest_qnum = VAR_4->rx_dest_qnum;
 VAR_5->rx_src_tag_hi = VAR_4->rx_src_tag_hi;
 VAR_5->rx_src_tag_lo = VAR_4->rx_src_tag_lo;
 VAR_5->rx_dest_tag_hi = VAR_4->rx_dest_tag_hi;
 VAR_5->rx_dest_tag_lo = VAR_4->rx_dest_tag_lo;
 VAR_5->rx_src_tag_hi_sel = VAR_4->rx_src_tag_hi_sel;
 VAR_5->rx_src_tag_lo_sel = VAR_4->rx_src_tag_lo_sel;
 VAR_5->rx_dest_tag_hi_sel = VAR_4->rx_dest_tag_hi_sel;
 VAR_5->rx_dest_tag_lo_sel = VAR_4->rx_dest_tag_lo_sel;
 VAR_5->rx_fdq0_sz0_qnum = VAR_4->rx_fdq0_sz0_qnum;
 VAR_5->rx_fdq1_qnum = VAR_4->rx_fdq1_qnum;
 VAR_5->rx_fdq2_qnum = VAR_4->rx_fdq2_qnum;
 VAR_5->rx_fdq3_qnum = VAR_4->rx_fdq3_qnum;
 VAR_5->rx_ps_location = VAR_4->rx_ps_location;

 VAR_10 = FUNC_6(VAR_8, VAR_7);
 if (VAR_10) {
  FUNC_4(VAR_9, "RX_FL_CFG: Mbox send fail %d\n", VAR_10);
  goto fail;
 }

 VAR_6 = (struct ti_sci_msg_hdr *)VAR_7->xfer_buf;
 VAR_10 = FUNC_8(VAR_6) ? 0 : -VAR_0;

fail:
 FUNC_9(&VAR_8->minfo, VAR_7);
 FUNC_3(VAR_8->dev, "RX_FL_CFG: %u ret:%d\n", VAR_4->flow_index, VAR_10);
 return VAR_10;
}
