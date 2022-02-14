
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {struct scmi_msg_set_sensor_trip_point* buf; } ;
struct scmi_xfer {TYPE_1__ tx; } ;
struct scmi_msg_set_sensor_trip_point {void* value_high; void* value_low; void* event_control; void* id; } ;
struct scmi_handle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct scmi_handle const*,struct scmi_xfer*) ;
 int FUNC_3 (struct scmi_handle const*,int ,int ,int,int ,struct scmi_xfer**) ;
 int FUNC_4 (struct scmi_handle const*,struct scmi_xfer*) ;

__attribute__((used)) static int
FUNC_5(const struct scmi_handle *VAR_3, u32 VAR_4,
         u8 VAR_5, u64 VAR_6)
{
 int VAR_7;
 u32 VAR_8 = VAR_1;
 struct scmi_xfer *VAR_9;
 struct scmi_msg_set_sensor_trip_point *VAR_10;

 VAR_7 = FUNC_3(VAR_3, VAR_2,
     VAR_0, sizeof(*VAR_10), 0, &VAR_9);
 if (VAR_7)
  return VAR_7;

 VAR_10 = VAR_9->tx.buf;
 VAR_10->id = FUNC_1(VAR_4);
 VAR_10->event_control = FUNC_1(VAR_8 | FUNC_0(VAR_5));
 VAR_10->value_low = FUNC_1(VAR_6 & 0xffffffff);
 VAR_10->value_high = FUNC_1(VAR_6 >> 32);

 VAR_7 = FUNC_2(VAR_3, VAR_9);

 FUNC_4(VAR_3, VAR_9);
 return VAR_7;
}
