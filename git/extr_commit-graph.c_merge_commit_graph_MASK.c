
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ nr; struct commit** list; int alloc; } ;
struct write_commit_graph_context {TYPE_1__ commits; int r; int progress; } ;
struct object_id {int dummy; } ;
struct commit_graph {scalar_t__ num_commits_in_base; scalar_t__ num_commits; } ;
struct commit {int dummy; } ;


 int FUNC_0 (struct commit**,scalar_t__,int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct commit_graph*,scalar_t__,struct object_id*) ;
 struct commit* FUNC_3 (int ,struct object_id*,int) ;

__attribute__((used)) static void FUNC_4(struct write_commit_graph_context *VAR_0,
          struct commit_graph *VAR_1)
{
 uint32_t VAR_2;
 uint32_t VAR_3 = VAR_1->num_commits_in_base;

 FUNC_0(VAR_0->commits.list, VAR_0->commits.nr + VAR_1->num_commits, VAR_0->commits.alloc);

 for (VAR_2 = 0; VAR_2 < VAR_1->num_commits; VAR_2++) {
  struct object_id VAR_4;
  struct commit *VAR_5;

  FUNC_1(VAR_0->progress, VAR_2 + 1);

  FUNC_2(VAR_1, VAR_2 + VAR_3, &VAR_4);


  VAR_5 = FUNC_3(VAR_0->r, &VAR_4, 1);

  if (VAR_5) {
   VAR_0->commits.list[VAR_0->commits.nr] = VAR_5;
   VAR_0->commits.nr++;
  }
 }
}
