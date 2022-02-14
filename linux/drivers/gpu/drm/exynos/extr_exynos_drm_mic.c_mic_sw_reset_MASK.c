
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_mic {scalar_t__ reg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct exynos_mic *VAR_3)
{
 unsigned int VAR_4 = 100;
 int VAR_5;

 FUNC_2(VAR_2, VAR_3->reg + VAR_1);

 while (VAR_4-- > 0) {
  VAR_5 = FUNC_0(VAR_3->reg + VAR_1);
  if (!(VAR_5 & VAR_2))
   return 0;

  FUNC_1(10);
 }

 return -VAR_0;
}
