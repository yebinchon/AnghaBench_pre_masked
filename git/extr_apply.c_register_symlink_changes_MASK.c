
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {void* util; } ;
struct apply_state {int symlink_changes; } ;


 struct string_list_item* FUNC_0 (int *,char const*) ;
 struct string_list_item* FUNC_1 (int *,char const*) ;

__attribute__((used)) static uintptr_t FUNC_2(struct apply_state *VAR_0,
       const char *VAR_1,
       uintptr_t VAR_2)
{
 struct string_list_item *VAR_3;

 VAR_3 = FUNC_1(&VAR_0->symlink_changes, VAR_1);
 if (!VAR_3) {
  VAR_3 = FUNC_0(&VAR_0->symlink_changes, VAR_1);
  VAR_3->util = (void *)0;
 }
 VAR_3->util = (void *)(VAR_2 | ((uintptr_t)VAR_3->util));
 return (uintptr_t)VAR_3->util;
}
