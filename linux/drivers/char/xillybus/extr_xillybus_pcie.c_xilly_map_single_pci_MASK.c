
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xilly_mapping {size_t size; int direction; int dma_addr; int device; } ;
struct xilly_endpoint {int dev; int pdev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,struct xilly_mapping*) ;
 int FUNC_1 (struct xilly_mapping*) ;
 struct xilly_mapping* FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,void*,size_t,int) ;
 int FUNC_5 (int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(struct xilly_endpoint *VAR_4,
    void *VAR_5,
    size_t VAR_6,
    int VAR_7,
    dma_addr_t *VAR_8
 )
{
 int VAR_9;
 dma_addr_t VAR_10;
 struct xilly_mapping *VAR_11;

 VAR_11 = FUNC_2(sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_9 = FUNC_5(VAR_7);

 VAR_10 = FUNC_4(VAR_4->pdev, VAR_5, VAR_6, VAR_9);

 if (FUNC_3(VAR_4->pdev, VAR_10)) {
  FUNC_1(VAR_11);
  return -VAR_0;
 }

 VAR_11->device = VAR_4->pdev;
 VAR_11->dma_addr = VAR_10;
 VAR_11->size = VAR_6;
 VAR_11->direction = VAR_9;

 *VAR_8 = VAR_10;

 return FUNC_0(VAR_4->dev, VAR_3, VAR_11);
}
