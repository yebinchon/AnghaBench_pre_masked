
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int cache_changed; int cache_tree; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char const*) ;

void FUNC_1(struct index_state *VAR_1, const char *VAR_2)
{
 if (FUNC_0(VAR_1->cache_tree, VAR_2))
  VAR_1->cache_changed |= VAR_0;
}
