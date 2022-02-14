
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int usec_timeout; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;

void FUNC_3(struct radeon_device *VAR_1)
{
 int VAR_2;

 FUNC_1(VAR_0, 1);
 for (VAR_2 = 0; VAR_2 < VAR_1->usec_timeout; VAR_2++) {
  if ((FUNC_0(VAR_0) & 0xffff) == 1)
   break;
  FUNC_2(1);
 }
}
