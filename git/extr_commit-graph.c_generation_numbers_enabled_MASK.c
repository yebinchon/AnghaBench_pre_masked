
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct repository {TYPE_1__* objects; } ;
struct commit_graph {scalar_t__ hash_len; scalar_t__ chunk_commit_data; int num_commits; } ;
struct TYPE_2__ {struct commit_graph* commit_graph; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct repository*) ;

int FUNC_2(struct repository *VAR_0)
{
 uint32_t VAR_1;
 struct commit_graph *VAR_2;
 if (!FUNC_1(VAR_0))
        return 0;

 VAR_2 = VAR_0->objects->commit_graph;

 if (!VAR_2->num_commits)
  return 0;

 VAR_1 = FUNC_0(VAR_2->chunk_commit_data +
        VAR_2->hash_len + 8) >> 2;

 return !!VAR_1;
}
