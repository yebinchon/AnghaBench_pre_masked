
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {unsigned int usec_timeout; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(void *VAR_4)
{
 unsigned VAR_5;
 u32 VAR_6;
 struct amdgpu_device *VAR_7 = (struct amdgpu_device *)VAR_4;

 for (VAR_5 = 0; VAR_5 < VAR_7->usec_timeout; VAR_5++) {
  VAR_6 = FUNC_0(VAR_3) & (VAR_2 |
    VAR_1);

  if (!VAR_6)
   return 0;
  FUNC_1(1);
 }
 return -VAR_0;
}
