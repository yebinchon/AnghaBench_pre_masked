
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef void* u32 ;
struct ti_sci_xfer {scalar_t__ xfer_buf; } ;
struct ti_sci_msg_rm_ring_get_cfg_resp {int order_id; int size; void* count; void* addr_hi; void* addr_lo; int mode; } ;
struct ti_sci_msg_rm_ring_get_cfg_req {void* index; void* nav_id; } ;
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
 int FUNC_8 (struct ti_sci_msg_rm_ring_get_cfg_resp*) ;
 int FUNC_9 (int *,struct ti_sci_xfer*) ;

__attribute__((used)) static int FUNC_10(const struct ti_sci_handle *VAR_4,
          u32 VAR_5, u32 VAR_6, u8 *VAR_7,
          u32 *VAR_8, u32 *VAR_9,
          u32 *VAR_10, u8 *VAR_11, u8 *VAR_12)
{
 struct ti_sci_msg_rm_ring_get_cfg_resp *VAR_13;
 struct ti_sci_msg_rm_ring_get_cfg_req *VAR_14;
 struct ti_sci_xfer *VAR_15;
 struct ti_sci_info *VAR_16;
 struct device *VAR_17;
 int VAR_18 = 0;

 if (FUNC_1(VAR_4))
  return -VAR_0;

 VAR_16 = FUNC_5(VAR_4);
 VAR_17 = VAR_16->dev;

 VAR_15 = FUNC_7(VAR_16, VAR_3,
       VAR_2,
       sizeof(*VAR_14), sizeof(*VAR_13));
 if (FUNC_0(VAR_15)) {
  VAR_18 = FUNC_2(VAR_15);
  FUNC_4(VAR_17,
   "RM_RA:Message get config failed(%d)\n", VAR_18);
  return VAR_18;
 }
 VAR_14 = (struct ti_sci_msg_rm_ring_get_cfg_req *)VAR_15->xfer_buf;
 VAR_14->nav_id = VAR_5;
 VAR_14->index = VAR_6;

 VAR_18 = FUNC_6(VAR_16, VAR_15);
 if (VAR_18) {
  FUNC_4(VAR_17, "RM_RA:Mbox get config send fail %d\n", VAR_18);
  goto fail;
 }

 VAR_13 = (struct ti_sci_msg_rm_ring_get_cfg_resp *)VAR_15->xfer_buf;

 if (!FUNC_8(VAR_13)) {
  VAR_18 = -VAR_1;
 } else {
  if (VAR_7)
   *VAR_7 = VAR_13->mode;
  if (VAR_8)
   *VAR_8 = VAR_13->addr_lo;
  if (VAR_9)
   *VAR_9 = VAR_13->addr_hi;
  if (VAR_10)
   *VAR_10 = VAR_13->count;
  if (VAR_11)
   *VAR_11 = VAR_13->size;
  if (VAR_12)
   *VAR_12 = VAR_13->order_id;
 };

fail:
 FUNC_9(&VAR_16->minfo, VAR_15);
 FUNC_3(VAR_17, "RM_RA:get config ring %u ret:%d\n", VAR_6, VAR_18);
 return VAR_18;
}
