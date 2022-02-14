
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

void FUNC_6(struct radeon_device *VAR_7)
{
 u32 VAR_8 = FUNC_4(VAR_0);

 VAR_8 &= ~(VAR_1 | VAR_3);
 VAR_8 |= (FUNC_0(VAR_5) |
  FUNC_2(VAR_5));

 VAR_8 &= ~(VAR_2 | VAR_4);
 VAR_8 |= (FUNC_1(VAR_6) |
  FUNC_3(VAR_5));
 FUNC_5(VAR_0, VAR_8);
}
