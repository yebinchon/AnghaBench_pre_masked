
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int dummy; } ;
struct repository {TYPE_1__* index; } ;
struct cache_entry {scalar_t__ name; } ;
struct TYPE_2__ {int cache_nr; struct cache_entry** cache; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,int,int*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct repository*) ;
 int FUNC_4 (struct string_list*,char const*) ;

__attribute__((used)) static int FUNC_5(struct repository *VAR_1, struct string_list *VAR_2)
{
 int VAR_3;

 if (FUNC_3(VAR_1) < 0)
  return FUNC_2(FUNC_0("index file corrupt"));

 for (VAR_3 = 0; VAR_3 < VAR_1->index->cache_nr;) {
  int VAR_4;
  const struct cache_entry *VAR_5 = VAR_1->index->cache[VAR_3];
  VAR_3 = FUNC_1(VAR_1->index, VAR_3, &VAR_4);
  if (VAR_4 == VAR_0)
   FUNC_4(VAR_2, (const char *)VAR_5->name);
 }
 return 0;
}
