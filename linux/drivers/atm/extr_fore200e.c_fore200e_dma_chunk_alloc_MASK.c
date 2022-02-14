
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fore200e {int dev; } ;
struct chunk {int alloc_size; scalar_t__ alloc_addr; scalar_t__ align_addr; int dma_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int,int *,int ) ;

__attribute__((used)) static int
FUNC_1(struct fore200e *VAR_2, struct chunk *VAR_3,
  int VAR_4, int VAR_5, int VAR_6)
{

 VAR_3->alloc_size = VAR_4 * VAR_5;
 VAR_3->alloc_addr = FUNC_0(VAR_2->dev, VAR_3->alloc_size,
            &VAR_3->dma_addr, VAR_1);
 if (!VAR_3->alloc_addr)
  return -VAR_0;
 VAR_3->align_addr = VAR_3->alloc_addr;
 return 0;
}
