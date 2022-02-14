
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skd_device {TYPE_1__* pdev; } ;
struct kmem_cache {int dummy; } ;
struct device {int dummy; } ;
typedef int gfp_t ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (struct device*,void*,int ,int) ;
 scalar_t__ FUNC_1 (struct device*,int ) ;
 void* FUNC_2 (struct kmem_cache*,int ) ;
 int FUNC_3 (struct kmem_cache*,void*) ;
 int FUNC_4 (struct kmem_cache*) ;

__attribute__((used)) static void *FUNC_5(struct skd_device *VAR_0, struct kmem_cache *VAR_1,
      dma_addr_t *VAR_2, gfp_t VAR_3,
      enum dma_data_direction VAR_4)
{
 struct device *VAR_5 = &VAR_0->pdev->dev;
 void *VAR_6;

 VAR_6 = FUNC_2(VAR_1, VAR_3);
 if (!VAR_6)
  return ((void*)0);
 *VAR_2 = FUNC_0(VAR_5, VAR_6,
         FUNC_4(VAR_1), VAR_4);
 if (FUNC_1(VAR_5, *VAR_2)) {
  FUNC_3(VAR_1, VAR_6);
  VAR_6 = ((void*)0);
 }
 return VAR_6;
}
