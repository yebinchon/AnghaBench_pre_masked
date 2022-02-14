
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint ;
typedef int u8 ;
typedef unsigned int u64 ;
typedef size_t u32 ;
typedef int u16 ;
struct sdma_txreq {int dummy; } ;
struct TYPE_4__ {int comp; int kref; } ;
struct sdma_engine {unsigned int this_idx; int descq_cnt; int sdma_shift; int sdma_mask; unsigned int int_mask; unsigned int progress_mask; unsigned int idle_mask; int imask; int ahg_bits; scalar_t__ head_phys; void* head_dma; int tx_ring; void* descq; scalar_t__ descq_phys; int err_progress_check_timer; scalar_t__ progress_check_head; int flush_worker; int err_halt_worker; int sdma_sw_clean_up_task; int sdma_hw_clean_up_task; int tail_csr; int dmawait; int flushlist; TYPE_2__ state; int waitlock; int flushlist_lock; int senddmactrl_lock; int head_lock; int tail_lock; int desc_avail; struct hfi1_pportdata* ppd; struct hfi1_devdata* dd; } ;
struct rhashtable {int dummy; } ;
struct hfi1_pportdata {int vls_operational; } ;
struct hfi1_devdata {size_t sdma_heads_size; size_t num_sdma; struct rhashtable* sdma_rht; int flags; scalar_t__ sdma_heads_phys; void* sdma_heads_dma; struct sdma_engine* per_sdma; void* sdma_pad_dma; scalar_t__ sdma_pad_phys; TYPE_1__* pcidev; int node; int default_desc1; int sdma_unfreeze_count; int sdma_unfreeze_wq; struct hfi1_pportdata* pport; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 size_t VAR_4 ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int *,int ) ;
 size_t FUNC_7 (struct hfi1_devdata*) ;
 size_t FUNC_8 (struct hfi1_devdata*) ;
 int FUNC_9 (struct hfi1_devdata*,char*) ;
 int FUNC_10 (struct hfi1_devdata*,char*,size_t,...) ;
 void* FUNC_11 (int *,int,scalar_t__*,int ) ;
 int FUNC_12 (struct hfi1_devdata*,unsigned int,int ) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct sdma_engine*,size_t,scalar_t__) ;
 int FUNC_16 (int *) ;
 struct sdma_engine* FUNC_17 (size_t,int,int ,int ) ;
 int FUNC_18 (struct rhashtable*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ,int ,int ) ;
 struct rhashtable* FUNC_21 (int,int ) ;
 size_t VAR_14 ;
 scalar_t__ FUNC_22 (struct hfi1_devdata*,scalar_t__) ;
 size_t VAR_15 ;
 int FUNC_23 (struct rhashtable*,int *) ;
 int FUNC_24 (struct hfi1_devdata*,size_t) ;
 int FUNC_25 (struct sdma_engine*) ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_26 () ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_27 (struct hfi1_devdata*,int,int ,int *) ;
 int VAR_22 ;
 int FUNC_28 (struct sdma_engine*,int ) ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_29 (int *) ;
 int FUNC_30 (int *) ;
 int FUNC_31 (int *,int ,unsigned long) ;
 int FUNC_32 (int *,int ,int ) ;

