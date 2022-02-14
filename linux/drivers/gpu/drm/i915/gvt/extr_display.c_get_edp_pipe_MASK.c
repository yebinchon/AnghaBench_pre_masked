
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_vgpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct intel_vgpu*,int ) ;

__attribute__((used)) static int FUNC_1(struct intel_vgpu *VAR_5)
{
 u32 VAR_6 = FUNC_0(VAR_5, VAR_4);
 int VAR_7 = -1;

 switch (VAR_6 & VAR_3) {
 case 131:
 case 130:
  VAR_7 = VAR_0;
  break;
 case 129:
  VAR_7 = VAR_1;
  break;
 case 128:
  VAR_7 = VAR_2;
  break;
 }
 return VAR_7;
}
