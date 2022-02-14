
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ps {scalar_t__ evclk; scalar_t__ ecclk; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (struct radeon_device*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct radeon_device*,int) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_0,
      struct radeon_ps *VAR_1,
      struct radeon_ps *VAR_2)
{
 if ((VAR_2->evclk != VAR_1->evclk) ||
     (VAR_2->ecclk != VAR_1->ecclk)) {

  if (VAR_1->evclk || VAR_1->ecclk)
   FUNC_1(VAR_0, 0);
  else
   FUNC_1(VAR_0, 1);
  FUNC_0(VAR_0, VAR_1->evclk, VAR_1->ecclk);
 }
}
