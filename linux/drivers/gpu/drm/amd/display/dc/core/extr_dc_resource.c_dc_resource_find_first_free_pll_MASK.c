
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_pool {int clk_src_count; struct clock_source** clock_sources; } ;
struct resource_context {scalar_t__* clock_source_ref_count; } ;
struct clock_source {int dummy; } ;



struct clock_source *FUNC_0(
  struct resource_context *VAR_0,
  const struct resource_pool *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->clk_src_count; ++VAR_2) {
  if (VAR_0->clock_source_ref_count[VAR_2] == 0)
   return VAR_1->clock_sources[VAR_2];
 }

 return ((void*)0);
}
