
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipack_device_id {scalar_t__ format; scalar_t__ vendor; scalar_t__ device; } ;
struct ipack_device {scalar_t__ id_format; scalar_t__ id_vendor; scalar_t__ id_device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline const struct ipack_device_id *
FUNC_0(const struct ipack_device_id *VAR_2,
         const struct ipack_device *VAR_3)
{
 if ((VAR_2->format == VAR_0 ||
    VAR_2->format == VAR_3->id_format) &&
     (VAR_2->vendor == VAR_1 || VAR_2->vendor == VAR_3->id_vendor) &&
     (VAR_2->device == VAR_1 || VAR_2->device == VAR_3->id_device))
  return VAR_2;
 return ((void*)0);
}
