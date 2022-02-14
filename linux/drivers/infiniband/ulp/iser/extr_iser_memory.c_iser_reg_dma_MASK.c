
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct TYPE_4__ {int length; int addr; int lkey; } ;
struct iser_mem_reg {TYPE_2__ sge; scalar_t__ rkey; } ;
struct iser_device {TYPE_1__* pd; } ;
struct iser_data_buf {struct scatterlist* sg; } ;
struct TYPE_3__ {int flags; scalar_t__ unsafe_global_rkey; int local_dma_lkey; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,scalar_t__,int ,int ) ;
 int FUNC_1 (struct scatterlist*) ;
 int FUNC_2 (struct scatterlist*) ;

__attribute__((used)) static int
FUNC_3(struct iser_device *VAR_1, struct iser_data_buf *VAR_2,
      struct iser_mem_reg *VAR_3)
{
 struct scatterlist *VAR_4 = VAR_2->sg;

 VAR_3->sge.lkey = VAR_1->pd->local_dma_lkey;





 if (VAR_1->pd->flags & VAR_0)
  VAR_3->rkey = VAR_1->pd->unsafe_global_rkey;
 else
  VAR_3->rkey = 0;
 VAR_3->sge.addr = FUNC_1(&VAR_4[0]);
 VAR_3->sge.length = FUNC_2(&VAR_4[0]);

 FUNC_0("Single DMA entry: lkey=0x%x, rkey=0x%x, addr=0x%llx,"
   " length=0x%x\n", VAR_3->sge.lkey, VAR_3->rkey,
   VAR_3->sge.addr, VAR_3->sge.length);

 return 0;
}
