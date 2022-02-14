
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*,int ) ;

__attribute__((used)) static int FUNC_3(void *VAR_1)
{
 int VAR_2;
 struct amdgpu_device *VAR_3 = (struct amdgpu_device *)VAR_1;

 VAR_2 = FUNC_1(VAR_3);
 if (VAR_2)
  return VAR_2;
 FUNC_2(VAR_3, VAR_0);

 return FUNC_0(VAR_3);
}
