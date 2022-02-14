
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*) ;

__attribute__((used)) static bool FUNC_2(struct amdgpu_device *VAR_1)
{
 if (VAR_1->flags & VAR_0)
  return FUNC_1(VAR_1);
 else
  return FUNC_0(VAR_1);
}
