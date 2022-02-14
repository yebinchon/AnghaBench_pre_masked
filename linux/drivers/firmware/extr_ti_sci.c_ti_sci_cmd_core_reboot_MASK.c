
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct ti_sci_xfer {scalar_t__ xfer_buf; } const ti_sci_xfer ;
struct ti_sci_msg_req_reboot {int dummy; } ;
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
 int FUNC_6 (struct ti_sci_msg_hdr*) ;
 int FUNC_7 (int *,struct ti_sci_xfer const*) ;

__attribute__((used)) static int FUNC_8(const struct ti_sci_handle *VAR_4)
{
 struct ti_sci_info *VAR_5;
 struct ti_sci_msg_req_reboot *VAR_6;
 struct ti_sci_msg_hdr *VAR_7;
 struct ti_sci_xfer *VAR_8;
 struct device *VAR_9;
 int VAR_10 = 0;

 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_3(VAR_4);
 VAR_9 = VAR_5->dev;

 VAR_8 = FUNC_5(VAR_5, VAR_3,
       VAR_2,
       sizeof(*VAR_6), sizeof(*VAR_7));
 if (FUNC_0(VAR_8)) {
  VAR_10 = FUNC_1(VAR_8);
  FUNC_2(VAR_9, "Message alloc failed(%d)\n", VAR_10);
  return VAR_10;
 }
 VAR_6 = (struct ti_sci_msg_req_reboot *)VAR_8->xfer_buf;

 VAR_10 = FUNC_4(VAR_5, VAR_8);
 if (VAR_10) {
  FUNC_2(VAR_9, "Mbox send fail %d\n", VAR_10);
  goto fail;
 }

 VAR_7 = (struct ti_sci_msg_hdr *)VAR_8->xfer_buf;

 if (!FUNC_6(VAR_7))
  VAR_10 = -VAR_1;
 else
  VAR_10 = 0;

fail:
 FUNC_7(&VAR_5->minfo, VAR_8);

 return VAR_10;
}
