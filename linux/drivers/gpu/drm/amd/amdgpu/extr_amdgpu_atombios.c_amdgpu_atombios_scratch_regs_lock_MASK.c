
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_device {scalar_t__ bios_scratch_reg_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;

void FUNC_2(struct amdgpu_device *VAR_2, bool VAR_3)
{
 uint32_t VAR_4;

 VAR_4 = FUNC_0(VAR_2->bios_scratch_reg_offset + 6);

 if (VAR_3) {
  VAR_4 |= VAR_1;
  VAR_4 &= ~VAR_0;
 } else {
  VAR_4 &= ~VAR_1;
  VAR_4 |= VAR_0;
 }

 FUNC_1(VAR_2->bios_scratch_reg_offset + 6, VAR_4);
}
