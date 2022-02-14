
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gk20a_pll {scalar_t__ m; scalar_t__ pl; void* n; } ;
struct gk20a_clk {int dummy; } ;


 scalar_t__ FUNC_0 (struct gk20a_clk*) ;
 void* FUNC_1 (struct gk20a_clk*,struct gk20a_pll*) ;
 int FUNC_2 (struct gk20a_clk*,struct gk20a_pll*) ;
 int FUNC_3 (struct gk20a_clk*,struct gk20a_pll*) ;
 int FUNC_4 (struct gk20a_clk*,void*) ;

__attribute__((used)) static int
FUNC_5(struct gk20a_clk *VAR_0, const struct gk20a_pll *VAR_1)
{
 struct gk20a_pll VAR_2;
 int VAR_3;

 if (FUNC_0(VAR_0)) {
  FUNC_3(VAR_0, &VAR_2);


  if (VAR_1->m == VAR_2.m && VAR_1->pl == VAR_2.pl)
   return FUNC_4(VAR_0, VAR_1->n);


  VAR_2.n = FUNC_1(VAR_0, &VAR_2);
  VAR_3 = FUNC_4(VAR_0, VAR_2.n);
  if (VAR_3)
   return VAR_3;
 }


 VAR_2 = *VAR_1;
 VAR_2.n = FUNC_1(VAR_0, &VAR_2);
 VAR_3 = FUNC_2(VAR_0, &VAR_2);
 if (VAR_3)
  return VAR_3;


 return FUNC_4(VAR_0, VAR_1->n);
}
