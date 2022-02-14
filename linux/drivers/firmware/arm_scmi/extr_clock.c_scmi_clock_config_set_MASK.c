
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct scmi_clock_set_config* buf; } ;
struct scmi_xfer {TYPE_1__ tx; } ;
struct scmi_handle {int dummy; } ;
struct scmi_clock_set_config {void* attributes; void* id; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct scmi_handle const*,struct scmi_xfer*) ;
 int FUNC_2 (struct scmi_handle const*,int ,int ,int,int ,struct scmi_xfer**) ;
 int FUNC_3 (struct scmi_handle const*,struct scmi_xfer*) ;

__attribute__((used)) static int
FUNC_4(const struct scmi_handle *VAR_2, u32 VAR_3, u32 VAR_4)
{
 int VAR_5;
 struct scmi_xfer *VAR_6;
 struct scmi_clock_set_config *VAR_7;

 VAR_5 = FUNC_2(VAR_2, VAR_0, VAR_1,
     sizeof(*VAR_7), 0, &VAR_6);
 if (VAR_5)
  return VAR_5;

 VAR_7 = VAR_6->tx.buf;
 VAR_7->id = FUNC_0(VAR_3);
 VAR_7->attributes = FUNC_0(VAR_4);

 VAR_5 = FUNC_1(VAR_2, VAR_6);

 FUNC_3(VAR_2, VAR_6);
 return VAR_5;
}
