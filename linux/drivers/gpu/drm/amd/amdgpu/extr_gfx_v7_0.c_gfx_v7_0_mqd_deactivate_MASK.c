
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int usec_timeout; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_device *VAR_5)
{
 int VAR_6;


 if (FUNC_0(VAR_1) & 1) {
  FUNC_1(VAR_2, 1);
  for (VAR_6 = 0; VAR_6 < VAR_5->usec_timeout; VAR_6++) {
   if (!(FUNC_0(VAR_1) & 1))
    break;
   FUNC_2(1);
  }

  if (VAR_6 == VAR_5->usec_timeout)
   return -VAR_0;

  FUNC_1(VAR_2, 0);
  FUNC_1(VAR_3, 0);
  FUNC_1(VAR_4, 0);
 }

 return 0;
}
