
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct exynos_mic {scalar_t__ reg; scalar_t__ i80_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct exynos_mic *VAR_9, bool VAR_10)
{
 u32 VAR_11 = FUNC_0(VAR_9->reg + VAR_6);

 if (VAR_10) {
  VAR_11 &= ~(VAR_4 | VAR_2 | VAR_7);
  VAR_11 |= (VAR_1 | VAR_0 | VAR_5);

  VAR_11 &= ~VAR_3;
  if (VAR_9->i80_mode)
   VAR_11 |= VAR_3;
 } else {
  VAR_11 &= ~VAR_1;
 }

 VAR_11 |= VAR_8;
 FUNC_1(VAR_11, VAR_9->reg + VAR_6);
}
