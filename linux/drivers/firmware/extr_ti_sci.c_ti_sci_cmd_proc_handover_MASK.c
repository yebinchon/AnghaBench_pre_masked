
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct TYPE_2__ {scalar_t__ buf; } ;
typedef struct ti_sci_xfer {TYPE_1__ tx_message; scalar_t__ xfer_buf; } const ti_sci_xfer ;
struct ti_sci_msg_req_proc_handover {void* host_id; void* processor_id; } ;
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
        u8 VAR_5, u8 VAR_6)
{
 struct ti_sci_msg_req_proc_handover *VAR_7;
 struct ti_sci_msg_hdr *VAR_8;
 struct ti_sci_info *VAR_9;
 struct ti_sci_xfer *VAR_10;
 struct device *VAR_11;
 int VAR_12 = 0;

 if (!VAR_4)
  return -VAR_0;
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_9 = FUNC_3(VAR_4);
 VAR_11 = VAR_9->dev;

 VAR_10 = FUNC_5(VAR_9, VAR_3,
       VAR_2,
       sizeof(*VAR_7), sizeof(*VAR_8));
 if (FUNC_0(VAR_10)) {
  VAR_12 = FUNC_1(VAR_10);
  FUNC_2(VAR_11, "Message alloc failed(%d)\n", VAR_12);
  return VAR_12;
 }
 VAR_7 = (struct ti_sci_msg_req_proc_handover *)VAR_10->xfer_buf;
 VAR_7->processor_id = VAR_5;
 VAR_7->host_id = VAR_6;

 VAR_12 = FUNC_4(VAR_9, VAR_10);
 if (VAR_12) {
  FUNC_2(VAR_11, "Mbox send fail %d\n", VAR_12);
  goto fail;
 }

 VAR_8 = (struct ti_sci_msg_hdr *)VAR_10->tx_message.buf;

 VAR_12 = FUNC_6(VAR_8) ? 0 : -VAR_1;

fail:
 FUNC_7(&VAR_9->minfo, VAR_10);

 return VAR_12;
}
