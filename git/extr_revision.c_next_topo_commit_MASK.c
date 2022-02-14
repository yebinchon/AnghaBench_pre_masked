
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct topo_walk_info {int indegree; int topo_queue; } ;
struct rev_info {struct topo_walk_info* topo_walk_info; } ;
struct commit {int dummy; } ;


 scalar_t__* FUNC_0 (int *,struct commit*) ;
 struct commit* FUNC_1 (int *) ;

__attribute__((used)) static struct commit *FUNC_2(struct rev_info *VAR_0)
{
 struct commit *VAR_1;
 struct topo_walk_info *VAR_2 = VAR_0->topo_walk_info;


 VAR_1 = FUNC_1(&VAR_2->topo_queue);

 if (VAR_1)
  *(FUNC_0(&VAR_2->indegree, VAR_1)) = 0;

 return VAR_1;
}
