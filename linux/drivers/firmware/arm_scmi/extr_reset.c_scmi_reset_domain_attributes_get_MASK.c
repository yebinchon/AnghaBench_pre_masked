
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_4__ {struct scmi_msg_resp_reset_domain_attributes* buf; } ;
struct TYPE_3__ {int buf; } ;
struct scmi_xfer {TYPE_2__ rx; TYPE_1__ tx; } ;
struct scmi_msg_resp_reset_domain_attributes {int name; int latency; int attributes; } ;
struct scmi_handle {int dummy; } ;
struct reset_dom_info {int name; void* latency_us; int reset_notify; int async_reset; } ;
typedef int domain ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 void* VAR_3 ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (void*,int ) ;
 int FUNC_4 (struct scmi_handle const*,struct scmi_xfer*) ;
 int FUNC_5 (struct scmi_handle const*,int ,int ,int,int,struct scmi_xfer**) ;
 int FUNC_6 (struct scmi_handle const*,struct scmi_xfer*) ;
 int FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_8(const struct scmi_handle *VAR_4, u32 VAR_5,
     struct reset_dom_info *VAR_6)
{
 int VAR_7;
 struct scmi_xfer *VAR_8;
 struct scmi_msg_resp_reset_domain_attributes *VAR_9;

 VAR_7 = FUNC_5(VAR_4, VAR_0,
     VAR_2, sizeof(VAR_5),
     sizeof(*VAR_9), &VAR_8);
 if (VAR_7)
  return VAR_7;

 FUNC_3(VAR_5, VAR_8->tx.buf);
 VAR_9 = VAR_8->rx.buf;

 VAR_7 = FUNC_4(VAR_4, VAR_8);
 if (!VAR_7) {
  u32 VAR_10 = FUNC_2(VAR_9->attributes);

  VAR_6->async_reset = FUNC_0(VAR_10);
  VAR_6->reset_notify = FUNC_1(VAR_10);
  VAR_6->latency_us = FUNC_2(VAR_9->latency);
  if (VAR_6->latency_us == VAR_3)
   VAR_6->latency_us = 0;
  FUNC_7(VAR_6->name, VAR_9->name, VAR_1);
 }

 FUNC_6(VAR_4, VAR_8);
 return VAR_7;
}
