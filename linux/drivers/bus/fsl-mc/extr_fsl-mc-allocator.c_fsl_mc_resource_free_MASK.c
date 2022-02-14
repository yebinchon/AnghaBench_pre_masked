
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_mc_resource_pool {scalar_t__ type; scalar_t__ free_count; scalar_t__ max_count; int mutex; int free_list; } ;
struct fsl_mc_resource {scalar_t__ type; int node; struct fsl_mc_resource_pool* parent_pool; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct fsl_mc_resource *VAR_0)
{
 struct fsl_mc_resource_pool *VAR_1;

 VAR_1 = VAR_0->parent_pool;
 if (VAR_0->type != VAR_1->type)
  return;

 FUNC_2(&VAR_1->mutex);
 if (VAR_1->free_count < 0 ||
     VAR_1->free_count >= VAR_1->max_count)
  goto out_unlock;

 if (!FUNC_1(&VAR_0->node))
  goto out_unlock;

 FUNC_0(&VAR_0->node, &VAR_1->free_list);
 VAR_1->free_count++;
out_unlock:
 FUNC_3(&VAR_1->mutex);
}
