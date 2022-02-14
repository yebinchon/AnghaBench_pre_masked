
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_vgpu {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct intel_vgpu*,int ) ;
 int FUNC_3 (struct intel_vgpu*,int ) ;

__attribute__((used)) static int FUNC_4(struct intel_vgpu *VAR_7)
{
 u32 VAR_8 = FUNC_3(VAR_7, FUNC_0(VAR_5));
 u32 VAR_9 = FUNC_2(VAR_7, VAR_6);
 u32 VAR_10 = FUNC_3(VAR_7, FUNC_1(VAR_5));

 if ((VAR_8 & VAR_0) &&
   (VAR_9 & VAR_4) &&
   (VAR_9 & VAR_3) &&
   (VAR_10 & VAR_1) &&
   (VAR_10 & VAR_2))
  return 1;
 else
  return 0;
}
