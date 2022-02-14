
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xilly_mapping {size_t size; int direction; int dma_addr; int device; } ;
struct xilly_endpoint {int dev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,struct xilly_mapping*) ;
 int FUNC_1 (int ,void*,size_t,int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (struct xilly_mapping*) ;
 struct xilly_mapping* FUNC_4 (int,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct xilly_endpoint *VAR_4,
          void *VAR_5,
          size_t VAR_6,
          int VAR_7,
          dma_addr_t *VAR_8
 )
{
 dma_addr_t VAR_9;
 struct xilly_mapping *VAR_10;

 VAR_10 = FUNC_4(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_9 = FUNC_1(VAR_4->dev, VAR_5, VAR_6, VAR_7);

 if (FUNC_2(VAR_4->dev, VAR_9)) {
  FUNC_3(VAR_10);
  return -VAR_0;
 }

 VAR_10->device = VAR_4->dev;
 VAR_10->dma_addr = VAR_9;
 VAR_10->size = VAR_6;
 VAR_10->direction = VAR_7;

 *VAR_8 = VAR_9;

 return FUNC_0(VAR_4->dev, VAR_3, VAR_10);
}
