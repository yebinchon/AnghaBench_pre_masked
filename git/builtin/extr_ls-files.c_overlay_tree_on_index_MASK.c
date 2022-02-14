
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree {int dummy; } ;
struct pathspec {int dummy; } ;
struct object_id {int dummy; } ;
struct index_state {int cache_nr; struct cache_entry** cache; } ;
struct cache_entry {int ce_flags; int name; } ;
typedef int pathspec ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cache_entry*) ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (char const*,struct object_id*) ;
 int FUNC_3 (struct pathspec*,int ,int) ;
 int FUNC_4 (struct pathspec*,int ,int ,char const*,char const**) ;
 struct tree* FUNC_5 (struct object_id*) ;
 scalar_t__ FUNC_6 (int ,struct tree*,int,struct pathspec*,struct index_state*) ;
 int FUNC_7 (int ,int ) ;
 int VAR_4 ;

void FUNC_8(struct index_state *VAR_5,
      const char *VAR_6, const char *VAR_7)
{
 struct tree *VAR_8;
 struct object_id VAR_9;
 struct pathspec VAR_10;
 struct cache_entry *VAR_11 = ((void*)0);
 int VAR_12;

 if (FUNC_2(VAR_6, &VAR_9))
  FUNC_1("tree-ish %s not found.", VAR_6);
 VAR_8 = FUNC_5(&VAR_9);
 if (!VAR_8)
  FUNC_1("bad tree-ish %s", VAR_6);


 for (VAR_12 = 0; VAR_12 < VAR_5->cache_nr; VAR_12++) {
  struct cache_entry *VAR_13 = VAR_5->cache[VAR_12];
  if (!FUNC_0(VAR_13))
   continue;
  VAR_13->ce_flags |= VAR_0;
 }

 if (VAR_7) {
  static const char *(VAR_14[1]);
  VAR_14[0] = ((void*)0);
  FUNC_4(&VAR_10, VAR_2,
          VAR_3, VAR_7, VAR_14);
 } else
  FUNC_3(&VAR_10, 0, sizeof(VAR_10));
 if (FUNC_6(VAR_4, VAR_8, 1, &VAR_10, VAR_5))
  FUNC_1("unable to read tree entries %s", VAR_6);

 for (VAR_12 = 0; VAR_12 < VAR_5->cache_nr; VAR_12++) {
  struct cache_entry *VAR_15 = VAR_5->cache[VAR_12];
  switch (FUNC_0(VAR_15)) {
  case 0:
   VAR_11 = VAR_15;

  default:
   continue;
  case 1:





   if (VAR_11 &&
       !FUNC_7(VAR_11->name, VAR_15->name))
    VAR_15->ce_flags |= VAR_1;
  }
 }
}
