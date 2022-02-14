
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
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int VAR_10 ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 int * VAR_11 ;
 int * VAR_12 ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_13)
{
 int VAR_14;
 enum r600_td VAR_15 = VAR_5;

 for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
  FUNC_2(VAR_0 + (VAR_14 * 4), FUNC_1(VAR_12[VAR_14]), ~VAR_10);
  FUNC_2(VAR_0 + (VAR_14 * 4), FUNC_0(VAR_11[VAR_14]), ~VAR_1);
 }

 if (VAR_15 == VAR_4)
  FUNC_2(VAR_8, 0, ~VAR_2);
 else
  FUNC_2(VAR_8, VAR_2, ~VAR_2);

 if (VAR_15 == VAR_7)
  FUNC_2(VAR_8, 0, ~VAR_3);

 if (VAR_15 == VAR_6)
  FUNC_2(VAR_8, VAR_3, ~VAR_3);
}
