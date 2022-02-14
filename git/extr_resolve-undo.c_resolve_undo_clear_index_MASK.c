
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct index_state {int cache_changed; struct string_list* resolve_undo; } ;


 int VAR_0 ;
 int FUNC_0 (struct string_list*) ;
 int FUNC_1 (struct string_list*,int) ;

void FUNC_2(struct index_state *VAR_1)
{
 struct string_list *VAR_2 = VAR_1->resolve_undo;
 if (!VAR_2)
  return;
 FUNC_1(VAR_2, 1);
 FUNC_0(VAR_2);
 VAR_1->resolve_undo = ((void*)0);
 VAR_1->cache_changed |= VAR_0;
}
