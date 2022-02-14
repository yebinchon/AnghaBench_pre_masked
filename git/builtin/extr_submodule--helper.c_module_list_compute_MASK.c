
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pathspec {scalar_t__ nr; } ;
struct module_list {scalar_t__ nr; struct cache_entry const** entries; int alloc; } ;
struct cache_entry {int name; int ce_mode; } ;


 int FUNC_0 (struct cache_entry const**,scalar_t__,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 struct cache_entry** VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct cache_entry const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,struct pathspec*,int ,int ,int ,char*,int) ;
 int FUNC_7 (struct pathspec*,int ,int ,char const*,char const**) ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 (char*,struct pathspec*) ;
 int FUNC_10 (int ,int ) ;
 int VAR_3 ;
 char* FUNC_11 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_12(int VAR_4, const char **VAR_5,
          const char *VAR_6,
          struct pathspec *VAR_7,
          struct module_list *VAR_8)
{
 int VAR_9, VAR_10 = 0;
 char *VAR_11 = ((void*)0);
 FUNC_7(VAR_7, 0,
         VAR_0,
         VAR_6, VAR_5);

 if (VAR_7->nr)
  VAR_11 = FUNC_11(VAR_7->nr, 1);

 if (FUNC_8() < 0)
  FUNC_4(FUNC_2("index file corrupt"));

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  const struct cache_entry *VAR_12 = VAR_1[VAR_9];

  if (!FUNC_6(&VAR_3, VAR_7, VAR_12->name, FUNC_3(VAR_12),
        0, VAR_11, 1) ||
      !FUNC_1(VAR_12->ce_mode))
   continue;

  FUNC_0(VAR_8->entries, VAR_8->nr + 1, VAR_8->alloc);
  VAR_8->entries[VAR_8->nr++] = VAR_12;
  while (VAR_9 + 1 < VAR_2 &&
         !FUNC_10(VAR_12->name, VAR_1[VAR_9 + 1]->name))




   VAR_9++;
 }

 if (VAR_11 && FUNC_9(VAR_11, VAR_7))
  VAR_10 = -1;

 FUNC_5(VAR_11);

 return VAR_10;
}
