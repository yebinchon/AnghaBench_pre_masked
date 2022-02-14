
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int VAR_3 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct amdgpu_device *VAR_4)
{
 u32 VAR_5;

 if (VAR_4->flags & VAR_0)
  return 0;

 VAR_5 = FUNC_0(VAR_3);

 switch ((VAR_5 & VAR_1) >> VAR_2) {
 case 132:
  return 1;
 case 130:
  return 2;
 case 129:
  return 4;
 case 128:
  return 8;
 case 133:
 case 131:
 default:
  return 16;
 }
}
