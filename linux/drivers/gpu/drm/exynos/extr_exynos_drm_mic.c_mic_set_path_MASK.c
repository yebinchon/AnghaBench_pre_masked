
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_mic {int dev; int sysreg; scalar_t__ i80_mode; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct exynos_mic *VAR_4, bool VAR_5)
{
 int VAR_6;
 unsigned int VAR_7;

 VAR_6 = FUNC_1(VAR_4->sysreg, VAR_0, &VAR_7);
 if (VAR_6) {
  FUNC_0(VAR_4->dev,
         "mic: Failed to read system register\n");
  return;
 }

 if (VAR_5) {
  if (VAR_4->i80_mode)
   VAR_7 |= VAR_1;
  else
   VAR_7 |= VAR_3;

  VAR_7 |= VAR_2;
 } else
  VAR_7 &= ~(VAR_3 | VAR_1 | VAR_2);

 VAR_6 = FUNC_2(VAR_4->sysreg, VAR_0, VAR_7);
 if (VAR_6)
  FUNC_0(VAR_4->dev,
         "mic: Failed to read system register\n");
}
