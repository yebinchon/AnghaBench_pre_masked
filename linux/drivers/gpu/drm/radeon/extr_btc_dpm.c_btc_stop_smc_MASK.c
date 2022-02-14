
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int usec_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->usec_timeout; VAR_4++) {
  if (((FUNC_0(VAR_0) & VAR_1) >> VAR_2) != 1)
   break;
  FUNC_2(1);
 }
 FUNC_2(100);

 FUNC_1(VAR_3);
}
