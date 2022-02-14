
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_pool {struct clock_source* dp_clock_source; } ;
struct resource_context {int dp_clock_source_ref_count; int * clock_source_ref_count; } ;
struct clock_source {int dummy; } ;


 int FUNC_0 (struct resource_pool const*,struct clock_source*) ;

void FUNC_1(
  struct resource_context *VAR_0,
  const struct resource_pool *VAR_1,
  struct clock_source *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_1, VAR_2);

 if (VAR_3 > -1)
  VAR_0->clock_source_ref_count[VAR_3]--;

 if (VAR_1->dp_clock_source == VAR_2)
  VAR_0->dp_clock_source_ref_count--;
}
