
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device_id {scalar_t__ bus; } ;
struct hid_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct hid_device const*,struct hid_device_id const*) ;

const struct hid_device_id *FUNC_1(const struct hid_device *VAR_0,
  const struct hid_device_id *VAR_1)
{
 for (; VAR_1->bus; VAR_1++)
  if (FUNC_0(VAR_0, VAR_1))
   return VAR_1;

 return ((void*)0);
}
