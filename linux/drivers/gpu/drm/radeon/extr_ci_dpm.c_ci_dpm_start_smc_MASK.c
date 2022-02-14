
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int usec_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_4(struct radeon_device *VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_2);
 FUNC_3(VAR_2);
 FUNC_2(VAR_2);
 for (VAR_3 = 0; VAR_3 < VAR_2->usec_timeout; VAR_3++) {
  if (FUNC_0(VAR_0) & VAR_1)
   break;
 }
}
