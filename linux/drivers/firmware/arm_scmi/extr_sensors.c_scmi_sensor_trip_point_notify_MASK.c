
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct scmi_msg_sensor_trip_point_notify* buf; } ;
struct scmi_xfer {TYPE_1__ tx; } ;
struct scmi_msg_sensor_trip_point_notify {void* event_control; void* id; } ;
struct scmi_handle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct scmi_handle const*,struct scmi_xfer*) ;
 int FUNC_2 (struct scmi_handle const*,int ,int ,int,int ,struct scmi_xfer**) ;
 int FUNC_3 (struct scmi_handle const*,struct scmi_xfer*) ;

__attribute__((used)) static int FUNC_4(const struct scmi_handle *VAR_3,
      u32 VAR_4, bool VAR_5)
{
 int VAR_6;
 u32 VAR_7 = VAR_5 ? VAR_1 : 0;
 struct scmi_xfer *VAR_8;
 struct scmi_msg_sensor_trip_point_notify *VAR_9;

 VAR_6 = FUNC_2(VAR_3, VAR_2,
     VAR_0, sizeof(*VAR_9), 0, &VAR_8);
 if (VAR_6)
  return VAR_6;

 VAR_9 = VAR_8->tx.buf;
 VAR_9->id = FUNC_0(VAR_4);
 VAR_9->event_control = FUNC_0(VAR_7);

 VAR_6 = FUNC_1(VAR_3, VAR_8);

 FUNC_3(VAR_3, VAR_8);
 return VAR_6;
}
