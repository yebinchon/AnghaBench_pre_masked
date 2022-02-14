
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rev_info {int limited; int prune_data; TYPE_1__* repo; } ;
struct object_id {int dummy; } ;
struct index_state {int cache_nr; struct cache_entry** cache; } ;
struct commit_list {int dummy; } ;
struct TYPE_4__ {int flags; } ;
struct commit {TYPE_2__ object; } ;
struct cache_entry {char* name; } ;
struct TYPE_3__ {struct index_state* index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const**,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct rev_info*,struct commit_list*,int) ;
 int FUNC_2 (struct rev_info*,TYPE_2__*,char*) ;
 int FUNC_3 (struct rev_info*,struct commit_list*,int ,int) ;
 scalar_t__ FUNC_4 (struct index_state*,struct cache_entry const*,int *,int *) ;
 scalar_t__ FUNC_5 (struct cache_entry const*,struct cache_entry*) ;
 int FUNC_6 (struct cache_entry const*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct commit_list*) ;
 struct commit_list* FUNC_10 (struct commit*,struct commit*) ;
 scalar_t__ FUNC_11 (char*,struct object_id*) ;
 struct commit* FUNC_12 (struct object_id*,char*) ;
 int FUNC_13 (int *,int,int,char*,char const**) ;
 int FUNC_14 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_15(struct rev_info *VAR_8)
{
 struct commit_list *VAR_9;
 struct commit *VAR_10, *VAR_11;
 struct object_id VAR_12;
 const char **VAR_13 = ((void*)0);
 int VAR_14, VAR_15 = 1;
 struct index_state *VAR_16 = VAR_8->repo->index;

 if (FUNC_11("HEAD", &VAR_12))
  FUNC_8("--merge without HEAD?");
 VAR_10 = FUNC_12(&VAR_12, "HEAD");
 if (FUNC_11("MERGE_HEAD", &VAR_12))
  FUNC_8("--merge without MERGE_HEAD?");
 VAR_11 = FUNC_12(&VAR_12, "MERGE_HEAD");
 FUNC_2(VAR_8, &VAR_10->object, "HEAD");
 FUNC_2(VAR_8, &VAR_11->object, "MERGE_HEAD");
 VAR_9 = FUNC_10(VAR_10, VAR_11);
 FUNC_3(VAR_8, VAR_9, VAR_5, VAR_7 | VAR_0);
 FUNC_1(VAR_8, VAR_9, VAR_7 | VAR_0);
 FUNC_9(VAR_9);
 VAR_10->object.flags |= VAR_6;

 if (!VAR_16->cache_nr)
  FUNC_14(VAR_8->repo);
 for (VAR_14 = 0; VAR_14 < VAR_16->cache_nr; VAR_14++) {
  const struct cache_entry *VAR_17 = VAR_16->cache[VAR_14];
  if (!FUNC_6(VAR_17))
   continue;
  if (FUNC_4(VAR_16, VAR_17, &VAR_8->prune_data, ((void*)0))) {
   VAR_15++;
   FUNC_0(VAR_13, VAR_15);
   VAR_13[VAR_15-2] = VAR_17->name;
   VAR_13[VAR_15-1] = ((void*)0);
  }
  while ((VAR_14+1 < VAR_16->cache_nr) &&
         FUNC_5(VAR_17, VAR_16->cache[VAR_14+1]))
   VAR_14++;
 }
 FUNC_7(&VAR_8->prune_data);
 FUNC_13(&VAR_8->prune_data, VAR_1 & ~VAR_2,
         VAR_4 | VAR_3, "", VAR_13);
 VAR_8->limited = 1;
}
