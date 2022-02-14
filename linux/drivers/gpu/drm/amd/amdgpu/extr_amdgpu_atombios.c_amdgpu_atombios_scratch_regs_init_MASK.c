
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_device {scalar_t__ bios_scratch_reg_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_4)
{
 uint32_t VAR_5, VAR_6;

 VAR_4->bios_scratch_reg_offset = VAR_3;

 VAR_5 = FUNC_0(VAR_4->bios_scratch_reg_offset + 2);
 VAR_6 = FUNC_0(VAR_4->bios_scratch_reg_offset + 6);


 VAR_5 &= ~VAR_1;


 VAR_6 |= VAR_2;


 VAR_5 &= ~VAR_0;

 FUNC_1(VAR_4->bios_scratch_reg_offset + 2, VAR_5);
 FUNC_1(VAR_4->bios_scratch_reg_offset + 6, VAR_6);
}
