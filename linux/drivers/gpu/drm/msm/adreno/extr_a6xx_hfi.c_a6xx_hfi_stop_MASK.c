
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct a6xx_hfi_queue {TYPE_1__* header; } ;
struct a6xx_gmu {int dev; struct a6xx_hfi_queue* queues; } ;
struct TYPE_2__ {scalar_t__ read_index; scalar_t__ write_index; } ;


 int FUNC_0 (struct a6xx_hfi_queue*) ;
 int FUNC_1 (int ,char*,int) ;

void FUNC_2(struct a6xx_gmu *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->queues); VAR_1++) {
  struct a6xx_hfi_queue *VAR_2 = &VAR_0->queues[VAR_1];

  if (!VAR_2->header)
   continue;

  if (VAR_2->header->read_index != VAR_2->header->write_index)
   FUNC_1(VAR_0->dev, "HFI queue %d is not empty\n", VAR_1);

  VAR_2->header->read_index = 0;
  VAR_2->header->write_index = 0;
 }
}
