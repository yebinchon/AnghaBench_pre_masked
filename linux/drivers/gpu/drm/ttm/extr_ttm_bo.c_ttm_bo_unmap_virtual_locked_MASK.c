
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vma_node; } ;
struct ttm_buffer_object {TYPE_1__ base; struct ttm_bo_device* bdev; } ;
struct ttm_bo_device {int dev_mapping; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct ttm_buffer_object*) ;

void FUNC_2(struct ttm_buffer_object *VAR_0)
{
 struct ttm_bo_device *VAR_1 = VAR_0->bdev;

 FUNC_0(&VAR_0->base.vma_node, VAR_1->dev_mapping);
 FUNC_1(VAR_0);
}
