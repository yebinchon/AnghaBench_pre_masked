
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {unsigned int usec_timeout; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(void *VAR_3)
{
 unsigned VAR_4;
 struct amdgpu_device *VAR_5 = (struct amdgpu_device *)VAR_3;

 for (VAR_4 = 0; VAR_4 < VAR_5->usec_timeout; VAR_4++) {
  if (!(FUNC_0(VAR_2) & VAR_1))
   return 0;
 }
 return -VAR_0;
}
