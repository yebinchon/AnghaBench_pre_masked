
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device_id {scalar_t__ bus; scalar_t__ group; scalar_t__ vendor; scalar_t__ product; } ;
struct hid_device {scalar_t__ bus; scalar_t__ group; scalar_t__ vendor; scalar_t__ product; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

bool FUNC_0(const struct hid_device *VAR_3,
        const struct hid_device_id *VAR_4)
{
 return (VAR_4->bus == VAR_1 || VAR_4->bus == VAR_3->bus) &&
  (VAR_4->group == VAR_2 || VAR_4->group == VAR_3->group) &&
  (VAR_4->vendor == VAR_0 || VAR_4->vendor == VAR_3->vendor) &&
  (VAR_4->product == VAR_0 || VAR_4->product == VAR_3->product);
}
