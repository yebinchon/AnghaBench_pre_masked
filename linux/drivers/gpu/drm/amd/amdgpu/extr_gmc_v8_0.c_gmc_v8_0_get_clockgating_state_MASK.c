
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
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct amdgpu_device*) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2(void *VAR_5, u32 *VAR_6)
{
 struct amdgpu_device *VAR_7 = (struct amdgpu_device *)VAR_5;
 int VAR_8;

 if (FUNC_1(VAR_7))
  *VAR_6 = 0;


 VAR_8 = FUNC_0(VAR_4);
 if (VAR_8 & VAR_2)
  *VAR_6 |= VAR_1;


 if (VAR_8 & VAR_3)
  *VAR_6 |= VAR_0;
}
