
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ header_version_major; scalar_t__ header_version_minor; } ;
union amdgpu_firmware_header {TYPE_1__ common; } ;
typedef scalar_t__ uint16_t ;



bool FUNC_0(union amdgpu_firmware_header *VAR_0,
    uint16_t VAR_1, uint16_t VAR_2)
{
 if ((VAR_0->common.header_version_major == VAR_1) &&
  (VAR_0->common.header_version_minor == VAR_2))
  return 0;
 return 1;
}
