
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct device {int dummy; } ;
struct arm_dma_free_args {void* cpu_addr; int want_vaddr; struct page* page; int size; struct device* dev; } ;
struct arm_dma_buffer {TYPE_1__* allocator; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int (* free ) (struct arm_dma_free_args*) ;} ;


 unsigned long VAR_0 ;
 int FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (int,char*,void*) ;
 struct arm_dma_buffer* FUNC_2 (void*) ;
 int FUNC_3 (struct device*,int ) ;
 int FUNC_4 (struct arm_dma_buffer*) ;
 struct page* FUNC_5 (int ) ;
 int FUNC_6 (struct arm_dma_free_args*) ;

__attribute__((used)) static void FUNC_7(struct device *VAR_1, size_t VAR_2, void *VAR_3,
      dma_addr_t VAR_4, unsigned long VAR_5,
      bool VAR_6)
{
 struct page *VAR_7 = FUNC_5(FUNC_3(VAR_1, VAR_4));
 struct arm_dma_buffer *VAR_8;
 struct arm_dma_free_args VAR_9 = {
  .dev = VAR_1,
  .size = FUNC_0(VAR_2),
  .cpu_addr = VAR_3,
  .page = VAR_7,
  .want_vaddr = ((VAR_5 & VAR_0) == 0),
 };

 VAR_8 = FUNC_2(VAR_3);
 if (FUNC_1(!VAR_8, "Freeing invalid buffer %p\n", VAR_3))
  return;

 VAR_8->allocator->free(&VAR_9);
 FUNC_4(VAR_8);
}
