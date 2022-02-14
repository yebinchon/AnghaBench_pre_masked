
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_mc_resource_pool {int type; int mutex; int free_list; struct fsl_mc_bus* mc_bus; scalar_t__ free_count; scalar_t__ max_count; } ;
struct fsl_mc_device {int dummy; } ;
struct fsl_mc_bus {struct fsl_mc_resource_pool* resource_pools; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct fsl_mc_bus* FUNC_2 (struct fsl_mc_device*) ;

void FUNC_3(struct fsl_mc_device *VAR_1)
{
 int VAR_2;
 struct fsl_mc_bus *VAR_3 = FUNC_2(VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  struct fsl_mc_resource_pool *VAR_4 =
      &VAR_3->resource_pools[VAR_2];

  VAR_4->type = VAR_2;
  VAR_4->max_count = 0;
  VAR_4->free_count = 0;
  VAR_4->mc_bus = VAR_3;
  FUNC_0(&VAR_4->free_list);
  FUNC_1(&VAR_4->mutex);
 }
}
