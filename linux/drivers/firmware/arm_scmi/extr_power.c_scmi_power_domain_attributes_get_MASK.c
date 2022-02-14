
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {struct scmi_msg_resp_power_domain_attributes* buf; } ;
struct TYPE_3__ {int buf; } ;
struct scmi_xfer {TYPE_2__ rx; TYPE_1__ tx; } ;
struct scmi_msg_resp_power_domain_attributes {int name; int flags; } ;
struct scmi_handle {int dummy; } ;
struct power_dom_info {int name; int state_set_sync; int state_set_async; int state_set_notify; } ;
typedef int domain ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct scmi_handle const*,struct scmi_xfer*) ;
 int FUNC_6 (struct scmi_handle const*,int ,int ,int,int,struct scmi_xfer**) ;
 int FUNC_7 (struct scmi_handle const*,struct scmi_xfer*) ;
 int FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_9(const struct scmi_handle *VAR_3, u32 VAR_4,
     struct power_dom_info *VAR_5)
{
 int VAR_6;
 struct scmi_xfer *VAR_7;
 struct scmi_msg_resp_power_domain_attributes *VAR_8;

 VAR_6 = FUNC_6(VAR_3, VAR_0,
     VAR_2, sizeof(VAR_4),
     sizeof(*VAR_8), &VAR_7);
 if (VAR_6)
  return VAR_6;

 FUNC_4(VAR_4, VAR_7->tx.buf);
 VAR_8 = VAR_7->rx.buf;

 VAR_6 = FUNC_5(VAR_3, VAR_7);
 if (!VAR_6) {
  u32 VAR_9 = FUNC_3(VAR_8->flags);

  VAR_5->state_set_notify = FUNC_1(VAR_9);
  VAR_5->state_set_async = FUNC_0(VAR_9);
  VAR_5->state_set_sync = FUNC_2(VAR_9);
  FUNC_8(VAR_5->name, VAR_8->name, VAR_1);
 }

 FUNC_7(VAR_3, VAR_7);
 return VAR_6;
}
