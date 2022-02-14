
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int core_commit_graph; int gc_write_commit_graph; int index_version; int core_untracked_cache; int fetch_negotiation_algorithm; int pack_use_sparse; int fetch_write_commit_graph; scalar_t__ initialized; } ;
struct repository {TYPE_1__ settings; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 int FUNC_3 (struct repository*,char*,int*) ;
 int FUNC_4 (struct repository*,char*,int*) ;
 int FUNC_5 (struct repository*,char*,int*) ;
 int FUNC_6 (struct repository*,char*,char**) ;
 int FUNC_7 (char*,char*) ;

void FUNC_8(struct repository *VAR_6)
{
 int VAR_7;
 char *VAR_8;

 if (VAR_6->settings.initialized)
  return;


 FUNC_2(&VAR_6->settings, -1, sizeof(VAR_6->settings));

 if (!FUNC_3(VAR_6, "core.commitgraph", &VAR_7))
  VAR_6->settings.core_commit_graph = VAR_7;
 if (!FUNC_3(VAR_6, "gc.writecommitgraph", &VAR_7))
  VAR_6->settings.gc_write_commit_graph = VAR_7;
 FUNC_0(VAR_6->settings.core_commit_graph, 1);
 FUNC_0(VAR_6->settings.gc_write_commit_graph, 1);

 if (!FUNC_4(VAR_6, "index.version", &VAR_7))
  VAR_6->settings.index_version = VAR_7;
 if (!FUNC_5(VAR_6, "core.untrackedcache", &VAR_7)) {
  if (VAR_7 == 0)
   VAR_6->settings.core_untracked_cache = VAR_3;
  else
   VAR_6->settings.core_untracked_cache = VAR_4;
 } else if (!FUNC_6(VAR_6, "core.untrackedcache", &VAR_8)) {
  if (!FUNC_7(VAR_8, "keep"))
   VAR_6->settings.core_untracked_cache = VAR_2;

  FUNC_1(VAR_8);
 }

 if (!FUNC_6(VAR_6, "fetch.negotiationalgorithm", &VAR_8)) {
  if (!FUNC_7(VAR_8, "skipping"))
   VAR_6->settings.fetch_negotiation_algorithm = VAR_1;
  else
   VAR_6->settings.fetch_negotiation_algorithm = VAR_0;
 }

 if (!FUNC_3(VAR_6, "pack.usesparse", &VAR_7))
  VAR_6->settings.pack_use_sparse = VAR_7;
 if (!FUNC_3(VAR_6, "feature.manyfiles", &VAR_7) && VAR_7) {
  FUNC_0(VAR_6->settings.index_version, 4);
  FUNC_0(VAR_6->settings.core_untracked_cache, VAR_4);
 }
 if (!FUNC_3(VAR_6, "fetch.writecommitgraph", &VAR_7))
  VAR_6->settings.fetch_write_commit_graph = VAR_7;
 if (!FUNC_3(VAR_6, "feature.experimental", &VAR_7) && VAR_7) {
  FUNC_0(VAR_6->settings.pack_use_sparse, 1);
  FUNC_0(VAR_6->settings.fetch_negotiation_algorithm, VAR_1);
  FUNC_0(VAR_6->settings.fetch_write_commit_graph, 1);
 }
 FUNC_0(VAR_6->settings.fetch_write_commit_graph, 0);


 if (VAR_5)
  VAR_6->settings.core_untracked_cache = VAR_2;
 else
  FUNC_0(VAR_6->settings.core_untracked_cache, VAR_2);

 FUNC_0(VAR_6->settings.fetch_negotiation_algorithm, VAR_0);
}
