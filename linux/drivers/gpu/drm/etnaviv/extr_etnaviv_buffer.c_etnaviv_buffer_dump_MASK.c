
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct etnaviv_gpu {TYPE_1__* mmu_context; int dev; } ;
struct etnaviv_cmdbuf {int size; int* vaddr; } ;
struct TYPE_2__ {int cmdbuf_mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int*,int,int) ;
 int FUNC_1 (struct etnaviv_cmdbuf*,int *) ;
 int FUNC_2 (int ,char*,int ,int,int,int*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct etnaviv_gpu *VAR_2,
 struct etnaviv_cmdbuf *VAR_3, u32 VAR_4, u32 VAR_5)
{
 u32 VAR_6 = VAR_3->size;
 u32 *VAR_7 = VAR_3->vaddr + VAR_4;

 FUNC_0(VAR_2->dev, "virt %p phys 0x%08x free 0x%08x\n",
   VAR_7, FUNC_1(VAR_3,
   &VAR_2->mmu_context->cmdbuf_mapping) +
   VAR_4, VAR_6 - VAR_5 * 4 - VAR_4);

 FUNC_2(VAR_1, "cmd ", VAR_0, 16, 4,
   VAR_7, VAR_5 * 4, 0);
}
