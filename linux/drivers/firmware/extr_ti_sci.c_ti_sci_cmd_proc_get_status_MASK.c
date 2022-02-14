
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ buf; } ;
typedef struct ti_sci_xfer {TYPE_1__ tx_message; scalar_t__ xfer_buf; } const ti_sci_xfer ;
struct ti_sci_msg_resp_get_status {int bootvector_low; int status_flags; int control_flags; int config_flags; scalar_t__ bootvector_high; } ;
struct ti_sci_msg_req_get_status {int processor_id; } ;
struct ti_sci_info {int minfo; struct device* dev; } ;
struct ti_sci_handle {TYPE_1__ tx_message; scalar_t__ xfer_buf; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ti_sci_xfer const*) ;
 int FUNC_1 (struct ti_sci_xfer const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct device*,char*,int) ;
 struct ti_sci_info* FUNC_3 (struct ti_sci_xfer const*) ;
 int FUNC_4 (struct ti_sci_info*,struct ti_sci_xfer const*) ;
 struct ti_sci_xfer* FUNC_5 (struct ti_sci_info*,int ,int ,int,int) ;
 int FUNC_6 (struct ti_sci_msg_resp_get_status*) ;
 int FUNC_7 (int *,struct ti_sci_xfer const*) ;

__attribute__((used)) static int FUNC_8(const struct ti_sci_handle *VAR_7,
          u8 VAR_8, u64 *VAR_9, u32 *VAR_10,
          u32 *VAR_11, u32 *VAR_12)
{
 struct ti_sci_msg_resp_get_status *VAR_13;
 struct ti_sci_msg_req_get_status *VAR_14;
 struct ti_sci_info *VAR_15;
 struct ti_sci_xfer *VAR_16;
 struct device *VAR_17;
 int VAR_18 = 0;

 if (!VAR_7)
  return -VAR_0;
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_15 = FUNC_3(VAR_7);
 VAR_17 = VAR_15->dev;

 VAR_16 = FUNC_5(VAR_15, VAR_6,
       VAR_5,
       sizeof(*VAR_14), sizeof(*VAR_13));
 if (FUNC_0(VAR_16)) {
  VAR_18 = FUNC_1(VAR_16);
  FUNC_2(VAR_17, "Message alloc failed(%d)\n", VAR_18);
  return VAR_18;
 }
 VAR_14 = (struct ti_sci_msg_req_get_status *)VAR_16->xfer_buf;
 VAR_14->processor_id = VAR_8;

 VAR_18 = FUNC_4(VAR_15, VAR_16);
 if (VAR_18) {
  FUNC_2(VAR_17, "Mbox send fail %d\n", VAR_18);
  goto fail;
 }

 VAR_13 = (struct ti_sci_msg_resp_get_status *)VAR_16->tx_message.buf;

 if (!FUNC_6(VAR_13)) {
  VAR_18 = -VAR_1;
 } else {
  *VAR_9 = (VAR_13->bootvector_low & VAR_4) |
        (((u64)VAR_13->bootvector_high << VAR_3) &
         VAR_2);
  *VAR_10 = VAR_13->config_flags;
  *VAR_11 = VAR_13->control_flags;
  *VAR_12 = VAR_13->status_flags;
 }

fail:
 FUNC_7(&VAR_15->minfo, VAR_16);

 return VAR_18;
}
