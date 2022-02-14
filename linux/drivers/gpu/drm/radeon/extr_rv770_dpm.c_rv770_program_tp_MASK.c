
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;
typedef enum r600_td { ____Placeholder_r600_td } r600_td ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int * VAR_9 ;
 int * VAR_10 ;

void FUNC_4(struct radeon_device *VAR_11)
{
 int VAR_12;
 enum r600_td VAR_13 = VAR_5;

 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++)
  FUNC_2(VAR_0 + (VAR_12 * 4), (FUNC_1(VAR_10[VAR_12]) | FUNC_0(VAR_9[VAR_12])));

 if (VAR_13 == VAR_4)
  FUNC_3(VAR_8, 0, ~VAR_1);
 else
  FUNC_3(VAR_8, VAR_1, ~VAR_1);
 if (VAR_13 == VAR_7)
  FUNC_3(VAR_8, 0, ~VAR_2);
 if (VAR_13 == VAR_6)
  FUNC_3(VAR_8, VAR_2, ~VAR_2);
}
