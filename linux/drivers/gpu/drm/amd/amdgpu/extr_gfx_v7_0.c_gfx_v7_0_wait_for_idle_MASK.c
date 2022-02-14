
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {unsigned int usec_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(void *VAR_3)
{
 unsigned VAR_4;
 u32 VAR_5;
 struct amdgpu_device *VAR_6 = (struct amdgpu_device *)VAR_3;

 for (VAR_4 = 0; VAR_4 < VAR_6->usec_timeout; VAR_4++) {

  VAR_5 = FUNC_0(VAR_2) & VAR_1;

  if (!VAR_5)
   return 0;
  FUNC_1(1);
 }
 return -VAR_0;
}
