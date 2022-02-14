
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {struct string_list_item* util; } ;
struct string_list {int dummy; } ;
struct pathspec {int nr; } ;
struct cache_entry {int ce_flags; int name; } ;


 int VAR_0 ;
 struct cache_entry** VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct cache_entry const*,struct pathspec const*,char*) ;
 scalar_t__ FUNC_1 (struct cache_entry const*) ;
 char* FUNC_2 (struct pathspec const*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,char const*,char*) ;
 int FUNC_5 (char*,struct pathspec const*) ;
 struct string_list_item* FUNC_6 (struct string_list*,int ) ;
 int VAR_3 ;
 char* FUNC_7 (int,int ) ;

__attribute__((used)) static int FUNC_8(struct string_list *VAR_4, const char *VAR_5,
        const struct pathspec *VAR_6)
{
 int VAR_7, VAR_8;
 char *VAR_9;

 if (!VAR_6->nr)
  return 0;

 VAR_9 = FUNC_7(1, VAR_6->nr);

 if (VAR_5) {
  char *VAR_10 = FUNC_2(VAR_6);
  FUNC_4(&VAR_3, VAR_5, VAR_10);
  FUNC_3(VAR_10);
 }

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  const struct cache_entry *VAR_11 = VAR_1[VAR_7];
  struct string_list_item *VAR_12;

  if (VAR_11->ce_flags & VAR_0)
   continue;
  if (!FUNC_0(&VAR_3, VAR_11, VAR_6, VAR_9))
   continue;
  VAR_12 = FUNC_6(VAR_4, VAR_11->name);
  if (FUNC_1(VAR_11))
   VAR_12->util = VAR_12;
 }

 VAR_8 = FUNC_5(VAR_9, VAR_6);
 FUNC_3(VAR_9);
 return VAR_8;
}
