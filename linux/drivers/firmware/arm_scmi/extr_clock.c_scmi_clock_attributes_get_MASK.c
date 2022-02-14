
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {struct scmi_msg_resp_clock_attributes* buf; } ;
struct TYPE_4__ {int buf; } ;
struct scmi_xfer {TYPE_1__ rx; TYPE_2__ tx; } ;
struct scmi_msg_resp_clock_attributes {int name; } ;
struct scmi_handle {int dummy; } ;
struct scmi_clock_info {char* name; } ;
typedef int clk_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct scmi_handle const*,struct scmi_xfer*) ;
 int FUNC_2 (struct scmi_handle const*,int ,int ,int,int,struct scmi_xfer**) ;
 int FUNC_3 (struct scmi_handle const*,struct scmi_xfer*) ;
 int FUNC_4 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_5(const struct scmi_handle *VAR_3,
         u32 VAR_4, struct scmi_clock_info *VAR_5)
{
 int VAR_6;
 struct scmi_xfer *VAR_7;
 struct scmi_msg_resp_clock_attributes *VAR_8;

 VAR_6 = FUNC_2(VAR_3, VAR_0, VAR_2,
     sizeof(VAR_4), sizeof(*VAR_8), &VAR_7);
 if (VAR_6)
  return VAR_6;

 FUNC_0(VAR_4, VAR_7->tx.buf);
 VAR_8 = VAR_7->rx.buf;

 VAR_6 = FUNC_1(VAR_3, VAR_7);
 if (!VAR_6)
  FUNC_4(VAR_5->name, VAR_8->name, VAR_1);
 else
  VAR_5->name[0] = '\0';

 FUNC_3(VAR_3, VAR_7);
 return VAR_6;
}
