
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct amdgpu_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct amdgpu_device*,int ,int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_6, u32 *VAR_7)
{
 struct amdgpu_device *VAR_8 = (struct amdgpu_device *)VAR_6;
 int VAR_9;

 if (FUNC_1(VAR_8))
  *VAR_7 = 0;


 VAR_9 = FUNC_0(FUNC_2(VAR_8, 0, VAR_4));
 if (!(VAR_9 & VAR_2))
  *VAR_7 |= VAR_1;


 VAR_9 = FUNC_0(FUNC_2(VAR_8, 0, VAR_5));
 if (VAR_9 & VAR_3)
  *VAR_7 |= VAR_0;
}
