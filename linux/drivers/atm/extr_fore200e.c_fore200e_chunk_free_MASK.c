
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fore200e {int dev; } ;
struct chunk {int alloc_addr; int direction; int dma_size; int dma_addr; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct fore200e* VAR_0, struct chunk* VAR_1)
{
    FUNC_0(VAR_0->dev, VAR_1->dma_addr, VAR_1->dma_size,
       VAR_1->direction);
    FUNC_1(VAR_1->alloc_addr);
}
