
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct intel_vgpu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct intel_vgpu*,int) ;
 int FUNC_1 (struct intel_vgpu*,int) ;
 int* FUNC_2 (struct intel_vgpu*) ;
 int FUNC_3 (struct intel_vgpu*,unsigned int,void*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct intel_vgpu *VAR_1,
 unsigned int VAR_2, void *VAR_3, unsigned int VAR_4)
{
 u8 VAR_5 = FUNC_2(VAR_1)[VAR_2];
 u8 VAR_6 = *(u8 *)VAR_3;
 u8 VAR_7 = VAR_5 ^ VAR_6;
 int VAR_8;

 FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);
 if (!(VAR_7 & VAR_0))
  return 0;

 if (VAR_5 & VAR_0) {
  VAR_8 = FUNC_1(VAR_1, 0);
  if (VAR_8)
   return VAR_8;
  VAR_8 = FUNC_0(VAR_1, 0);
  if (VAR_8)
   return VAR_8;
 } else {
  VAR_8 = FUNC_1(VAR_1, 1);
  if (VAR_8)
   return VAR_8;
  VAR_8 = FUNC_0(VAR_1, 1);
  if (VAR_8)
   return VAR_8;
 }

 return 0;
}
