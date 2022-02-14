
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {unsigned int usec_timeout; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int) ;

int FUNC_3(struct radeon_device *VAR_1)
{
 unsigned VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->usec_timeout; VAR_2++) {
  if (FUNC_0(FUNC_1(VAR_0)))
   return 0;
  FUNC_2(1);
 }
 return -1;
}
