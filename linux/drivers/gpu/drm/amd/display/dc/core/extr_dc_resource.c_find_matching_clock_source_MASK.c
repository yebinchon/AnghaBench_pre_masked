
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_pool {int clk_src_count; struct clock_source** clock_sources; } ;
struct clock_source {int dummy; } ;



__attribute__((used)) static int FUNC_0(
  const struct resource_pool *VAR_0,
  struct clock_source *VAR_1)
{

 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->clk_src_count; VAR_2++) {
  if (VAR_0->clock_sources[VAR_2] == VAR_1)
   return VAR_2;
 }
 return -1;
}
