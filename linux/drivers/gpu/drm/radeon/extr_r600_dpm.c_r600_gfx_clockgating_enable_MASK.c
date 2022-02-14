
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int usec_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int) ;

void FUNC_4(struct radeon_device *VAR_6, bool VAR_7)
{
 int VAR_8;

 if (VAR_7) {
  FUNC_2(VAR_5, VAR_3, ~VAR_3);
 } else {
  FUNC_2(VAR_5, 0, ~VAR_3);

  FUNC_1(VAR_0, 0x2);

  for (VAR_8 = 0; VAR_8 < VAR_6->usec_timeout; VAR_8++) {
   if (((FUNC_0(VAR_0) & VAR_1) >> VAR_2) == 1)
    break;
   FUNC_3(1);
  }

  FUNC_1(VAR_0, 0x0);

  FUNC_1(VAR_4, 0x1);
  FUNC_0(VAR_4);
 }
}
