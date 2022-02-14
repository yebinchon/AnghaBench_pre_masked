
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct amdgpu_device*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__* VAR_6 ;

__attribute__((used)) static void FUNC_2(void *VAR_7, u32 *VAR_8)
{
 struct amdgpu_device *VAR_9 = (struct amdgpu_device *)VAR_7;
 int VAR_10;

 if (FUNC_1(VAR_9))
  *VAR_8 = 0;


 VAR_10 = FUNC_0(VAR_4 + VAR_6[0]);
 if (!(VAR_10 & VAR_2))
  *VAR_8 |= VAR_1;


 VAR_10 = FUNC_0(VAR_5 + VAR_6[0]);
 if (VAR_10 & VAR_3)
  *VAR_8 |= VAR_0;
}
