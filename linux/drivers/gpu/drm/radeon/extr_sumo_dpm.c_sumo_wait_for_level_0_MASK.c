
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int usec_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->usec_timeout; VAR_4++) {
  if ((FUNC_0(VAR_2) & VAR_1) == 0)
   break;
  FUNC_1(1);
 }
 for (VAR_4 = 0; VAR_4 < VAR_3->usec_timeout; VAR_4++) {
  if ((FUNC_0(VAR_2) & VAR_0) == 0)
   break;
  FUNC_1(1);
 }
}
