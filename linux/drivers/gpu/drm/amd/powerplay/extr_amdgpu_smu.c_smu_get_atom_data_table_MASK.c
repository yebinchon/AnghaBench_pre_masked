
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct smu_context {struct amdgpu_device* adev; } ;
struct TYPE_3__ {TYPE_2__* atom_context; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;
struct TYPE_4__ {scalar_t__ bios; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int*,int *,int *,int*) ;

int FUNC_1(struct smu_context *VAR_1, uint32_t VAR_2,
       uint16_t *VAR_3, uint8_t *VAR_4, uint8_t *VAR_5,
       uint8_t **VAR_6)
{
 struct amdgpu_device *VAR_7 = VAR_1->adev;
 uint16_t VAR_8;

 if (!FUNC_0(VAR_7->mode_info.atom_context, VAR_2,
        VAR_3, VAR_4, VAR_5, &VAR_8))
  return -VAR_0;

 *VAR_6 = (uint8_t *)VAR_7->mode_info.atom_context->bios + VAR_8;

 return 0;
}
