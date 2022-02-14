
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ status; scalar_t__ poll_completion; int protocol_id; } ;
struct scmi_xfer {TYPE_2__ hdr; int done; } ;
struct scmi_info {TYPE_1__* desc; int tx_idr; struct device* dev; } ;
struct scmi_handle {int dummy; } ;
struct scmi_chan_info {int chan; int payload; } ;
struct device {int dummy; } ;
typedef int ktime_t ;
struct TYPE_3__ {int max_rx_timeout_ms; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,char*,void*) ;
 struct scmi_info* FUNC_2 (struct scmi_handle const*) ;
 struct scmi_chan_info* FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,struct scmi_xfer*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct scmi_xfer*,int ) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (struct scmi_chan_info*,struct scmi_xfer*,int ) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (int *,int) ;

int FUNC_16(const struct scmi_handle *VAR_4, struct scmi_xfer *VAR_5)
{
 int VAR_6;
 int VAR_7;
 struct scmi_info *VAR_8 = FUNC_2(VAR_4);
 struct device *VAR_9 = VAR_8->dev;
 struct scmi_chan_info *VAR_10;

 VAR_10 = FUNC_3(&VAR_8->tx_idr, VAR_5->hdr.protocol_id);
 if (FUNC_14(!VAR_10))
  return -VAR_0;

 VAR_6 = FUNC_8(VAR_10->chan, VAR_5);
 if (VAR_6 < 0) {
  FUNC_0(VAR_9, "mbox send fail %d\n", VAR_6);
  return VAR_6;
 }


 VAR_6 = 0;

 if (VAR_5->hdr.poll_completion) {
  ktime_t VAR_11 = FUNC_4(FUNC_6(), VAR_2);

  FUNC_13(FUNC_12(VAR_10, VAR_5, VAR_11));

  if (FUNC_5(FUNC_6(), VAR_11))
   FUNC_10(VAR_5, VAR_10->payload);
  else
   VAR_6 = -VAR_1;
 } else {

  VAR_7 = FUNC_9(VAR_8->desc->max_rx_timeout_ms);
  if (!FUNC_15(&VAR_5->done, VAR_7)) {
   FUNC_1(VAR_9, "mbox timed out in resp(caller: %pS)\n",
    (void *)VAR_3);
   VAR_6 = -VAR_1;
  }
 }

 if (!VAR_6 && VAR_5->hdr.status)
  VAR_6 = FUNC_11(VAR_5->hdr.status);







 FUNC_7(VAR_10->chan, VAR_6);

 return VAR_6;
}
