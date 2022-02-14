
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef struct ti_sci_xfer {scalar_t__ xfer_buf; } const ti_sci_xfer ;
struct ti_sci_msg_req_set_device_state {int id; int state; } ;
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
 struct ti_sci_xfer* FUNC_5 (struct ti_sci_info*,int ,int,int,int) ;
 scalar_t__ FUNC_6 (struct ti_sci_msg_hdr*) ;
 int FUNC_7 (int *,struct ti_sci_xfer const*) ;

__attribute__((used)) static int FUNC_8(const struct ti_sci_handle *VAR_4,
       u32 VAR_5, u32 VAR_6, u8 VAR_7)
{
 struct ti_sci_info *VAR_8;
 struct ti_sci_msg_req_set_device_state *VAR_9;
 struct ti_sci_msg_hdr *VAR_10;
 struct ti_sci_xfer *VAR_11;
 struct device *VAR_12;
 int VAR_13 = 0;

 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);
 if (!VAR_4)
  return -VAR_0;

 VAR_8 = FUNC_3(VAR_4);
 VAR_12 = VAR_8->dev;

 VAR_11 = FUNC_5(VAR_8, VAR_3,
       VAR_6 | VAR_2,
       sizeof(*VAR_9), sizeof(*VAR_10));
 if (FUNC_0(VAR_11)) {
  VAR_13 = FUNC_1(VAR_11);
  FUNC_2(VAR_12, "Message alloc failed(%d)\n", VAR_13);
  return VAR_13;
 }
 VAR_9 = (struct ti_sci_msg_req_set_device_state *)VAR_11->xfer_buf;
 VAR_9->id = VAR_5;
 VAR_9->state = VAR_7;

 VAR_13 = FUNC_4(VAR_8, VAR_11);
 if (VAR_13) {
  FUNC_2(VAR_12, "Mbox send fail %d\n", VAR_13);
  goto fail;
 }

 VAR_10 = (struct ti_sci_msg_hdr *)VAR_11->xfer_buf;

 VAR_13 = FUNC_6(VAR_10) ? 0 : -VAR_1;

fail:
 FUNC_7(&VAR_8->minfo, VAR_11);

 return VAR_13;
}
