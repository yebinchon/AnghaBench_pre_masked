
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_3__ {TYPE_2__* atom_context; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;
struct TYPE_4__ {scalar_t__ bios; } ;


 scalar_t__ FUNC_0 (TYPE_2__*,int ,int*,void*,void*,int*) ;

void *FUNC_1(void *VAR_0, uint32_t VAR_1, uint16_t *VAR_2,
      uint8_t *VAR_3, uint8_t *VAR_4)
{
 struct amdgpu_device *VAR_5 = VAR_0;
 uint16_t VAR_6;

 if (FUNC_0(
      VAR_5->mode_info.atom_context, VAR_1, VAR_2,
      VAR_3, VAR_4, &VAR_6))
  return (uint8_t *)VAR_5->mode_info.atom_context->bios +
   VAR_6;

 return ((void*)0);
}
