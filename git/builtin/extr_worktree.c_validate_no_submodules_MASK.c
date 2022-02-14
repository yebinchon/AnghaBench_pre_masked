
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worktree {int path; } ;
struct strbuf {int buf; } ;
struct index_state {int cache_nr; struct cache_entry** cache; int * member_0; } ;
struct cache_entry {int name; int ce_mode; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct index_state*) ;
 int FUNC_4 (struct worktree const*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int*) ;
 scalar_t__ FUNC_7 (struct index_state*,int ,int ) ;
 int FUNC_8 (struct strbuf*,char*,int ,int ) ;
 int FUNC_9 (struct strbuf*) ;
 int FUNC_10 (struct strbuf*) ;
 int FUNC_11 (struct worktree const*,char*) ;

__attribute__((used)) static void FUNC_12(const struct worktree *VAR_1)
{
 struct index_state VAR_2 = { ((void*)0) };
 struct strbuf VAR_3 = VAR_0;
 int VAR_4, VAR_5 = 0;

 if (FUNC_5(FUNC_11(VAR_1, "modules"))) {





  VAR_5 = 1;
 } else if (FUNC_7(&VAR_2, FUNC_11(VAR_1, "index"),
       FUNC_4(VAR_1)) > 0) {
  for (VAR_4 = 0; VAR_4 < VAR_2.cache_nr; VAR_4++) {
   struct cache_entry *VAR_6 = VAR_2.cache[VAR_4];
   int VAR_7;

   if (!FUNC_0(VAR_6->ce_mode))
    continue;

   FUNC_10(&VAR_3);
   FUNC_8(&VAR_3, "%s/%s", VAR_1->path, VAR_6->name);
   if (!FUNC_6(VAR_3.buf, &VAR_7))
    continue;

   VAR_5 = 1;
   break;
  }
 }
 FUNC_3(&VAR_2);
 FUNC_9(&VAR_3);

 if (VAR_5)
  FUNC_2(FUNC_1("working trees containing submodules cannot be moved or removed"));
}
