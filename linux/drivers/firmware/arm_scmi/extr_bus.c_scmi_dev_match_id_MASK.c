
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scmi_driver {struct scmi_device_id* id_table; } ;
struct scmi_device_id {scalar_t__ protocol_id; } ;
struct scmi_device {scalar_t__ protocol_id; } ;



__attribute__((used)) static const struct scmi_device_id *
FUNC_0(struct scmi_device *VAR_0, struct scmi_driver *VAR_1)
{
 const struct scmi_device_id *VAR_2 = VAR_1->id_table;

 if (!VAR_2)
  return ((void*)0);

 for (; VAR_2->protocol_id; VAR_2++)
  if (VAR_2->protocol_id == VAR_0->protocol_id)
   return VAR_2;

 return ((void*)0);
}
