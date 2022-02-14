
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int * index; int * submodule_cache; int * config; int * parsed_objects; int * objects; int * submodule_prefix; int * worktree; int * index_file; int * graft_file; int * commondir; int * gitdir; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;

void FUNC_6(struct repository *VAR_1)
{
 FUNC_0(VAR_1->gitdir);
 FUNC_0(VAR_1->commondir);
 FUNC_0(VAR_1->graft_file);
 FUNC_0(VAR_1->index_file);
 FUNC_0(VAR_1->worktree);
 FUNC_0(VAR_1->submodule_prefix);

 FUNC_4(VAR_1->objects);
 FUNC_0(VAR_1->objects);

 FUNC_3(VAR_1->parsed_objects);
 FUNC_0(VAR_1->parsed_objects);

 if (VAR_1->config) {
  FUNC_2(VAR_1->config);
  FUNC_0(VAR_1->config);
 }

 if (VAR_1->submodule_cache) {
  FUNC_5(VAR_1->submodule_cache);
  VAR_1->submodule_cache = ((void*)0);
 }

 if (VAR_1->index) {
  FUNC_1(VAR_1->index);
  if (VAR_1->index != &VAR_0)
   FUNC_0(VAR_1->index);
 }
}
