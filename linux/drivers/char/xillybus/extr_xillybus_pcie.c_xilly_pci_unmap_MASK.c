
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xilly_mapping {int direction; int size; int dma_addr; int device; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct xilly_mapping *VAR_1 = VAR_0;

 FUNC_1(VAR_1->device, VAR_1->dma_addr,
    VAR_1->size, VAR_1->direction);

 FUNC_0(VAR_0);
}
