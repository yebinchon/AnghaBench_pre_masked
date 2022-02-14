
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_si544_muldiv {int delta_m; } ;
typedef int s64 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int) ;
 unsigned long FUNC_1 (struct clk_si544_muldiv const*) ;

__attribute__((used)) static unsigned long FUNC_2(const struct clk_si544_muldiv *VAR_3)
{
 unsigned long VAR_4 = FUNC_1(VAR_3);
 s64 VAR_5 = (s64)VAR_4 * (VAR_1 * VAR_3->delta_m);






 if (VAR_3->delta_m < 0)
  VAR_5 -= ((s64)VAR_2 * VAR_0) / 2;
 else
  VAR_5 += ((s64)VAR_2 * VAR_0) / 2;
 VAR_5 = FUNC_0(VAR_5, ((s64)VAR_2 * VAR_0));

 return VAR_4 + VAR_5;
}
