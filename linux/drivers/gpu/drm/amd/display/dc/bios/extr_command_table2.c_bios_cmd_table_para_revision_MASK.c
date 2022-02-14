
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int atom_context; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;


 scalar_t__ FUNC_0 (int ,int ,int *,int *) ;

__attribute__((used)) static uint32_t FUNC_1(void *VAR_0,
          uint32_t VAR_1)
{
 struct amdgpu_device *VAR_2 = VAR_0;
 uint8_t VAR_3, VAR_4;

 if (FUNC_0(VAR_2->mode_info.atom_context,
     VAR_1,
     &VAR_3, &VAR_4))
  return VAR_4;
 else
  return 0;
}
