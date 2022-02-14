
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hv_vmbus_device_id {int dummy; } ;
struct hv_driver {int id_table; int name; } ;
struct hv_device {scalar_t__ driver_override; int dev_type; } ;
typedef int guid_t ;


 struct hv_vmbus_device_id* FUNC_0 (int ,int const*) ;
 struct hv_vmbus_device_id* FUNC_1 (struct hv_driver*,int const*) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 struct hv_vmbus_device_id VAR_0 ;

__attribute__((used)) static const struct hv_vmbus_device_id *FUNC_3(struct hv_driver *VAR_1,
       struct hv_device *VAR_2)
{
 const guid_t *VAR_3 = &VAR_2->dev_type;
 const struct hv_vmbus_device_id *VAR_4;


 if (VAR_2->driver_override && FUNC_2(VAR_2->driver_override, VAR_1->name))
  return ((void*)0);


 VAR_4 = FUNC_1(VAR_1, VAR_3);
 if (!VAR_4)
  VAR_4 = FUNC_0(VAR_1->id_table, VAR_3);


 if (!VAR_4 && VAR_2->driver_override)
  VAR_4 = &VAR_0;

 return VAR_4;
}
