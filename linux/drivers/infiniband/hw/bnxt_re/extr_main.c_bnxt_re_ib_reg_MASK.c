
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_17__ {size_t level; TYPE_1__* pbl; } ;
struct TYPE_21__ {int creq_ring_id; TYPE_2__ creq; } ;
struct TYPE_19__ {int fw_id; int dma_map; } ;
struct TYPE_22__ {TYPE_4__ stats; } ;
struct bnxt_re_dev {TYPE_6__ rcfw; int chip_ctx; TYPE_7__ qplib_ctx; TYPE_5__* en_dev; int ibdev; int flags; int active_width; int active_speed; int worker; int is_virtfn; int dev_attr; TYPE_3__* msix_entries; } ;
typedef int dma_addr_t ;
struct TYPE_20__ {int pdev; } ;
struct TYPE_18__ {int vector; int ring_idx; } ;
struct TYPE_16__ {int pg_count; int * pg_map_arr; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *,int ) ;
 size_t VAR_13 ;
 int FUNC_1 (int ,TYPE_7__*,int ,int ) ;
 int FUNC_2 (int ,TYPE_6__*,TYPE_7__*,int ) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (int ,TYPE_6__*,int,int ,int ,int *) ;
 int FUNC_5 (int ,TYPE_7__*) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_6__*,int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_6__*,TYPE_7__*,int ) ;
 int FUNC_10 (int *) ;
 int VAR_14 ;
 int FUNC_11 (struct bnxt_re_dev*) ;
 int FUNC_12 (int *,int *,int,int ) ;
 int FUNC_13 (struct bnxt_re_dev*,size_t) ;
 int FUNC_14 (struct bnxt_re_dev*) ;
 int FUNC_15 (struct bnxt_re_dev*) ;
 int FUNC_16 (struct bnxt_re_dev*) ;
 int FUNC_17 (struct bnxt_re_dev*,int *,int,int ,scalar_t__,int ,int *) ;
 int FUNC_18 (struct bnxt_re_dev*,int ,int ) ;
 int FUNC_19 (struct bnxt_re_dev*,int ,int *) ;
 int FUNC_20 (struct bnxt_re_dev*,int ) ;
 int FUNC_21 (struct bnxt_re_dev*) ;
 int FUNC_22 (struct bnxt_re_dev*) ;
 int FUNC_23 (struct bnxt_re_dev*) ;
 int FUNC_24 (struct bnxt_re_dev*) ;
 int FUNC_25 (struct bnxt_re_dev*) ;
 int FUNC_26 (struct bnxt_re_dev*) ;
 int FUNC_27 (struct bnxt_re_dev*) ;
 int VAR_15 ;
 int FUNC_28 (int ,char*) ;
 int FUNC_29 (int ,char*) ;
 int FUNC_30 (int *,int,int *,int *) ;
 int FUNC_31 (int) ;
 int FUNC_32 (char*,int) ;
 int FUNC_33 (char*) ;
 int FUNC_34 (struct bnxt_re_dev*) ;
 int FUNC_35 () ;
 int FUNC_36 () ;
 int FUNC_37 (int *,int ) ;
 int FUNC_38 (int ,int *) ;

