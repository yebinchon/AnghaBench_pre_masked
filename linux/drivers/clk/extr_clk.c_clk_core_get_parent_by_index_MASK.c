
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct clk_core {size_t num_parents; TYPE_1__* parents; } ;
struct TYPE_2__ {struct clk_core* core; } ;


 int FUNC_0 (struct clk_core*,size_t) ;

__attribute__((used)) static struct clk_core *FUNC_1(struct clk_core *VAR_0,
        u8 VAR_1)
{
 if (!VAR_0 || VAR_1 >= VAR_0->num_parents || !VAR_0->parents)
  return ((void*)0);

 if (!VAR_0->parents[VAR_1].core)
  FUNC_0(VAR_0, VAR_1);

 return VAR_0->parents[VAR_1].core;
}
