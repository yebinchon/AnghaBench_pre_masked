
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efa_dev {int ibdev; TYPE_1__* pdev; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (size_t,int) ;
 int FUNC_1 (int *,void*,size_t,int) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (void*,size_t) ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static void *FUNC_5(struct efa_dev *VAR_2, dma_addr_t *VAR_3,
          size_t VAR_4, enum dma_data_direction VAR_5)
{
 void *VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_0 | VAR_1);
 if (!VAR_6)
  return ((void*)0);

 *VAR_3 = FUNC_1(&VAR_2->pdev->dev, VAR_6, VAR_4, VAR_5);
 if (FUNC_2(&VAR_2->pdev->dev, *VAR_3)) {
  FUNC_4(&VAR_2->ibdev, "Failed to map DMA address\n");
  FUNC_3(VAR_6, VAR_4);
  return ((void*)0);
 }

 return VAR_6;
}
