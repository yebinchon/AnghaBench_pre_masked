
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_2(void *VAR_4)
{
 struct amdgpu_device *VAR_5 = (struct amdgpu_device *)VAR_4;

 if (FUNC_0(FUNC_1(VAR_2), VAR_0, VAR_1)
  || FUNC_1(VAR_3) != 0x8)
  return 0;
 else
  return 1;
}
