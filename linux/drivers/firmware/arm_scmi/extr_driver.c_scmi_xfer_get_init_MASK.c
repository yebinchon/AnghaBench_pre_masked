
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u8 ;
struct scmi_xfers_info {int dummy; } ;
struct TYPE_8__ {int poll_completion; void* protocol_id; void* id; } ;
struct TYPE_6__ {size_t len; } ;
struct TYPE_5__ {size_t len; } ;
struct scmi_xfer {TYPE_4__ hdr; TYPE_2__ rx; TYPE_1__ tx; } ;
struct scmi_info {TYPE_3__* desc; struct device* dev; struct scmi_xfers_info tx_minfo; } ;
struct scmi_handle {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_7__ {size_t max_msg_size; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct scmi_xfer*) ;
 int FUNC_1 (struct scmi_xfer*) ;
 int FUNC_2 (struct device*,char*,int) ;
 struct scmi_info* FUNC_3 (struct scmi_handle const*) ;
 struct scmi_xfer* FUNC_4 (struct scmi_handle const*,struct scmi_xfers_info*) ;

int FUNC_5(const struct scmi_handle *VAR_1, u8 VAR_2, u8 VAR_3,
         size_t VAR_4, size_t VAR_5, struct scmi_xfer **VAR_6)
{
 int VAR_7;
 struct scmi_xfer *VAR_8;
 struct scmi_info *VAR_9 = FUNC_3(VAR_1);
 struct scmi_xfers_info *VAR_10 = &VAR_9->tx_minfo;
 struct device *VAR_11 = VAR_9->dev;


 if (VAR_5 > VAR_9->desc->max_msg_size ||
     VAR_4 > VAR_9->desc->max_msg_size)
  return -VAR_0;

 VAR_8 = FUNC_4(VAR_1, VAR_10);
 if (FUNC_0(VAR_8)) {
  VAR_7 = FUNC_1(VAR_8);
  FUNC_2(VAR_11, "failed to get free message slot(%d)\n", VAR_7);
  return VAR_7;
 }

 VAR_8->tx.len = VAR_4;
 VAR_8->rx.len = VAR_5 ? : VAR_9->desc->max_msg_size;
 VAR_8->hdr.id = VAR_2;
 VAR_8->hdr.protocol_id = VAR_3;
 VAR_8->hdr.poll_completion = 0;

 *VAR_6 = VAR_8;

 return 0;
}
