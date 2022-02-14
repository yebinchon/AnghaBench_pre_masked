
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(void *VAR_7)
{
 unsigned VAR_8;
 u32 VAR_9;
 struct amdgpu_device *VAR_10 = (struct amdgpu_device *)VAR_7;

 for (VAR_8 = 0; VAR_8 < VAR_10->usec_timeout; VAR_8++) {

  VAR_9 = FUNC_0(VAR_6) & (VAR_1 |
            VAR_2 |
            VAR_3 |
            VAR_4 |
            VAR_5);
  if (!VAR_9)
   return 0;
  FUNC_1(1);
 }
 return -VAR_0;

}
