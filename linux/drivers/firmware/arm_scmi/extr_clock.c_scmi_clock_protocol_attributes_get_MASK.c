
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct scmi_msg_resp_clock_protocol_attributes* buf; } ;
struct scmi_xfer {TYPE_1__ rx; } ;
struct scmi_msg_resp_clock_protocol_attributes {int max_async_req; int num_clocks; } ;
struct scmi_handle {int dummy; } ;
struct clock_info {int max_async_req; int num_clocks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct scmi_handle const*,struct scmi_xfer*) ;
 int FUNC_2 (struct scmi_handle const*,int ,int ,int ,int,struct scmi_xfer**) ;
 int FUNC_3 (struct scmi_handle const*,struct scmi_xfer*) ;

__attribute__((used)) static int FUNC_4(const struct scmi_handle *VAR_2,
           struct clock_info *VAR_3)
{
 int VAR_4;
 struct scmi_xfer *VAR_5;
 struct scmi_msg_resp_clock_protocol_attributes *VAR_6;

 VAR_4 = FUNC_2(VAR_2, VAR_0,
     VAR_1, 0, sizeof(*VAR_6), &VAR_5);
 if (VAR_4)
  return VAR_4;

 VAR_6 = VAR_5->rx.buf;

 VAR_4 = FUNC_1(VAR_2, VAR_5);
 if (!VAR_4) {
  VAR_3->num_clocks = FUNC_0(VAR_6->num_clocks);
  VAR_3->max_async_req = VAR_6->max_async_req;
 }

 FUNC_3(VAR_2, VAR_5);
 return VAR_4;
}
