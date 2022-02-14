
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ real_vram_size; } ;
struct amdgpu_device {TYPE_1__ gmc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

uint32_t FUNC_0(struct amdgpu_device *VAR_3,
         uint32_t VAR_4)
{
 if (VAR_4 == (VAR_1 | VAR_0)) {
  VAR_4 = VAR_1;
  if (VAR_3->gmc.real_vram_size <= VAR_2)
   VAR_4 = VAR_0;
 }
 return VAR_4;
}
