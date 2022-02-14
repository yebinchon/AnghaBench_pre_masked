
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct sensors_info {scalar_t__ num_sensors; struct scmi_sensor_info* sensors; } ;
struct TYPE_5__ {int buf; } ;
struct TYPE_4__ {struct scmi_msg_resp_sensor_description* buf; } ;
struct scmi_xfer {TYPE_2__ tx; TYPE_1__ rx; } ;
struct scmi_sensor_info {int scale; int name; int num_trip_points; int async; int type; void* id; } ;
struct scmi_msg_resp_sensor_description {TYPE_3__* desc; int num_remaining; int num_returned; } ;
struct scmi_handle {int dev; } ;
typedef int __le32 ;
struct TYPE_6__ {int name; int id; int attributes_high; int attributes_low; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (struct scmi_handle const*,struct scmi_xfer*) ;
 int FUNC_9 (struct scmi_handle const*,int ,int ,int,int ,struct scmi_xfer**) ;
 int FUNC_10 (struct scmi_handle const*,struct scmi_xfer*) ;
 int FUNC_11 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_12(const struct scmi_handle *VAR_5,
           struct sensors_info *VAR_6)
{
 int VAR_7, VAR_8;
 u32 VAR_9 = 0;
 u16 VAR_10, VAR_11;
 struct scmi_xfer *VAR_12;
 struct scmi_msg_resp_sensor_description *VAR_13;

 VAR_7 = FUNC_9(VAR_5, VAR_2,
     VAR_1, sizeof(__le32), 0, &VAR_12);
 if (VAR_7)
  return VAR_7;

 VAR_13 = VAR_12->rx.buf;

 do {

  FUNC_7(VAR_9, VAR_12->tx.buf);

  VAR_7 = FUNC_8(VAR_5, VAR_12);
  if (VAR_7)
   break;

  VAR_10 = FUNC_5(VAR_13->num_returned);
  VAR_11 = FUNC_5(VAR_13->num_remaining);

  if (VAR_9 + VAR_10 > VAR_6->num_sensors) {
   FUNC_4(VAR_5->dev, "No. of sensors can't exceed %d",
    VAR_6->num_sensors);
   break;
  }

  for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {
   u32 VAR_14, VAR_15;
   struct scmi_sensor_info *VAR_16;

   VAR_15 = FUNC_6(VAR_13->desc[VAR_8].attributes_low);
   VAR_14 = FUNC_6(VAR_13->desc[VAR_8].attributes_high);
   VAR_16 = &VAR_6->sensors[VAR_9 + VAR_8];
   VAR_16->id = FUNC_6(VAR_13->desc[VAR_8].id);
   VAR_16->type = FUNC_2(VAR_14);
   VAR_16->scale = FUNC_1(VAR_14);

   if (VAR_16->scale & VAR_4)
    VAR_16->scale |= VAR_3;
   VAR_16->async = FUNC_3(VAR_15);
   VAR_16->num_trip_points = FUNC_0(VAR_15);
   FUNC_11(VAR_16->name, VAR_13->desc[VAR_8].name, VAR_0);
  }

  VAR_9 += VAR_10;




 } while (VAR_10 && VAR_11);

 FUNC_10(VAR_5, VAR_12);
 return VAR_7;
}
