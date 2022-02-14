
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ioatdma_device {scalar_t__ version; int completion_pool; } ;
struct ioatdma_chan {int alloc_order; int desc_chunks; scalar_t__ dmacount; scalar_t__ completion_dma; scalar_t__ last_completion; int cleanup_lock; int prep_lock; int completion; int * ring; TYPE_1__* descs; scalar_t__ tail; scalar_t__ head; scalar_t__ reg_base; struct ioatdma_device* ioat_dma; } ;
struct ioat_ring_ent {int dummy; } ;
struct dma_chan {int dummy; } ;
struct TYPE_2__ {scalar_t__ hw; int * virt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int const) ;
 int FUNC_2 (int ,int ,int *,scalar_t__) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (struct ioatdma_chan*,struct ioat_ring_ent*) ;
 int FUNC_5 (struct ioat_ring_ent*,struct dma_chan*) ;
 struct ioat_ring_ent* FUNC_6 (struct ioatdma_chan*,scalar_t__) ;
 int FUNC_7 (struct ioatdma_chan*) ;
 int FUNC_8 (struct ioatdma_chan*) ;
 int FUNC_9 (struct ioatdma_chan*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct ioatdma_chan*) ;
 struct ioatdma_chan* FUNC_14 (struct dma_chan*) ;
 int FUNC_15 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_16(struct dma_chan *VAR_4)
{
 struct ioatdma_chan *VAR_5 = FUNC_14(VAR_4);
 struct ioatdma_device *VAR_6 = VAR_5->ioat_dma;
 struct ioat_ring_ent *VAR_7;
 const int VAR_8 = 1 << VAR_5->alloc_order;
 int VAR_9;
 int VAR_10;




 if (!VAR_5->ring)
  return;

 FUNC_9(VAR_5);
 FUNC_7(VAR_5);


 if (VAR_6->version >= VAR_2)
  FUNC_15(VAR_0,
   VAR_5->reg_base + VAR_1);

 FUNC_11(&VAR_5->cleanup_lock);
 FUNC_11(&VAR_5->prep_lock);
 VAR_9 = FUNC_8(VAR_5);
 FUNC_0(FUNC_13(VAR_5), "freeing %d idle descriptors\n", VAR_9);
 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
  VAR_7 = FUNC_6(VAR_5, VAR_5->head + VAR_10);
  FUNC_5(VAR_7, VAR_4);
 }

 if (VAR_9 < VAR_8)
  FUNC_1(FUNC_13(VAR_5), "Freeing %d in use descriptors!\n",
   VAR_8 - VAR_9);

 for (VAR_10 = 0; VAR_10 < VAR_8 - VAR_9; VAR_10++) {
  VAR_7 = FUNC_6(VAR_5, VAR_5->tail + VAR_10);
  FUNC_4(VAR_5, VAR_7);
  FUNC_5(VAR_7, VAR_4);
 }

 for (VAR_10 = 0; VAR_10 < VAR_5->desc_chunks; VAR_10++) {
  FUNC_2(FUNC_13(VAR_5), VAR_3,
      VAR_5->descs[VAR_10].virt,
      VAR_5->descs[VAR_10].hw);
  VAR_5->descs[VAR_10].virt = ((void*)0);
  VAR_5->descs[VAR_10].hw = 0;
 }
 VAR_5->desc_chunks = 0;

 FUNC_10(VAR_5->ring);
 VAR_5->ring = ((void*)0);
 VAR_5->alloc_order = 0;
 FUNC_3(VAR_6->completion_pool, VAR_5->completion,
        VAR_5->completion_dma);
 FUNC_12(&VAR_5->prep_lock);
 FUNC_12(&VAR_5->cleanup_lock);

 VAR_5->last_completion = 0;
 VAR_5->completion_dma = 0;
 VAR_5->dmacount = 0;
}
