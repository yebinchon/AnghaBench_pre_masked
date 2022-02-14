
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hisi_acc_sgl_pool {int count; int sgl_size; scalar_t__ sgl; scalar_t__ sgl_dma; } ;
typedef void hisi_acc_hw_sgl ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;

struct hisi_acc_hw_sgl *FUNC_1(struct hisi_acc_sgl_pool *VAR_1, u32 VAR_2,
        dma_addr_t *VAR_3)
{
 if (!VAR_1 || !VAR_3 || VAR_2 >= VAR_1->count || !VAR_1->sgl)
  return FUNC_0(-VAR_0);

 *VAR_3 = VAR_1->sgl_dma + VAR_1->sgl_size * VAR_2;
 return (void *)VAR_1->sgl + VAR_1->sgl_size * VAR_2;
}
