
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dce110_clk_src {int dummy; } ;
struct clock_source {scalar_t__ id; } ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 struct dce110_clk_src* FUNC_1 (struct clock_source const*) ;

__attribute__((used)) static bool FUNC_2(
  const struct clock_source *VAR_2,
  unsigned int VAR_3,
  unsigned int *VAR_4)
{
 struct dce110_clk_src *VAR_5 = FUNC_1(VAR_2);
 unsigned int VAR_6 = 0;

 if (VAR_2->id == VAR_0) {
  VAR_6 = FUNC_0(VAR_1[VAR_3]);





  *VAR_4 = VAR_6 / 100;
  return 1;
 }

 return 0;
}
