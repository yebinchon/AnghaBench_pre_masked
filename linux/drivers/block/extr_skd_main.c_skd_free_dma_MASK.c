
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skd_device {TYPE_1__* pdev; } ;
struct kmem_cache {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,int ,int ,int) ;
 int FUNC_1 (struct kmem_cache*,void*) ;
 int FUNC_2 (struct kmem_cache*) ;

__attribute__((used)) static void FUNC_3(struct skd_device *VAR_0, struct kmem_cache *VAR_1,
    void *VAR_2, dma_addr_t VAR_3,
    enum dma_data_direction VAR_4)
{
 if (!VAR_2)
  return;

 FUNC_0(&VAR_0->pdev->dev, VAR_3,
    FUNC_2(VAR_1), VAR_4);
 FUNC_1(VAR_1, VAR_2);
}
