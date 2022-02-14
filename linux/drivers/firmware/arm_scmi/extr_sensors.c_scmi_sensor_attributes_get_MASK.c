
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct sensors_info {int reg_addr; int reg_size; int max_requests; int num_sensors; } ;
struct TYPE_2__ {struct scmi_msg_resp_sensor_attributes* buf; } ;
struct scmi_xfer {TYPE_1__ rx; } ;
struct scmi_msg_resp_sensor_attributes {int reg_size; int reg_addr_high; int reg_addr_low; int max_requests; int num_sensors; } ;
struct scmi_handle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct scmi_handle const*,struct scmi_xfer*) ;
 int FUNC_3 (struct scmi_handle const*,int ,int ,int ,int,struct scmi_xfer**) ;
 int FUNC_4 (struct scmi_handle const*,struct scmi_xfer*) ;

__attribute__((used)) static int FUNC_5(const struct scmi_handle *VAR_2,
          struct sensors_info *VAR_3)
{
 int VAR_4;
 struct scmi_xfer *VAR_5;
 struct scmi_msg_resp_sensor_attributes *VAR_6;

 VAR_4 = FUNC_3(VAR_2, VAR_0,
     VAR_1, 0, sizeof(*VAR_6), &VAR_5);
 if (VAR_4)
  return VAR_4;

 VAR_6 = VAR_5->rx.buf;

 VAR_4 = FUNC_2(VAR_2, VAR_5);
 if (!VAR_4) {
  VAR_3->num_sensors = FUNC_0(VAR_6->num_sensors);
  VAR_3->max_requests = VAR_6->max_requests;
  VAR_3->reg_addr = FUNC_1(VAR_6->reg_addr_low) |
    (u64)FUNC_1(VAR_6->reg_addr_high) << 32;
  VAR_3->reg_size = FUNC_1(VAR_6->reg_size);
 }

 FUNC_4(VAR_2, VAR_5);
 return VAR_4;
}
