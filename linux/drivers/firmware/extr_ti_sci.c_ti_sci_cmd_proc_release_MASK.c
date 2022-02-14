
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ buf; } ;
typedef struct ti_sci_xfer {TYPE_1__ tx_message; scalar_t__ xfer_buf; } const ti_sci_xfer ;
struct ti_sci_msg_req_proc_release {int processor_id; } ;
struct ti_sci_msg_hdr {int dummy; } ;
struct ti_sci_info {int minfo; struct device* dev; } ;
struct ti_sci_handle {TYPE_1__ tx_message; scalar_t__ xfer_buf; } ;
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
       u8 VAR_5)
{
 struct ti_sci_msg_req_proc_release *VAR_6;
 struct ti_sci_msg_hdr *VAR_7;
 struct ti_sci_info *VAR_8;
 struct ti_sci_xfer *VAR_9;
 struct device *VAR_10;
 int VAR_11 = 0;

 if (!VAR_4)
  return -VAR_0;
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_8 = FUNC_3(VAR_4);
 VAR_10 = VAR_8->dev;

 VAR_9 = FUNC_5(VAR_8, VAR_3,
       VAR_2,
       sizeof(*VAR_6), sizeof(*VAR_7));
 if (FUNC_0(VAR_9)) {
  VAR_11 = FUNC_1(VAR_9);
  FUNC_2(VAR_10, "Message alloc failed(%d)\n", VAR_11);
  return VAR_11;
 }
 VAR_6 = (struct ti_sci_msg_req_proc_release *)VAR_9->xfer_buf;
 VAR_6->processor_id = VAR_5;

 VAR_11 = FUNC_4(VAR_8, VAR_9);
 if (VAR_11) {
  FUNC_2(VAR_10, "Mbox send fail %d\n", VAR_11);
  goto fail;
 }

 VAR_7 = (struct ti_sci_msg_hdr *)VAR_9->tx_message.buf;

 VAR_11 = FUNC_6(VAR_7) ? 0 : -VAR_1;

fail:
 FUNC_7(&VAR_8->minfo, VAR_9);

 return VAR_11;
}
