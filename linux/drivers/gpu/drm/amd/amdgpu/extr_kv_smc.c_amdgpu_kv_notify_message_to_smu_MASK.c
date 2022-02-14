
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct amdgpu_device {scalar_t__ usec_timeout; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;

int FUNC_3(struct amdgpu_device *VAR_5, u32 VAR_6)
{
 u32 VAR_7;
 u32 VAR_8 = 0;

 FUNC_1(VAR_3, VAR_6 & VAR_1);

 for (VAR_7 = 0; VAR_7 < VAR_5->usec_timeout; VAR_7++) {
  if ((FUNC_0(VAR_4) & VAR_2) != 0)
   break;
  FUNC_2(1);
 }
 VAR_8 = FUNC_0(VAR_4) & VAR_2;

 if (VAR_8 != 1) {
  if (VAR_8 == 0xFF)
   return -VAR_0;
  else if (VAR_8 == 0xFE)
   return -VAR_0;
 }

 return 0;
}
