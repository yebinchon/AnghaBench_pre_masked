
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct write_commit_graph_context {int num_commit_graphs_after; int new_base_graph; } ;
struct hashfile {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hashfile*,int ) ;

__attribute__((used)) static int FUNC_3(struct hashfile *VAR_0,
      struct write_commit_graph_context *VAR_1)
{
 int VAR_2 = FUNC_2(VAR_0, VAR_1->new_base_graph);

 if (VAR_2 != VAR_1->num_commit_graphs_after - 1) {
  FUNC_1(FUNC_0("failed to write correct number of base graph ids"));
  return -1;
 }

 return 0;
}
