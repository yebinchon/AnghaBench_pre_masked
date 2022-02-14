
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_rate_request {scalar_t__ rate; } ;
struct clk_core {int flags; scalar_t__ rate; struct clk_core* parent; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clk_core*) ;
 int FUNC_1 (struct clk_core*,struct clk_rate_request*) ;
 int FUNC_2 (struct clk_core*,struct clk_rate_request*) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct clk_core *VAR_2,
          struct clk_rate_request *VAR_3)
{
 FUNC_3(&VAR_1);

 if (!VAR_2) {
  VAR_3->rate = 0;
  return 0;
 }

 FUNC_2(VAR_2, VAR_3);

 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2, VAR_3);
 else if (VAR_2->flags & VAR_0)
  return FUNC_4(VAR_2->parent, VAR_3);

 VAR_3->rate = VAR_2->rate;
 return 0;
}
