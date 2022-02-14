
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urlmatch_current_candidate_value {int value_is_null; int value; } ;
struct string_list_item {struct urlmatch_current_candidate_value* util; } ;
struct string_list {int dummy; } ;


 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 struct string_list_item* FUNC_3 (struct string_list*,char const*) ;
 struct urlmatch_current_candidate_value* FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(const char *VAR_0, const char *VAR_1, void *VAR_2)
{
 struct string_list *VAR_3 = VAR_2;
 struct string_list_item *VAR_4 = FUNC_3(VAR_3, VAR_0);
 struct urlmatch_current_candidate_value *VAR_5 = VAR_4->util;

 if (!VAR_5) {
  VAR_5 = FUNC_4(sizeof(*VAR_5));
  FUNC_1(&VAR_5->value, 0);
  VAR_4->util = VAR_5;
 } else {
  FUNC_2(&VAR_5->value);
 }

 if (VAR_1) {
  FUNC_0(&VAR_5->value, VAR_1);
  VAR_5->value_is_null = 0;
 } else {
  VAR_5->value_is_null = 1;
 }
 return 0;
}
