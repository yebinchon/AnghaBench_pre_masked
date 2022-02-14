
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arm_dma_free_args {int want_vaddr; int size; int cpu_addr; int page; int dev; } ;


 int FUNC_0 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct arm_dma_free_args *VAR_0)
{
 FUNC_0(VAR_0->dev, VAR_0->page, VAR_0->cpu_addr,
          VAR_0->size, VAR_0->want_vaddr);
}
