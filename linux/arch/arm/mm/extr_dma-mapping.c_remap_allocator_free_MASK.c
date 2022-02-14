
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arm_dma_free_args {int size; int page; int cpu_addr; scalar_t__ want_vaddr; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct arm_dma_free_args *VAR_0)
{
 if (VAR_0->want_vaddr)
  FUNC_1(VAR_0->cpu_addr, VAR_0->size);

 FUNC_0(VAR_0->page, VAR_0->size);
}
