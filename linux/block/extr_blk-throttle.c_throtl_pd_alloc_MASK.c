
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blkg_policy_data {int dummy; } ;
struct throtl_grp {struct blkg_policy_data pd; void* idletime_threshold_conf; void* idletime_threshold; void* latency_target_conf; void* latency_target; void*** iops_conf; void*** bps_conf; void*** iops; void*** bps; int rb_node; int * qnode_on_parent; int * qnode_on_self; int service_queue; } ;
struct request_queue {int node; } ;
struct blkcg {int dummy; } ;
typedef int gfp_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *) ;
 size_t VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 struct throtl_grp* FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int *,struct throtl_grp*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct blkg_policy_data *FUNC_4(gfp_t VAR_7,
      struct request_queue *VAR_8,
      struct blkcg *VAR_9)
{
 struct throtl_grp *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_1(sizeof(*VAR_10), VAR_7, VAR_8->node);
 if (!VAR_10)
  return ((void*)0);

 FUNC_3(&VAR_10->service_queue);

 for (VAR_11 = VAR_3; VAR_11 <= VAR_6; VAR_11++) {
  FUNC_2(&VAR_10->qnode_on_self[VAR_11], VAR_10);
  FUNC_2(&VAR_10->qnode_on_parent[VAR_11], VAR_10);
 }

 FUNC_0(&VAR_10->rb_node);
 VAR_10->bps[VAR_3][VAR_2] = VAR_4;
 VAR_10->bps[VAR_6][VAR_2] = VAR_4;
 VAR_10->iops[VAR_3][VAR_2] = VAR_5;
 VAR_10->iops[VAR_6][VAR_2] = VAR_5;
 VAR_10->bps_conf[VAR_3][VAR_2] = VAR_4;
 VAR_10->bps_conf[VAR_6][VAR_2] = VAR_4;
 VAR_10->iops_conf[VAR_3][VAR_2] = VAR_5;
 VAR_10->iops_conf[VAR_6][VAR_2] = VAR_5;


 VAR_10->latency_target = VAR_1;
 VAR_10->latency_target_conf = VAR_1;
 VAR_10->idletime_threshold = VAR_0;
 VAR_10->idletime_threshold_conf = VAR_0;

 return &VAR_10->pd;
}
