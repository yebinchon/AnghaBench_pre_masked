
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct amdgpu_device*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_4(void *VAR_12, u32 *VAR_13)
{
 struct amdgpu_device *VAR_14 = (struct amdgpu_device *)VAR_12;
 int VAR_15;

 if (FUNC_3(VAR_14))
  *VAR_13 = 0;


 VAR_15 = FUNC_1(VAR_9);
 if (VAR_15 & VAR_7)
  *VAR_13 |= VAR_0;


 VAR_15 = FUNC_0(VAR_11);
 if (VAR_15 & VAR_6)
  *VAR_13 |= VAR_1;


 VAR_15 = FUNC_0(VAR_10);
 if (!(VAR_15 & VAR_5))
  *VAR_13 |= VAR_2;


 VAR_15 = FUNC_2(VAR_8);
 if (!(VAR_15 & VAR_4))
  *VAR_13 |= VAR_3;
}
