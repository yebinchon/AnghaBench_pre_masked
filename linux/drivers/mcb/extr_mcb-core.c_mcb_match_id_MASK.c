
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcb_device_id {scalar_t__ device; } ;
struct mcb_device {scalar_t__ id; } ;



__attribute__((used)) static const struct mcb_device_id *FUNC_0(const struct mcb_device_id *VAR_0,
      struct mcb_device *VAR_1)
{
 if (VAR_0) {
  while (VAR_0->device) {
   if (VAR_0->device == VAR_1->id)
    return VAR_0;
   VAR_0++;
  }
 }

 return ((void*)0);
}
