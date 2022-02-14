
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {struct patch* util; } ;
struct patch {int * old_name; scalar_t__ is_rename; int * new_name; } ;
struct apply_state {int fn_table; } ;


 struct patch* VAR_0 ;
 struct string_list_item* FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct apply_state *VAR_1, struct patch *VAR_2)
{
 struct string_list_item *VAR_3;






 if (VAR_2->new_name != ((void*)0)) {
  VAR_3 = FUNC_0(&VAR_1->fn_table, VAR_2->new_name);
  VAR_3->util = VAR_2;
 }





 if ((VAR_2->new_name == ((void*)0)) || (VAR_2->is_rename)) {
  VAR_3 = FUNC_0(&VAR_1->fn_table, VAR_2->old_name);
  VAR_3->util = VAR_0;
 }
}
