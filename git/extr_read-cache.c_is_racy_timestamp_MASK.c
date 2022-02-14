
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int dummy; } ;
struct cache_entry {int ce_stat_data; int ce_mode; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct index_state const*,int *) ;

int FUNC_2(const struct index_state *VAR_0,
        const struct cache_entry *VAR_1)
{
 return (!FUNC_0(VAR_1->ce_mode) &&
  FUNC_1(VAR_0, &VAR_1->ce_stat_data));
}
