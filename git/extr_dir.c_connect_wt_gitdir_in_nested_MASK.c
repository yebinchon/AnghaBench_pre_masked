
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct submodule {int name; int path; } ;
struct strbuf {int buf; } ;
struct repository {TYPE_1__* index; int gitdir; } ;
struct cache_entry {int name; int ce_mode; } ;
struct TYPE_2__ {int cache_nr; struct cache_entry** cache; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct repository*,int ) ;
 int VAR_1 ;
 int FUNC_5 (struct repository*) ;
 scalar_t__ FUNC_6 (struct repository*,char const*,char const*) ;
 scalar_t__ FUNC_7 (struct repository*) ;
 int FUNC_8 (struct strbuf*,char*,char const*,int ) ;
 int FUNC_9 (struct strbuf*) ;
 int FUNC_10 (struct strbuf*) ;
 int FUNC_11 (int ,int ) ;
 struct submodule* FUNC_12 (struct repository*,int *,int ) ;

__attribute__((used)) static void FUNC_13(const char *VAR_2,
     const char *VAR_3)
{
 int VAR_4;
 struct repository VAR_5;
 struct strbuf VAR_6 = VAR_0;
 struct strbuf VAR_7 = VAR_0;

 const struct submodule *VAR_8;


 if (FUNC_6(&VAR_5, VAR_3, VAR_2))
  return;

 if (FUNC_7(&VAR_5) < 0)
  FUNC_3(FUNC_1("index file corrupt in repo %s"), VAR_5.gitdir);

 for (VAR_4 = 0; VAR_4 < VAR_5.index->cache_nr; VAR_4++) {
  const struct cache_entry *VAR_9 = VAR_5.index->cache[VAR_4];

  if (!FUNC_0(VAR_9->ce_mode))
   continue;

  while (VAR_4 + 1 < VAR_5.index->cache_nr &&
         !FUNC_11(VAR_9->name, VAR_5.index->cache[VAR_4 + 1]->name))




   VAR_4++;

  VAR_8 = FUNC_12(&VAR_5, &VAR_1, VAR_9->name);
  if (!VAR_8 || !FUNC_4(&VAR_5, VAR_9->name))

   continue;

  FUNC_10(&VAR_6);
  FUNC_10(&VAR_7);
  FUNC_8(&VAR_6, "%s/%s", VAR_2, VAR_8->path);
  FUNC_8(&VAR_7, "%s/modules/%s", VAR_3, VAR_8->name);

  FUNC_2(VAR_6.buf, VAR_7.buf, 1);
 }
 FUNC_9(&VAR_6);
 FUNC_9(&VAR_7);
 FUNC_5(&VAR_5);
}
