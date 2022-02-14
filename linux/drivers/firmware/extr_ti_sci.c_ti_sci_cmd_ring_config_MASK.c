
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef void* u32 ;
typedef void* u16 ;
struct ti_sci_xfer {scalar_t__ xfer_buf; } ;
struct ti_sci_msg_rm_ring_cfg_req {void* order_id; void* size; void* mode; void* count; void* addr_hi; void* addr_lo; void* index; void* nav_id; void* valid_params; } ;
struct ti_sci_msg_hdr {int dummy; } ;
struct ti_sci_info {int minfo; struct device* dev; } ;
struct ti_sci_handle {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ti_sci_xfer*) ;
 scalar_t__ FUNC_1 (struct ti_sci_handle const*) ;
 int FUNC_2 (struct ti_sci_xfer*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct device*,char*,void*,int) ;
 int FUNC_4 (struct device*,char*,int) ;
 struct ti_sci_info* FUNC_5 (struct ti_sci_handle const*) ;
 int FUNC_6 (struct ti_sci_info*,struct ti_sci_xfer*) ;
 struct ti_sci_xfer* FUNC_7 (struct ti_sci_info*,int ,int ,int,int) ;
 scalar_t__ FUNC_8 (struct ti_sci_msg_hdr*) ;
 int FUNC_9 (int *,struct ti_sci_xfer*) ;

__attribute__((used)) static int FUNC_10(const struct ti_sci_handle *VAR_4,
      u32 VAR_5, u16 VAR_6, u16 VAR_7,
      u32 VAR_8, u32 VAR_9, u32 VAR_10,
      u8 VAR_11, u8 VAR_12, u8 VAR_13)
{
 struct ti_sci_msg_rm_ring_cfg_req *VAR_14;
 struct ti_sci_msg_hdr *VAR_15;
 struct ti_sci_xfer *VAR_16;
 struct ti_sci_info *VAR_17;
 struct device *VAR_18;
 int VAR_19 = 0;

 if (FUNC_1(VAR_4))
  return -VAR_0;

 VAR_17 = FUNC_5(VAR_4);
 VAR_18 = VAR_17->dev;

 VAR_16 = FUNC_7(VAR_17, VAR_3,
       VAR_2,
       sizeof(*VAR_14), sizeof(*VAR_15));
 if (FUNC_0(VAR_16)) {
  VAR_19 = FUNC_2(VAR_16);
  FUNC_4(VAR_18, "RM_RA:Message config failed(%d)\n", VAR_19);
  return VAR_19;
 }
 VAR_14 = (struct ti_sci_msg_rm_ring_cfg_req *)VAR_16->xfer_buf;
 VAR_14->valid_params = VAR_5;
 VAR_14->nav_id = VAR_6;
 VAR_14->index = VAR_7;
 VAR_14->addr_lo = VAR_8;
 VAR_14->addr_hi = VAR_9;
 VAR_14->count = VAR_10;
 VAR_14->mode = VAR_11;
 VAR_14->size = VAR_12;
 VAR_14->order_id = VAR_13;

 VAR_19 = FUNC_6(VAR_17, VAR_16);
 if (VAR_19) {
  FUNC_4(VAR_18, "RM_RA:Mbox config send fail %d\n", VAR_19);
  goto fail;
 }

 VAR_15 = (struct ti_sci_msg_hdr *)VAR_16->xfer_buf;
 VAR_19 = FUNC_8(VAR_15) ? 0 : -VAR_1;

fail:
 FUNC_9(&VAR_17->minfo, VAR_16);
 FUNC_3(VAR_18, "RM_RA:config ring %u ret:%d\n", VAR_7, VAR_19);
 return VAR_19;
}
