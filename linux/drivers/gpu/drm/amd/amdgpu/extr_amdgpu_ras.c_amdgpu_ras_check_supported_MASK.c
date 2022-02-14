
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_device {scalar_t__ asic_type; scalar_t__ is_atom_fw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct amdgpu_device*) ;
 scalar_t__ FUNC_1 (struct amdgpu_device*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct amdgpu_device*) ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_4,
  uint32_t *VAR_5, uint32_t *VAR_6)
{
 *VAR_5 = 0;
 *VAR_6 = 0;

 if (FUNC_2(VAR_4) ||
   VAR_4->asic_type != VAR_1)
  return;

 if (VAR_4->is_atom_fw &&
   (FUNC_0(VAR_4) ||
    FUNC_1(VAR_4)))
  *VAR_5 = VAR_0;

 *VAR_6 = VAR_2 == 0 ?
    0 : *VAR_5 & VAR_3;
}
