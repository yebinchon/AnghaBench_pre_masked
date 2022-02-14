
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct sensors_info {struct scmi_sensor_info* sensors; } ;
struct TYPE_4__ {void* buf; } ;
struct TYPE_3__ {struct scmi_msg_sensor_reading_get* buf; } ;
struct scmi_xfer {TYPE_2__ rx; TYPE_1__ tx; } ;
struct scmi_sensor_info {scalar_t__ async; } ;
struct scmi_msg_sensor_reading_get {void* flags; void* id; } ;
struct scmi_handle {struct sensors_info* sensor_priv; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct scmi_handle const*,struct scmi_xfer*) ;
 int FUNC_3 (struct scmi_handle const*,struct scmi_xfer*) ;
 int FUNC_4 (struct scmi_handle const*,int ,int ,int,int,struct scmi_xfer**) ;
 int FUNC_5 (struct scmi_handle const*,struct scmi_xfer*) ;

__attribute__((used)) static int FUNC_6(const struct scmi_handle *VAR_3,
       u32 VAR_4, u64 *VAR_5)
{
 int VAR_6;
 struct scmi_xfer *VAR_7;
 struct scmi_msg_sensor_reading_get *VAR_8;
 struct sensors_info *VAR_9 = VAR_3->sensor_priv;
 struct scmi_sensor_info *VAR_10 = VAR_9->sensors + VAR_4;

 VAR_6 = FUNC_4(VAR_3, VAR_1,
     VAR_0, sizeof(*VAR_8),
     sizeof(u64), &VAR_7);
 if (VAR_6)
  return VAR_6;

 VAR_8 = VAR_7->tx.buf;
 VAR_8->id = FUNC_0(VAR_4);

 if (VAR_10->async) {
  VAR_8->flags = FUNC_0(VAR_2);
  VAR_6 = FUNC_3(VAR_3, VAR_7);
  if (!VAR_6)
   *VAR_5 = FUNC_1((void *)
          ((__le32 *)VAR_7->rx.buf + 1));
 } else {
  VAR_8->flags = FUNC_0(0);
  VAR_6 = FUNC_2(VAR_3, VAR_7);
  if (!VAR_6)
   *VAR_5 = FUNC_1(VAR_7->rx.buf);
 }

 FUNC_5(VAR_3, VAR_7);
 return VAR_6;
}
