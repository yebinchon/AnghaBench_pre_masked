
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
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct amdgpu_device*) ;
 int VAR_5 ;

void FUNC_2(struct amdgpu_device *VAR_6, u32 *VAR_7)
{
 int VAR_8;

 if (FUNC_1(VAR_6))
  *VAR_7 = 0;


 VAR_8 = FUNC_0(VAR_2, 0, VAR_5);
 if (VAR_8 & VAR_3)
  *VAR_7 |= VAR_1;


 if (VAR_8 & VAR_4)
  *VAR_7 |= VAR_0;
}
