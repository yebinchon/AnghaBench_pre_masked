
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {unsigned int usec_timeout; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;

int FUNC_2(struct radeon_device *VAR_1)
{
 unsigned VAR_2;
 u32 VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_1->usec_timeout; VAR_2++) {

  VAR_3 = FUNC_0(VAR_0) & 0x1F00;
  if (!VAR_3)
   return 0;
  FUNC_1(1);
 }
 return -1;
}
