
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
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct amdgpu_device*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_3(void *VAR_7, u32 *VAR_8)
{
 struct amdgpu_device *VAR_9 = (struct amdgpu_device *)VAR_7;
 int VAR_10;

 if (FUNC_2(VAR_9))
  *VAR_8 = 0;


 VAR_10 = FUNC_0(FUNC_1(VAR_2, 0, VAR_5));
 if (!(VAR_10 & VAR_3))
  *VAR_8 |= VAR_1;


 VAR_10 = FUNC_0(FUNC_1(VAR_2, 0, VAR_6));
 if (VAR_10 & VAR_4)
  *VAR_8 |= VAR_0;
}