__attribute__((used)) static int FUNC_39(struct bnxt_re_dev *VAR_16)
{
 dma_addr_t *VAR_17;
 u32 VAR_18, VAR_19;
 int VAR_20, VAR_21;
 bool VAR_22;
 u8 VAR_23;
 int VAR_24;


 FUNC_35();
 VAR_22 = 1;


 VAR_24 = FUNC_23(VAR_16);
 if (VAR_24) {
  FUNC_36();
  FUNC_32("Failed to register with netedev: %#x\n", VAR_24);
  return -VAR_11;
 }
 FUNC_38(VAR_5, &VAR_16->flags);

 VAR_24 = FUNC_26(VAR_16);
 if (VAR_24) {
  FUNC_28(FUNC_34(VAR_16), "Failed to get chip context\n");
  return -VAR_11;
 }


 FUNC_14(VAR_16);

 VAR_24 = FUNC_24(VAR_16);
 if (VAR_24) {
  FUNC_32("Failed to get MSI-X vectors: %#x\n", VAR_24);
  VAR_24 = -VAR_11;
  goto fail;
 }
 FUNC_38(VAR_2, &VAR_16->flags);

 FUNC_21(VAR_16);




 VAR_24 = FUNC_2(VAR_16->en_dev->pdev, &VAR_16->rcfw,
        &VAR_16->qplib_ctx,
        VAR_10);
 if (VAR_24) {
  FUNC_32("Failed to allocate RCFW Channel: %#x\n", VAR_24);
  goto fail;
 }
 VAR_23 = FUNC_8(&VAR_16->chip_ctx);
 VAR_17 = VAR_16->rcfw.creq.pbl[VAR_13].pg_map_arr;
 VAR_20 = VAR_16->rcfw.creq.pbl[VAR_16->rcfw.creq.level].pg_count;
 VAR_19 = VAR_16->msix_entries[VAR_1].ring_idx;
 VAR_24 = FUNC_17(VAR_16, VAR_17, VAR_20, VAR_23,
        VAR_0 - 1,
        VAR_19, &VAR_16->rcfw.creq_ring_id);
 if (VAR_24) {
  FUNC_32("Failed to allocate CREQ: %#x\n", VAR_24);
  goto free_rcfw;
 }
 VAR_18 = FUNC_13(VAR_16, VAR_1);
 VAR_21 = VAR_16->msix_entries[VAR_1].vector;
 VAR_24 = FUNC_4(VAR_16->en_dev->pdev, &VAR_16->rcfw,
         VAR_21, VAR_18, VAR_16->is_virtfn,
         &VAR_14);
 if (VAR_24) {
  FUNC_32("Failed to enable RCFW channel: %#x\n", VAR_24);
  goto free_ring;
 }

 VAR_24 = FUNC_7(&VAR_16->rcfw, &VAR_16->dev_attr,
         VAR_16->is_virtfn);
 if (VAR_24)
  goto disable_rcfw;
 if (!VAR_16->is_virtfn)
  FUNC_25(VAR_16);

 VAR_24 = FUNC_1(VAR_16->en_dev->pdev, &VAR_16->qplib_ctx, 0,
      FUNC_10(&VAR_16->chip_ctx));
 if (VAR_24) {
  FUNC_32("Failed to allocate QPLIB context: %#x\n", VAR_24);
  goto disable_rcfw;
 }
 VAR_24 = FUNC_19(VAR_16,
      VAR_16->qplib_ctx.stats.dma_map,
      &VAR_16->qplib_ctx.stats.fw_id);
 if (VAR_24) {
  FUNC_32("Failed to allocate stats context: %#x\n", VAR_24);
  goto free_ctx;
 }

 VAR_24 = FUNC_9(&VAR_16->rcfw, &VAR_16->qplib_ctx,
      VAR_16->is_virtfn);
 if (VAR_24) {
  FUNC_32("Failed to initialize RCFW: %#x\n", VAR_24);
  goto free_sctx;
 }
 FUNC_38(VAR_7, &VAR_16->flags);


 VAR_24 = FUNC_11(VAR_16);
 if (VAR_24) {
  FUNC_32("Failed to allocate resources: %#x\n", VAR_24);
  goto fail;
 }
 FUNC_38(VAR_8, &VAR_16->flags);
 VAR_24 = FUNC_16(VAR_16);
 if (VAR_24) {
  FUNC_32("Failed to initialize resources: %#x\n", VAR_24);
  goto fail;
 }

 FUNC_38(VAR_9, &VAR_16->flags);

 if (!VAR_16->is_virtfn) {
  VAR_24 = FUNC_27(VAR_16);
  if (VAR_24)
   FUNC_33("RoCE priority not yet configured\n");

  FUNC_0(&VAR_16->worker, VAR_15);
  FUNC_38(VAR_6, &VAR_16->flags);
  FUNC_37(&VAR_16->worker, FUNC_31(30000));
 }

 FUNC_36();
 VAR_22 = 0;


 VAR_24 = FUNC_22(VAR_16);
 if (VAR_24) {
  FUNC_32("Failed to register with IB: %#x\n", VAR_24);
  goto fail;
 }
 FUNC_38(VAR_3, &VAR_16->flags);
 FUNC_29(FUNC_34(VAR_16), "Device registered successfully");
 FUNC_30(&VAR_16->ibdev, 1, &VAR_16->active_speed,
    &VAR_16->active_width);
 FUNC_38(VAR_4, &VAR_16->flags);
 FUNC_12(&VAR_16->ibdev, ((void*)0), 1, VAR_12);

 return 0;
free_sctx:
 FUNC_20(VAR_16, VAR_16->qplib_ctx.stats.fw_id);
free_ctx:
 FUNC_5(VAR_16->en_dev->pdev, &VAR_16->qplib_ctx);
disable_rcfw:
 FUNC_3(&VAR_16->rcfw);
free_ring:
 VAR_23 = FUNC_8(&VAR_16->chip_ctx);
 FUNC_18(VAR_16, VAR_16->rcfw.creq_ring_id, VAR_23);
free_rcfw:
 FUNC_6(&VAR_16->rcfw);
fail:
 if (!VAR_22)
  FUNC_35();
 FUNC_15(VAR_16);
 FUNC_36();

 return VAR_24;
}
