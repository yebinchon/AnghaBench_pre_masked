
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ioatdma_chan {int alloc_order; scalar_t__ reg_base; TYPE_1__* ioat_dma; int cleanup_lock; int prep_lock; int state; scalar_t__ tail; scalar_t__ issued; scalar_t__ head; struct ioat_ring_ent** ring; scalar_t__ completion_dma; int completion; } ;
struct ioat_ring_ent {int dummy; } ;
struct dma_chan {int dummy; } ;
struct TYPE_2__ {scalar_t__ version; int completion_pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,scalar_t__*) ;
 struct ioat_ring_ent** FUNC_2 (struct dma_chan*,int,int ) ;
 int FUNC_3 (struct ioatdma_chan*) ;
 int FUNC_4 (struct dma_chan*) ;
 int FUNC_5 (struct ioatdma_chan*) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct ioatdma_chan*) ;
 struct ioatdma_chan* FUNC_13 (struct dma_chan*) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int ,scalar_t__) ;
 int FUNC_16 (int,scalar_t__) ;
 int FUNC_17 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_18(struct dma_chan *VAR_21)
{
 struct ioatdma_chan *VAR_22 = FUNC_13(VAR_21);
 struct ioat_ring_ent **VAR_23;
 u64 VAR_24;
 int VAR_25;
 int VAR_26 = 0;
 u32 VAR_27;


 if (VAR_22->ring)
  return 1 << VAR_22->alloc_order;


 FUNC_17(VAR_6, VAR_22->reg_base + VAR_5);



 VAR_22->completion =
  FUNC_1(VAR_22->ioat_dma->completion_pool,
    VAR_2, &VAR_22->completion_dma);
 if (!VAR_22->completion)
  return -VAR_1;

 FUNC_16(((u64)VAR_22->completion_dma) & 0x00000000FFFFFFFF,
        VAR_22->reg_base + VAR_4);
 FUNC_16(((u64)VAR_22->completion_dma) >> 32,
        VAR_22->reg_base + VAR_3);

 VAR_25 = VAR_18;
 VAR_23 = FUNC_2(VAR_21, VAR_25, VAR_2);
 if (!VAR_23)
  return -VAR_1;

 FUNC_10(&VAR_22->cleanup_lock);
 FUNC_10(&VAR_22->prep_lock);
 VAR_22->ring = VAR_23;
 VAR_22->head = 0;
 VAR_22->issued = 0;
 VAR_22->tail = 0;
 VAR_22->alloc_order = VAR_25;
 FUNC_9(VAR_19, &VAR_22->state);
 FUNC_11(&VAR_22->prep_lock);
 FUNC_11(&VAR_22->cleanup_lock);


 if (VAR_22->ioat_dma->version >= VAR_20) {
  u32 VAR_28;

  VAR_28 = VAR_11 |
   VAR_9 |
   VAR_10;
  FUNC_16(VAR_28, VAR_22->reg_base +
    VAR_8);

  VAR_28 = VAR_15 |
     VAR_13 |
     VAR_14;
  FUNC_16(VAR_28, VAR_22->reg_base +
    VAR_12);


  FUNC_15(VAR_16,
         VAR_22->reg_base +
         VAR_17);
 }

 FUNC_5(VAR_22);


 do {
  FUNC_14(1);
  VAR_24 = FUNC_3(VAR_22);
 } while (VAR_26++ < 20 && !FUNC_6(VAR_24) && !FUNC_7(VAR_24));

 if (FUNC_6(VAR_24) || FUNC_7(VAR_24))
  return 1 << VAR_22->alloc_order;

 VAR_27 = FUNC_8(VAR_22->reg_base + VAR_7);

 FUNC_0(FUNC_12(VAR_22),
   "failed to start channel chanerr: %#x\n", VAR_27);
 FUNC_4(VAR_21);
 return -VAR_0;
}
