
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw_object_store {int * packed_git; int packed_git_mru; scalar_t__ loaded_alternates; int * odb_tail; scalar_t__ commit_graph_attempted; int * commit_graph; int replace_map; int alternate_db; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct raw_object_store*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct raw_object_store*) ;
 int FUNC_5 (int ,int) ;

void FUNC_6(struct raw_object_store *VAR_0)
{
 FUNC_0(VAR_0->alternate_db);

 FUNC_5(VAR_0->replace_map, 1);
 FUNC_0(VAR_0->replace_map);

 FUNC_3(VAR_0->commit_graph);
 VAR_0->commit_graph = ((void*)0);
 VAR_0->commit_graph_attempted = 0;

 FUNC_4(VAR_0);
 VAR_0->odb_tail = ((void*)0);
 VAR_0->loaded_alternates = 0;

 FUNC_1(&VAR_0->packed_git_mru);
 FUNC_2(VAR_0);
 VAR_0->packed_git = ((void*)0);
}
