
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {unsigned int usec_timeout; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;

__attribute__((used)) static int FUNC_1(void *VAR_1)
{
 struct amdgpu_device *VAR_2 = (struct amdgpu_device *)VAR_1;
 unsigned VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->usec_timeout; VAR_3++) {
  if (FUNC_0(VAR_1))
   return 0;
 }
 return -VAR_0;
}
