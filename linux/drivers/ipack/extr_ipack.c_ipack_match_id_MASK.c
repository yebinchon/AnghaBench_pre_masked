
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipack_device_id {scalar_t__ device; scalar_t__ vendor; } ;
struct ipack_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct ipack_device_id const*,struct ipack_device*) ;

__attribute__((used)) static const struct ipack_device_id *
FUNC_1(const struct ipack_device_id *VAR_0, struct ipack_device *VAR_1)
{
 if (VAR_0) {
  while (VAR_0->vendor || VAR_0->device) {
   if (FUNC_0(VAR_0, VAR_1))
    return VAR_0;
   VAR_0++;
  }
 }
 return ((void*)0);
}
