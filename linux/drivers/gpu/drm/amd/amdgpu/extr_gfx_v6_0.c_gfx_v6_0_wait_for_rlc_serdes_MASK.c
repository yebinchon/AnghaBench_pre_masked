
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int usec_timeout; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->usec_timeout; VAR_3++) {
  if (FUNC_0(VAR_0) == 0)
   break;
  FUNC_1(1);
 }

 for (VAR_3 = 0; VAR_3 < VAR_2->usec_timeout; VAR_3++) {
  if (FUNC_0(VAR_1) == 0)
   break;
  FUNC_1(1);
 }
}
