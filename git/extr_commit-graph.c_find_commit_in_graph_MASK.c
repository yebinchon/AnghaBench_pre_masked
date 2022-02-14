
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct commit_graph {scalar_t__ num_commits_in_base; struct commit_graph* base_graph; } ;
struct TYPE_2__ {int oid; } ;
struct commit {scalar_t__ graph_pos; TYPE_1__ object; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct commit_graph*,int *,scalar_t__*) ;

__attribute__((used)) static int FUNC_1(struct commit *VAR_1, struct commit_graph *VAR_2, uint32_t *VAR_3)
{
 if (VAR_1->graph_pos != VAR_0) {
  *VAR_3 = VAR_1->graph_pos;
  return 1;
 } else {
  struct commit_graph *VAR_4 = VAR_2;
  uint32_t VAR_5;

  while (VAR_4 && !FUNC_0(VAR_4, &(VAR_1->object.oid), &VAR_5))
   VAR_4 = VAR_4->base_graph;

  if (VAR_4) {
   *VAR_3 = VAR_5 + VAR_4->num_commits_in_base;
   return 1;
  }

  return 0;
 }
}
