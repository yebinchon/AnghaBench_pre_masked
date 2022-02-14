
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct intel_vgpu {int dummy; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct intel_vgpu*,int) ;
 int FUNC_1 (struct intel_vgpu*,int) ;
 int FUNC_2 (struct intel_vgpu*,int) ;
 scalar_t__* FUNC_3 (struct intel_vgpu*) ;

void FUNC_4(struct intel_vgpu *VAR_4)
{
 u8 VAR_5 = FUNC_3(VAR_4)[VAR_2];
 bool VAR_6 = FUNC_3(VAR_4)[VAR_1] !=
    VAR_0;

 if (VAR_5 & VAR_3) {
  FUNC_2(VAR_4, 0);
  FUNC_1(VAR_4, 0);
 }






 FUNC_0(VAR_4, VAR_6);
}
