
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sci_clk_provider {int num_clocks; int * clocks; } ;


 int FUNC_0 (struct sci_clk_provider*,int ) ;

__attribute__((used)) static int FUNC_1(struct sci_clk_provider *VAR_0)
{
 int VAR_1;
 int VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_clocks; VAR_1++) {
  VAR_2 = FUNC_0(VAR_0, VAR_0->clocks[VAR_1]);
  if (VAR_2)
   return VAR_2;
 }

 return 0;
}
