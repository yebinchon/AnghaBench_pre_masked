
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {void* util; } ;
struct apply_state {int limit_by_name; } ;


 struct string_list_item* FUNC_0 (int *,char const*) ;

__attribute__((used)) static void FUNC_1(struct apply_state *VAR_0,
      const char *VAR_1,
      int VAR_2)
{
 struct string_list_item *VAR_3;

 VAR_3 = FUNC_0(&VAR_0->limit_by_name, VAR_1);
 VAR_3->util = VAR_2 ? ((void*)0) : (void *) 1;
}
