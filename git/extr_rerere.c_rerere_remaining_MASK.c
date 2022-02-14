
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list_item {int util; } ;
struct string_list {int dummy; } ;
struct repository {TYPE_1__* index; } ;
struct cache_entry {scalar_t__ name; } ;
struct TYPE_2__ {int cache_nr; struct cache_entry** cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,int,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct string_list_item*) ;
 scalar_t__ FUNC_4 (struct repository*) ;
 scalar_t__ FUNC_5 (struct repository*,struct string_list*,int ) ;
 int FUNC_6 (struct string_list*,char const*) ;
 struct string_list_item* FUNC_7 (struct string_list*,char const*) ;

int FUNC_8(struct repository *VAR_4, struct string_list *VAR_5)
{
 int VAR_6;

 if (FUNC_5(VAR_4, VAR_5, VAR_1))
  return 0;
 if (FUNC_4(VAR_4) < 0)
  return FUNC_2(FUNC_0("index file corrupt"));

 for (VAR_6 = 0; VAR_6 < VAR_4->index->cache_nr;) {
  int VAR_7;
  const struct cache_entry *VAR_8 = VAR_4->index->cache[VAR_6];
  VAR_6 = FUNC_1(VAR_4->index, VAR_6, &VAR_7);
  if (VAR_7 == VAR_0)
   FUNC_6(VAR_5, (const char *)VAR_8->name);
  else if (VAR_7 == VAR_3) {
   struct string_list_item *VAR_9;
   VAR_9 = FUNC_7(VAR_5, (const char *)VAR_8->name);
   if (VAR_9 != ((void*)0)) {
    FUNC_3(VAR_9);
    VAR_9->util = VAR_2;
   }
  }
 }
 return 0;
}
