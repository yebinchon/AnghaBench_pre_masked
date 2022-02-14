
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device_info {int properties; int size_data; int data; int num_res; int res; scalar_t__ dma_mask; int of_node_reused; int fwnode; int parent; int id; int name; } ;
struct TYPE_2__ {scalar_t__* dma_mask; scalar_t__ coherent_dma_mask; int of_node_reused; int fwnode; int of_node; int parent; } ;
struct platform_device {TYPE_1__ dev; } ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int VAR_0 ;
 struct platform_device* FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__* FUNC_3 (int,int ) ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct platform_device*) ;
 int FUNC_7 (struct platform_device*,int ,int ) ;
 int FUNC_8 (struct platform_device*,int ) ;
 int FUNC_9 (struct platform_device*,int ,int ) ;
 struct platform_device* FUNC_10 (int ,int ) ;
 int FUNC_11 (struct platform_device*) ;
 int FUNC_12 (int ) ;

struct platform_device *FUNC_13(
  const struct platform_device_info *VAR_2)
{
 int VAR_3 = -VAR_0;
 struct platform_device *VAR_4;

 VAR_4 = FUNC_10(VAR_2->name, VAR_2->id);
 if (!VAR_4)
  return FUNC_1(-VAR_0);

 VAR_4->dev.parent = VAR_2->parent;
 VAR_4->dev.fwnode = VAR_2->fwnode;
 VAR_4->dev.of_node = FUNC_5(FUNC_12(VAR_4->dev.fwnode));
 VAR_4->dev.of_node_reused = VAR_2->of_node_reused;

 if (VAR_2->dma_mask) {






  VAR_4->dev.dma_mask =
   FUNC_3(sizeof(*VAR_4->dev.dma_mask), VAR_1);
  if (!VAR_4->dev.dma_mask)
   goto err;

  FUNC_4(VAR_4->dev.dma_mask);

  *VAR_4->dev.dma_mask = VAR_2->dma_mask;
  VAR_4->dev.coherent_dma_mask = VAR_2->dma_mask;
 }

 VAR_3 = FUNC_9(VAR_4,
   VAR_2->res, VAR_2->num_res);
 if (VAR_3)
  goto err;

 VAR_3 = FUNC_7(VAR_4,
   VAR_2->data, VAR_2->size_data);
 if (VAR_3)
  goto err;

 if (VAR_2->properties) {
  VAR_3 = FUNC_8(VAR_4,
           VAR_2->properties);
  if (VAR_3)
   goto err;
 }

 VAR_3 = FUNC_6(VAR_4);
 if (VAR_3) {
err:
  FUNC_0(&VAR_4->dev, ((void*)0));
  FUNC_2(VAR_4->dev.dma_mask);
  FUNC_11(VAR_4);
  return FUNC_1(VAR_3);
 }

 return VAR_4;
}
