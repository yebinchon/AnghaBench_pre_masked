
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef struct ti_sci_xfer {scalar_t__ xfer_buf; } const ti_sci_xfer ;
struct ti_sci_msg_resp_get_device_state {int current_state; int programmed_state; int resets; int context_loss_count; } ;
struct ti_sci_msg_req_get_device_state {int id; } ;
struct ti_sci_info {int minfo; struct device* dev; } ;
struct ti_sci_handle {scalar_t__ xfer_buf; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ti_sci_xfer const*) ;
 int FUNC_1 (struct ti_sci_xfer const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct device*,char*,int) ;
 struct ti_sci_info* FUNC_3 (struct ti_sci_xfer const*) ;
 int FUNC_4 (struct ti_sci_info*,struct ti_sci_xfer const*) ;
 struct ti_sci_xfer* FUNC_5 (struct ti_sci_info*,int ,int ,int,int) ;
 int FUNC_6 (struct ti_sci_msg_resp_get_device_state*) ;
 int FUNC_7 (int *,struct ti_sci_xfer const*) ;

__attribute__((used)) static int FUNC_8(const struct ti_sci_handle *VAR_4,
       u32 VAR_5, u32 *VAR_6, u32 *VAR_7,
        u8 *VAR_8, u8 *VAR_9)
{
 struct ti_sci_info *VAR_10;
 struct ti_sci_msg_req_get_device_state *VAR_11;
 struct ti_sci_msg_resp_get_device_state *VAR_12;
 struct ti_sci_xfer *VAR_13;
 struct device *VAR_14;
 int VAR_15 = 0;

 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);
 if (!VAR_4)
  return -VAR_0;

 if (!VAR_6 && !VAR_7 && !VAR_8 && !VAR_9)
  return -VAR_0;

 VAR_10 = FUNC_3(VAR_4);
 VAR_14 = VAR_10->dev;

 VAR_13 = FUNC_5(VAR_10, VAR_3,
       VAR_2,
       sizeof(*VAR_11), sizeof(*VAR_12));
 if (FUNC_0(VAR_13)) {
  VAR_15 = FUNC_1(VAR_13);
  FUNC_2(VAR_14, "Message alloc failed(%d)\n", VAR_15);
  return VAR_15;
 }
 VAR_11 = (struct ti_sci_msg_req_get_device_state *)VAR_13->xfer_buf;
 VAR_11->id = VAR_5;

 VAR_15 = FUNC_4(VAR_10, VAR_13);
 if (VAR_15) {
  FUNC_2(VAR_14, "Mbox send fail %d\n", VAR_15);
  goto fail;
 }

 VAR_12 = (struct ti_sci_msg_resp_get_device_state *)VAR_13->xfer_buf;
 if (!FUNC_6(VAR_12)) {
  VAR_15 = -VAR_1;
  goto fail;
 }

 if (VAR_6)
  *VAR_6 = VAR_12->context_loss_count;
 if (VAR_7)
  *VAR_7 = VAR_12->resets;
 if (VAR_8)
  *VAR_8 = VAR_12->programmed_state;
 if (VAR_9)
  *VAR_9 = VAR_12->current_state;
fail:
 FUNC_7(&VAR_10->minfo, VAR_13);

 return VAR_15;
}
