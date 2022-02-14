
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {scalar_t__ util; } ;
struct string_list {scalar_t__ nr; } ;
struct mailmap_info {char* name; char* email; } ;
struct mailmap_entry {struct string_list namemap; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char const*) ;
 struct string_list_item* FUNC_2 (struct string_list*,char const*,size_t) ;
 size_t FUNC_3 (char const*) ;

int FUNC_4(struct string_list *VAR_0,
      const char **VAR_1, size_t *VAR_2,
      const char **VAR_3, size_t *VAR_4)
{
 struct string_list_item *VAR_5;
 struct mailmap_entry *VAR_6;

 FUNC_0("map_user: map '%.*s' <%.*s>\n",
   (int)*VAR_4, FUNC_1(*VAR_3),
   (int)*VAR_2, FUNC_1(*VAR_1));

 VAR_5 = FUNC_2(VAR_0, *VAR_1, *VAR_2);
 if (VAR_5 != ((void*)0)) {
  VAR_6 = (struct mailmap_entry *)VAR_5->util;
  if (VAR_6->namemap.nr) {





   struct string_list_item *VAR_7;
   VAR_7 = FUNC_2(&VAR_6->namemap, *VAR_3, *VAR_4);
   if (VAR_7)
    VAR_5 = VAR_7;
  }
 }
 if (VAR_5 != ((void*)0)) {
  struct mailmap_info *VAR_8 = (struct mailmap_info *)VAR_5->util;
  if (VAR_8->name == ((void*)0) && VAR_8->email == ((void*)0)) {
   FUNC_0("map_user:  -- (no simple mapping)\n");
   return 0;
  }
  if (VAR_8->email) {
    *VAR_1 = VAR_8->email;
    *VAR_2 = FUNC_3(*VAR_1);
  }
  if (VAR_8->name) {
    *VAR_3 = VAR_8->name;
    *VAR_4 = FUNC_3(*VAR_3);
  }
  FUNC_0("map_user:  to '%.*s' <%.*s>\n",
    (int)*VAR_4, FUNC_1(*VAR_3),
    (int)*VAR_2, FUNC_1(*VAR_1));
  return 1;
 }
 FUNC_0("map_user:  --\n");
 return 0;
}
