
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_core {unsigned long rate; scalar_t__ parent; int num_parents; } ;



__attribute__((used)) static unsigned long FUNC_0(struct clk_core *VAR_0)
{
 if (!VAR_0)
  return 0;

 if (!VAR_0->num_parents || VAR_0->parent)
  return VAR_0->rate;






 return 0;
}
