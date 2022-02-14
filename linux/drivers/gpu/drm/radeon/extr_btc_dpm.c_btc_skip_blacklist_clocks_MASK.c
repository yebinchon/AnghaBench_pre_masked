
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct radeon_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ sclk; scalar_t__ mclk; scalar_t__ action; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_1 (struct radeon_device*,scalar_t__ const,scalar_t__) ;

void FUNC_2(struct radeon_device *VAR_2,
          const u32 VAR_3, const u32 VAR_4,
          u32 *VAR_5, u32 *VAR_6)
{
 int VAR_7, VAR_8;

 if ((VAR_5 == ((void*)0)) || (VAR_6 == ((void*)0)))
  return;

 VAR_8 = FUNC_0(VAR_1);

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  if ((VAR_1[VAR_7].sclk == *VAR_5) &&
      (VAR_1[VAR_7].mclk == *VAR_6))
   break;
 }

 if (VAR_7 < VAR_8) {
  if (VAR_1[VAR_7].action == VAR_0) {
   *VAR_5 = FUNC_1(VAR_2, VAR_3, *VAR_5 + 1);

   if (*VAR_5 < VAR_3)
    FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
  }
 }
}
