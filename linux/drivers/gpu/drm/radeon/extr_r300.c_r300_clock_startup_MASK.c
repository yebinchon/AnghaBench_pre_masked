
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {scalar_t__ family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;
 int VAR_3 ;
 int FUNC_5 (struct radeon_device*,int) ;

void FUNC_6(struct radeon_device *VAR_4)
{
 u32 VAR_5;

 if (VAR_3 != -1 && VAR_3)
  FUNC_5(VAR_4, 1);

 VAR_5 = FUNC_0(VAR_2);
 VAR_5 |= FUNC_1(1) | FUNC_3(1);
 if ((VAR_4->family == VAR_0) || (VAR_4->family == VAR_1))
  VAR_5 |= FUNC_2(1);
 FUNC_4(VAR_2, VAR_5);
}
