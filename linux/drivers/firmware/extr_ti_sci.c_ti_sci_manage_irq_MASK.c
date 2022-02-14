
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u32 ;
typedef void* u16 ;
typedef struct ti_sci_xfer {scalar_t__ xfer_buf; } const ti_sci_xfer ;
struct ti_sci_msg_req_manage_irq {void* secondary_host; void* vint_status_bit; void* global_event; void* vint; void* ia_id; void* dst_host_irq; void* dst_id; void* src_index; void* src_id; int valid_params; } ;
struct ti_sci_msg_hdr {int dummy; } ;
struct ti_sci_info {int minfo; struct device* dev; } ;
struct ti_sci_handle {scalar_t__ xfer_buf; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ti_sci_xfer const*) ;
 int FUNC_1 (struct ti_sci_xfer const*) ;
 int VAR_2 ;
 int FUNC_2 (struct device*,char*,int) ;
 struct ti_sci_info* FUNC_3 (struct ti_sci_xfer const*) ;
 int FUNC_4 (struct ti_sci_info*,struct ti_sci_xfer const*) ;
 struct ti_sci_xfer* FUNC_5 (struct ti_sci_info*,void*,int ,int,int) ;
 scalar_t__ FUNC_6 (struct ti_sci_msg_hdr*) ;
 int FUNC_7 (int *,struct ti_sci_xfer const*) ;

__attribute__((used)) static int FUNC_8(const struct ti_sci_handle *VAR_3,
        u32 VAR_4, u16 VAR_5, u16 VAR_6,
        u16 VAR_7, u16 VAR_8, u16 VAR_9, u16 VAR_10,
        u16 VAR_11, u8 VAR_12, u8 VAR_13,
        u16 VAR_14)
{
 struct ti_sci_msg_req_manage_irq *VAR_15;
 struct ti_sci_msg_hdr *VAR_16;
 struct ti_sci_xfer *VAR_17;
 struct ti_sci_info *VAR_18;
 struct device *VAR_19;
 int VAR_20 = 0;

 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);
 if (!VAR_3)
  return -VAR_0;

 VAR_18 = FUNC_3(VAR_3);
 VAR_19 = VAR_18->dev;

 VAR_17 = FUNC_5(VAR_18, VAR_14, VAR_2,
       sizeof(*VAR_15), sizeof(*VAR_16));
 if (FUNC_0(VAR_17)) {
  VAR_20 = FUNC_1(VAR_17);
  FUNC_2(VAR_19, "Message alloc failed(%d)\n", VAR_20);
  return VAR_20;
 }
 VAR_15 = (struct ti_sci_msg_req_manage_irq *)VAR_17->xfer_buf;
 VAR_15->valid_params = VAR_4;
 VAR_15->src_id = VAR_5;
 VAR_15->src_index = VAR_6;
 VAR_15->dst_id = VAR_7;
 VAR_15->dst_host_irq = VAR_8;
 VAR_15->ia_id = VAR_9;
 VAR_15->vint = VAR_10;
 VAR_15->global_event = VAR_11;
 VAR_15->vint_status_bit = VAR_12;
 VAR_15->secondary_host = VAR_13;

 VAR_20 = FUNC_4(VAR_18, VAR_17);
 if (VAR_20) {
  FUNC_2(VAR_19, "Mbox send fail %d\n", VAR_20);
  goto fail;
 }

 VAR_16 = (struct ti_sci_msg_hdr *)VAR_17->xfer_buf;

 VAR_20 = FUNC_6(VAR_16) ? 0 : -VAR_1;

fail:
 FUNC_7(&VAR_18->minfo, VAR_17);

 return VAR_20;
}
