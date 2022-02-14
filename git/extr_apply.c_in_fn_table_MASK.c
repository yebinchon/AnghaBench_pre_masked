
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {scalar_t__ util; } ;
struct patch {int dummy; } ;
struct apply_state {int fn_table; } ;


 struct string_list_item* FUNC_0 (int *,char const*) ;

__attribute__((used)) static struct patch *FUNC_1(struct apply_state *VAR_0, const char *VAR_1)
{
 struct string_list_item *VAR_2;

 if (VAR_1 == ((void*)0))
  return ((void*)0);

 VAR_2 = FUNC_0(&VAR_0->fn_table, VAR_1);
 if (VAR_2 != ((void*)0))
  return (struct patch *)VAR_2->util;

 return ((void*)0);
}
