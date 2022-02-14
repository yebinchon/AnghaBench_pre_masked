
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fore200e {int dev; } ;
struct chunk {int dma_addr; int alloc_addr; int alloc_size; } ;


 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct fore200e* VAR_0, struct chunk* VAR_1)
{
 FUNC_0(VAR_0->dev, VAR_1->alloc_size, VAR_1->alloc_addr,
     VAR_1->dma_addr);
}
