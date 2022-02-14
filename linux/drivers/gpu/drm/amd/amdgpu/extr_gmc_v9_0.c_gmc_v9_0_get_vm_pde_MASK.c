
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int vram_start; int translate_further; } ;
struct TYPE_4__ {int vram_base_offset; } ;
struct amdgpu_device {TYPE_1__ gmc; TYPE_2__ vm_manager; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_5, int VAR_6,
    uint64_t *VAR_7, uint64_t *VAR_8)
{
 if (!(*VAR_8 & VAR_0) && !(*VAR_8 & VAR_1))
  *VAR_7 = VAR_5->vm_manager.vram_base_offset + *VAR_7 -
   VAR_5->gmc.vram_start;
 FUNC_1(*VAR_7 & 0xFFFF00000000003FULL);

 if (!VAR_5->gmc.translate_further)
  return;

 if (VAR_6 == VAR_4) {

  if (!(*VAR_8 & VAR_0))
   *VAR_8 |= FUNC_0(0x9);

 } else if (VAR_6 == VAR_3) {
  if (*VAR_8 & VAR_0)
   *VAR_8 &= ~VAR_0;
  else
   *VAR_8 |= VAR_2;
 }
}
