
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct write_commit_graph_context {scalar_t__ num_commit_graphs_before; scalar_t__ num_commit_graphs_after; struct commit_graph* new_base_graph; int base_graph_name; scalar_t__ new_num_commits_in_base; int progress; scalar_t__ report_progress; TYPE_2__* r; } ;
struct strbuf {int buf; } ;
struct commit_graph {int filename; scalar_t__ num_commits_in_base; scalar_t__ num_commits; struct commit_graph* base_graph; } ;
struct TYPE_4__ {TYPE_1__* objects; } ;
struct TYPE_3__ {struct commit_graph* commit_graph; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct write_commit_graph_context*,struct commit_graph*) ;
 int FUNC_2 (struct write_commit_graph_context*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct strbuf*,int ) ;
 int FUNC_6 (struct strbuf*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct write_commit_graph_context *VAR_1)
{
 struct commit_graph *VAR_2 = VAR_1->r->objects->commit_graph;
 uint32_t VAR_3 = VAR_1->num_commit_graphs_before;
 struct strbuf VAR_4 = VAR_0;

 while (VAR_2 && VAR_3 >= VAR_1->num_commit_graphs_after) {
  VAR_3--;

  if (VAR_1->report_progress) {
   FUNC_5(&VAR_4, FUNC_0("Merging commit-graph"));
   VAR_1->progress = FUNC_3(VAR_4.buf, 0);
  }

  FUNC_1(VAR_1, VAR_2);
  FUNC_4(&VAR_1->progress);
  FUNC_6(&VAR_4);

  VAR_2 = VAR_2->base_graph;
 }

 if (VAR_2) {
  VAR_1->new_base_graph = VAR_2;
  VAR_1->new_num_commits_in_base = VAR_2->num_commits + VAR_2->num_commits_in_base;
 }

 if (VAR_1->new_base_graph)
  VAR_1->base_graph_name = FUNC_7(VAR_1->new_base_graph->filename);

 FUNC_2(VAR_1);
}
