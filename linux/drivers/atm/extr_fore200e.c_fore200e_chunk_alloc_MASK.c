
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fore200e {int dev; } ;
struct chunk {int alloc_size; int direction; int * alloc_addr; int dma_addr; int * align_addr; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int *,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,int,int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,int ) ;

__attribute__((used)) static int
FUNC_5(struct fore200e* VAR_2, struct chunk* VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
    unsigned long VAR_7 = 0;

    if (VAR_5 <= sizeof(int))
 VAR_5 = 0;

    VAR_3->alloc_size = VAR_4 + VAR_5;
    VAR_3->direction = VAR_6;

    VAR_3->alloc_addr = FUNC_4(VAR_3->alloc_size, VAR_1);
    if (VAR_3->alloc_addr == ((void*)0))
 return -VAR_0;

    if (VAR_5 > 0)
 VAR_7 = FUNC_0(VAR_3->alloc_addr, VAR_5);

    VAR_3->align_addr = VAR_3->alloc_addr + VAR_7;

    VAR_3->dma_addr = FUNC_1(VAR_2->dev, VAR_3->align_addr,
         VAR_4, VAR_6);
    if (FUNC_2(VAR_2->dev, VAR_3->dma_addr)) {
 FUNC_3(VAR_3->alloc_addr);
 return -VAR_0;
    }
    return 0;
}
