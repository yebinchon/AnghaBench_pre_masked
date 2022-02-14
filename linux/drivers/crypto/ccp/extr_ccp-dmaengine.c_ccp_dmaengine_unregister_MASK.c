
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_device {int dummy; } ;
struct ccp_device {int dma_cmd_cache; int dma_desc_cache; struct dma_device dma_dev; } ;


 int FUNC_0 (struct dma_device*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

void FUNC_2(struct ccp_device *VAR_1)
{
 struct dma_device *VAR_2 = &VAR_1->dma_dev;

 if (!VAR_0)
  return;

 FUNC_0(VAR_2);

 FUNC_1(VAR_1->dma_desc_cache);
 FUNC_1(VAR_1->dma_cmd_cache);
}
