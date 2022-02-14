
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct topo_walk_info {int explore_queue; } ;
struct rev_info {struct topo_walk_info* topo_walk_info; } ;
struct commit {scalar_t__ generation; } ;


 int FUNC_0 (struct rev_info*) ;
 struct commit* FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct rev_info *VAR_0,
        uint32_t VAR_1)
{
 struct topo_walk_info *VAR_2 = VAR_0->topo_walk_info;
 struct commit *VAR_3;
 while ((VAR_3 = FUNC_1(&VAR_2->explore_queue)) &&
        VAR_3->generation >= VAR_1)
  FUNC_0(VAR_0);
}
