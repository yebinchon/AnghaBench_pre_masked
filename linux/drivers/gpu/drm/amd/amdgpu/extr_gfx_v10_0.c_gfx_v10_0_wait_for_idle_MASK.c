
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {unsigned int usec_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(void *VAR_6)
{
 unsigned VAR_7;
 u32 VAR_8;
 struct amdgpu_device *VAR_9 = (struct amdgpu_device *)VAR_6;

 for (VAR_7 = 0; VAR_7 < VAR_9->usec_timeout; VAR_7++) {

  VAR_8 = FUNC_1(VAR_1, 0, VAR_5) &
   VAR_3;

  if (!FUNC_0(VAR_8, VAR_2, VAR_4))
   return 0;
  FUNC_2(1);
 }
 return -VAR_0;
}
