
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cgroup_subsys_state {int dummy; } ;
struct blkcg {scalar_t__* cpd; int all_blkcgs_node; } ;
struct TYPE_2__ {int (* cpd_free_fn ) (scalar_t__) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__** VAR_2 ;
 struct blkcg* FUNC_0 (struct cgroup_subsys_state*) ;
 int FUNC_1 (struct blkcg*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct cgroup_subsys_state *VAR_3)
{
 struct blkcg *VAR_4 = FUNC_0(VAR_3);
 int VAR_5;

 FUNC_3(&VAR_1);

 FUNC_2(&VAR_4->all_blkcgs_node);

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  if (VAR_4->cpd[VAR_5])
   VAR_2[VAR_5]->cpd_free_fn(VAR_4->cpd[VAR_5]);

 FUNC_4(&VAR_1);

 FUNC_1(VAR_4);
}
