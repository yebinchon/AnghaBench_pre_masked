
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_mc_resource_pool {scalar_t__ max_count; scalar_t__ free_count; int free_list; } ;
struct fsl_mc_device {int dev; } ;
struct fsl_mc_bus {int * irq_resources; struct fsl_mc_resource_pool* resource_pools; struct fsl_mc_device mc_dev; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct fsl_mc_bus *VAR_1)
{
 struct fsl_mc_device *VAR_2 = &VAR_1->mc_dev;
 struct fsl_mc_resource_pool *VAR_3 =
   &VAR_1->resource_pools[VAR_0];

 if (!VAR_1->irq_resources)
  return;

 if (VAR_3->max_count == 0)
  return;

 if (VAR_3->free_count != VAR_3->max_count)
  return;

 FUNC_0(&VAR_3->free_list);
 VAR_3->max_count = 0;
 VAR_3->free_count = 0;
 VAR_1->irq_resources = ((void*)0);
 FUNC_1(&VAR_2->dev);
}
