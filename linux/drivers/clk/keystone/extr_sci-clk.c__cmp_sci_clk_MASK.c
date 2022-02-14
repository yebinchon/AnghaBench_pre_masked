
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sci_clk {scalar_t__ dev_id; scalar_t__ clk_id; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct sci_clk *VAR_2 = VAR_0;
 const struct sci_clk *VAR_3 = *(struct sci_clk **)VAR_1;

 if (VAR_2->dev_id == VAR_3->dev_id && VAR_2->clk_id == VAR_3->clk_id)
  return 0;
 if (VAR_2->dev_id > VAR_3->dev_id ||
     (VAR_2->dev_id == VAR_3->dev_id && VAR_2->clk_id > VAR_3->clk_id))
  return 1;
 return -1;
}
