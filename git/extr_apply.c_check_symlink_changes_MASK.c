
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {int util; } ;
struct apply_state {int symlink_changes; } ;


 struct string_list_item* FUNC_0 (int *,char const*) ;

__attribute__((used)) static uintptr_t FUNC_1(struct apply_state *VAR_0, const char *VAR_1)
{
 struct string_list_item *VAR_2;

 VAR_2 = FUNC_0(&VAR_0->symlink_changes, VAR_1);
 if (!VAR_2)
  return 0;
 return (uintptr_t)VAR_2->util;
}