int FUNC_33(struct hfi1_devdata *VAR_25, u8 VAR_26)
{
 unsigned VAR_27;
 struct sdma_engine *VAR_28;
 struct rhashtable *VAR_29;
 u16 VAR_30;
 void *VAR_31;
 struct hfi1_pportdata *VAR_32 = VAR_25->pport + VAR_26;
 u32 VAR_33;
 uint VAR_34 = VAR_21;
 size_t VAR_35 = FUNC_7(VAR_25);
 int VAR_36 = -VAR_0;

 if (!FUNC_1(VAR_5)) {
  FUNC_0(VAR_6);
  return 0;
 }
 if (VAR_14 &&

     VAR_14 <= FUNC_7(VAR_25) &&

     VAR_14 >= VAR_15)
  VAR_35 = VAR_14;

 FUNC_10(VAR_25, "SDMA mod_num_sdma: %u\n", VAR_14);
 FUNC_10(VAR_25, "SDMA chip_sdma_engines: %u\n", FUNC_7(VAR_25));
 FUNC_10(VAR_25, "SDMA chip_sdma_mem_size: %u\n",
      FUNC_8(VAR_25));

 VAR_33 =
  FUNC_8(VAR_25) / (VAR_35 * VAR_7);


 FUNC_16(&VAR_25->sdma_unfreeze_wq);
 FUNC_6(&VAR_25->sdma_unfreeze_count, 0);

 VAR_30 = FUNC_26();
 FUNC_10(VAR_25, "SDMA engines %zu descq_cnt %u\n",
      VAR_35, VAR_30);


 VAR_25->per_sdma = FUNC_17(VAR_35, sizeof(*VAR_25->per_sdma),
        VAR_1, VAR_25->node);
 if (!VAR_25->per_sdma)
  return VAR_36;

 VAR_34 = FUNC_22(VAR_25, VAR_34);
 if (VAR_34)
  VAR_25->default_desc1 =
   VAR_8;
 else
  VAR_25->default_desc1 =
   VAR_9;

 if (!VAR_16)
  VAR_16 = VAR_10;


 for (VAR_27 = 0; VAR_27 < VAR_35; ++VAR_27) {
  VAR_28 = &VAR_25->per_sdma[VAR_27];
  VAR_28->dd = VAR_25;
  VAR_28->ppd = VAR_32;
  VAR_28->this_idx = VAR_27;
  VAR_28->descq_cnt = VAR_30;
  VAR_28->desc_avail = FUNC_25(VAR_28);
  VAR_28->sdma_shift = FUNC_13(VAR_30);
  VAR_28->sdma_mask = (1 << VAR_28->sdma_shift) - 1;


  VAR_28->int_mask = (u64)1 << (0 * VAR_13 +
        VAR_27);
  VAR_28->progress_mask = (u64)1 << (1 * VAR_13 +
      VAR_27);
  VAR_28->idle_mask = (u64)1 << (2 * VAR_13 +
         VAR_27);

  VAR_28->imask = VAR_28->int_mask | VAR_28->progress_mask |
        VAR_28->idle_mask;

  FUNC_30(&VAR_28->tail_lock);
  FUNC_29(&VAR_28->head_lock);
  FUNC_30(&VAR_28->senddmactrl_lock);
  FUNC_30(&VAR_28->flushlist_lock);
  FUNC_29(&VAR_28->waitlock);

  VAR_28->ahg_bits = 0xfffffffe00000000ULL;

  FUNC_28(VAR_28, VAR_23);


  FUNC_19(&VAR_28->state.kref);
  FUNC_14(&VAR_28->state.comp);

  FUNC_2(&VAR_28->flushlist);
  FUNC_2(&VAR_28->dmawait);

  VAR_28->tail_csr =
   FUNC_12(VAR_25, VAR_27, FUNC_4(VAR_12));

  FUNC_31(&VAR_28->sdma_hw_clean_up_task, VAR_20,
        (unsigned long)VAR_28);

  FUNC_31(&VAR_28->sdma_sw_clean_up_task, VAR_24,
        (unsigned long)VAR_28);
  FUNC_3(&VAR_28->err_halt_worker, VAR_17);
  FUNC_3(&VAR_28->flush_worker, VAR_19);

  VAR_28->progress_check_head = 0;

  FUNC_32(&VAR_28->err_progress_check_timer,
       VAR_18, 0);

  VAR_28->descq = FUNC_11(&VAR_25->pcidev->dev,
      VAR_30 * sizeof(u64[2]),
      &VAR_28->descq_phys, VAR_1);
  if (!VAR_28->descq)
   goto bail;
  VAR_28->tx_ring =
   FUNC_20(FUNC_5(VAR_30,
       sizeof(struct sdma_txreq *)),
          VAR_1, VAR_25->node);
  if (!VAR_28->tx_ring)
   goto bail;
 }

 VAR_25->sdma_heads_size = VAR_4 * VAR_35;

 VAR_25->sdma_heads_dma = FUNC_11(&VAR_25->pcidev->dev,
      VAR_25->sdma_heads_size,
      &VAR_25->sdma_heads_phys,
      VAR_1);
 if (!VAR_25->sdma_heads_dma) {
  FUNC_9(VAR_25, "failed to allocate SendDMA head memory\n");
  goto bail;
 }


 VAR_25->sdma_pad_dma = FUNC_11(&VAR_25->pcidev->dev, VAR_11,
           &VAR_25->sdma_pad_phys, VAR_1);
 if (!VAR_25->sdma_pad_dma) {
  FUNC_9(VAR_25, "failed to allocate SendDMA pad memory\n");
  goto bail;
 }


 VAR_31 = (void *)VAR_25->sdma_heads_dma;
 for (VAR_27 = 0; VAR_27 < VAR_35; ++VAR_27) {
  unsigned long VAR_37;

  VAR_28 = &VAR_25->per_sdma[VAR_27];

  VAR_28->head_dma = VAR_31;
  VAR_31 += VAR_4;
  VAR_37 = (unsigned long)VAR_28->head_dma -
         (unsigned long)VAR_25->sdma_heads_dma;
  VAR_28->head_phys = VAR_25->sdma_heads_phys + VAR_37;
  FUNC_15(VAR_28, VAR_33, VAR_34);
 }
 VAR_25->flags |= VAR_3;
 VAR_25->flags |= VAR_34 ? VAR_2 : 0;
 VAR_25->num_sdma = VAR_35;
 VAR_36 = FUNC_27(VAR_25, VAR_26, VAR_32->vls_operational, ((void*)0));
 if (VAR_36 < 0)
  goto bail;

 VAR_29 = FUNC_21(sizeof(*VAR_29), VAR_1);
 if (!VAR_29) {
  VAR_36 = -VAR_0;
  goto bail;
 }

 VAR_36 = FUNC_23(VAR_29, &VAR_22);
 if (VAR_36 < 0) {
  FUNC_18(VAR_29);
  goto bail;
 }

 VAR_25->sdma_rht = VAR_29;

 FUNC_10(VAR_25, "SDMA num_sdma: %u\n", VAR_25->num_sdma);
 return 0;

bail:
 FUNC_24(VAR_25, VAR_35);
 return VAR_36;
}
