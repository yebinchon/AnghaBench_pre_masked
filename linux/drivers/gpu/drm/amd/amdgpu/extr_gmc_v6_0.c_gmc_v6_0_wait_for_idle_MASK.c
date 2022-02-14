
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {unsigned int usec_timeout; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(void *VAR_1)
{
 unsigned VAR_2;
 struct amdgpu_device *VAR_3 = (struct amdgpu_device *)VAR_1;

 for (VAR_2 = 0; VAR_2 < VAR_3->usec_timeout; VAR_2++) {
  if (FUNC_0(VAR_1))
   return 0;
  FUNC_1(1);
 }
 return -VAR_0;

}
