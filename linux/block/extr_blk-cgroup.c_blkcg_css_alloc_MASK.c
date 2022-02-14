
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup_subsys_state {int dummy; } ;
struct blkcg_policy_data {int plid; struct blkcg* blkcg; } ;
struct blkcg_policy {int (* cpd_free_fn ) (struct blkcg_policy_data*) ;int (* cpd_init_fn ) (struct blkcg_policy_data*) ;struct blkcg_policy_data* (* cpd_alloc_fn ) (int ) ;} ;
struct blkcg {struct blkcg_policy_data** cpd; struct cgroup_subsys_state css; int all_blkcgs_node; int cgwb_refcnt; int cgwb_list; int blkg_list; int blkg_tree; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cgroup_subsys_state* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct blkcg_policy** VAR_7 ;
 struct blkcg VAR_8 ;
 int FUNC_4 (struct blkcg*) ;
 struct blkcg* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;
 struct blkcg_policy_data* FUNC_11 (int ) ;
 int FUNC_12 (struct blkcg_policy_data*) ;
 int FUNC_13 (struct blkcg_policy_data*) ;

__attribute__((used)) static struct cgroup_subsys_state *
FUNC_14(struct cgroup_subsys_state *VAR_9)
{
 struct blkcg *VAR_10;
 struct cgroup_subsys_state *VAR_11;
 int VAR_12;

 FUNC_7(&VAR_6);

 if (!VAR_9) {
  VAR_10 = &VAR_8;
 } else {
  VAR_10 = FUNC_5(sizeof(*VAR_10), VAR_2);
  if (!VAR_10) {
   VAR_11 = FUNC_0(-VAR_1);
   goto unlock;
  }
 }

 for (VAR_12 = 0; VAR_12 < VAR_0 ; VAR_12++) {
  struct blkcg_policy *VAR_13 = VAR_7[VAR_12];
  struct blkcg_policy_data *VAR_14;







  if (!VAR_13 || !VAR_13->cpd_alloc_fn)
   continue;

  VAR_14 = VAR_13->cpd_alloc_fn(VAR_2);
  if (!VAR_14) {
   VAR_11 = FUNC_0(-VAR_1);
   goto free_pd_blkcg;
  }
  VAR_10->cpd[VAR_12] = VAR_14;
  VAR_14->blkcg = VAR_10;
  VAR_14->plid = VAR_12;
  if (VAR_13->cpd_init_fn)
   VAR_13->cpd_init_fn(VAR_14);
 }

 FUNC_10(&VAR_10->lock);
 FUNC_3(&VAR_10->blkg_tree, VAR_3 | VAR_4);
 FUNC_1(&VAR_10->blkg_list);




 FUNC_6(&VAR_10->all_blkcgs_node, &VAR_5);

 FUNC_8(&VAR_6);
 return &VAR_10->css;

free_pd_blkcg:
 for (VAR_12--; VAR_12 >= 0; VAR_12--)
  if (VAR_10->cpd[VAR_12])
   VAR_7[VAR_12]->cpd_free_fn(VAR_10->cpd[VAR_12]);

 if (VAR_10 != &VAR_8)
  FUNC_4(VAR_10);
unlock:
 FUNC_8(&VAR_6);
 return VAR_11;
}
