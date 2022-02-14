
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
typedef struct ti_sci_xfer {scalar_t__ xfer_buf; } const ti_sci_xfer ;
struct ti_sci_msg_req_set_device_resets {void* resets; void* id; } ;
struct ti_sci_msg_hdr {int dummy; } ;
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
 scalar_t__ FUNC_6 (struct ti_sci_msg_hdr*) ;
 int FUNC_7 (int *,struct ti_sci_xfer const*) ;

__attribute__((used)) static int FUNC_8(const struct ti_sci_handle *VAR_4,
     u32 VAR_5, u32 VAR_6)
{
 struct ti_sci_info *VAR_7;
 struct ti_sci_msg_req_set_device_resets *VAR_8;
 struct ti_sci_msg_hdr *VAR_9;
 struct ti_sci_xfer *VAR_10;
 struct device *VAR_11;
 int VAR_12 = 0;

 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);
 if (!VAR_4)
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_4);
 VAR_11 = VAR_7->dev;

 VAR_10 = FUNC_5(VAR_7, VAR_3,
       VAR_2,
       sizeof(*VAR_8), sizeof(*VAR_9));
 if (FUNC_0(VAR_10)) {
  VAR_12 = FUNC_1(VAR_10);
  FUNC_2(VAR_11, "Message alloc failed(%d)\n", VAR_12);
  return VAR_12;
 }
 VAR_8 = (struct ti_sci_msg_req_set_device_resets *)VAR_10->xfer_buf;
 VAR_8->id = VAR_5;
 VAR_8->resets = VAR_6;

 VAR_12 = FUNC_4(VAR_7, VAR_10);
 if (VAR_12) {
  FUNC_2(VAR_11, "Mbox send fail %d\n", VAR_12);
  goto fail;
 }

 VAR_9 = (struct ti_sci_msg_hdr *)VAR_10->xfer_buf;

 VAR_12 = FUNC_6(VAR_9) ? 0 : -VAR_1;

fail:
 FUNC_7(&VAR_7->minfo, VAR_10);

 return VAR_12;
}
