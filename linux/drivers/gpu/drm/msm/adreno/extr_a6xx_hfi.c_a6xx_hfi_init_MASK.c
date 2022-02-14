
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct a6xx_hfi_queue_table_header {int size; int qhdr0_offset; int qhdr_size; int num_queues; int active_queues; scalar_t__ version; } ;
struct a6xx_hfi_queue_header {int size; int qhdr0_offset; int qhdr_size; int num_queues; int active_queues; scalar_t__ version; } ;
struct a6xx_gmu_bo {int iova; struct a6xx_hfi_queue_table_header* virt; } ;
struct a6xx_gmu {int * queues; struct a6xx_gmu_bo* hfi; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct a6xx_hfi_queue_table_header*,struct a6xx_hfi_queue_table_header*,int,int) ;

void FUNC_2(struct a6xx_gmu *VAR_1)
{
 struct a6xx_gmu_bo *VAR_2 = VAR_1->hfi;
 struct a6xx_hfi_queue_table_header *VAR_3 = VAR_2->virt;
 struct a6xx_hfi_queue_header *VAR_4 = VAR_2->virt + sizeof(*VAR_3);
 u64 VAR_5;
 int VAR_6;





 VAR_6 = sizeof(*VAR_3);
 VAR_6 += (FUNC_0(VAR_1->queues) *
  sizeof(struct a6xx_hfi_queue_header));

 VAR_3->version = 0;
 VAR_3->size = VAR_6;

 VAR_3->qhdr0_offset = sizeof(*VAR_3) >> 2;
 VAR_3->qhdr_size = sizeof(struct a6xx_hfi_queue_header) >> 2;
 VAR_3->num_queues = FUNC_0(VAR_1->queues);
 VAR_3->active_queues = FUNC_0(VAR_1->queues);


 VAR_5 = VAR_0;
 FUNC_1(&VAR_1->queues[0], &VAR_4[0], VAR_2->virt + VAR_5,
  VAR_2->iova + VAR_5, 0);


 VAR_5 += VAR_0;
 FUNC_1(&VAR_1->queues[1], &VAR_4[1], VAR_2->virt + VAR_5,
  VAR_2->iova + VAR_5, 4);
}
