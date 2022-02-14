
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_14__ {int * rcfw; int dpi_tbl; } ;
struct bnxt_re_dev {int num_msix; TYPE_5__ qplib_res; int dpi_privileged; TYPE_6__* nq; int chip_ctx; TYPE_4__* msix_entries; TYPE_1__* en_dev; int dev_attr; int netdev; int is_virtfn; int rcfw; } ;
typedef int dma_addr_t ;
struct TYPE_12__ {size_t level; TYPE_2__* pbl; scalar_t__ max_elements; } ;
struct TYPE_15__ {int ring_id; TYPE_3__ hwq; TYPE_5__* res; } ;
struct TYPE_13__ {int ring_idx; } ;
struct TYPE_11__ {int pg_count; int * pg_map_arr; } ;
struct TYPE_10__ {int pdev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int *,int *,struct bnxt_re_dev*) ;
 int FUNC_1 (int ,TYPE_6__*) ;
 int FUNC_2 (TYPE_5__*,int ,int ,int *) ;
 int FUNC_3 (TYPE_5__*,int *,int *) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct bnxt_re_dev*,int *,int,int ,scalar_t__,int ,int *) ;
 int FUNC_9 (struct bnxt_re_dev*,int ,int ) ;
 int FUNC_10 (int ,char*,int,...) ;
 int FUNC_11 (struct bnxt_re_dev*) ;

__attribute__((used)) static int FUNC_12(struct bnxt_re_dev *VAR_4)
{
 int VAR_5 = 0;
 dma_addr_t *VAR_6;
 int VAR_7 = 0, VAR_8;
 int VAR_9;
 u8 VAR_10;


 VAR_4->qplib_res.rcfw = &VAR_4->rcfw;
 VAR_7 = FUNC_6(&VAR_4->rcfw, &VAR_4->dev_attr,
         VAR_4->is_virtfn);
 if (VAR_7)
  goto fail;

 VAR_7 = FUNC_2(&VAR_4->qplib_res, VAR_4->en_dev->pdev,
      VAR_4->netdev, &VAR_4->dev_attr);
 if (VAR_7)
  goto fail;

 VAR_7 = FUNC_0(&VAR_4->qplib_res.dpi_tbl,
      &VAR_4->dpi_privileged,
      VAR_4);
 if (VAR_7)
  goto dealloc_res;

 for (VAR_8 = 0; VAR_8 < VAR_4->num_msix - 1; VAR_8++) {
  VAR_4->nq[VAR_8].res = &VAR_4->qplib_res;
  VAR_4->nq[VAR_8].hwq.max_elements = VAR_1 +
   VAR_2 + 2;
  VAR_7 = FUNC_1(VAR_4->en_dev->pdev, &VAR_4->nq[VAR_8]);
  if (VAR_7) {
   FUNC_10(FUNC_11(VAR_4), "Alloc Failed NQ%d rc:%#x",
    VAR_8, VAR_7);
   goto free_nq;
  }
  VAR_10 = FUNC_7(&VAR_4->chip_ctx);
  VAR_6 = VAR_4->nq[VAR_8].hwq.pbl[VAR_3].pg_map_arr;
  VAR_9 = VAR_4->nq[VAR_8].hwq.pbl[VAR_4->nq[VAR_8].hwq.level].pg_count;
  VAR_7 = FUNC_8(VAR_4, VAR_6, VAR_9, VAR_10,
         VAR_0 - 1,
         VAR_4->msix_entries[VAR_8 + 1].ring_idx,
         &VAR_4->nq[VAR_8].ring_id);
  if (VAR_7) {
   FUNC_10(FUNC_11(VAR_4),
    "Failed to allocate NQ fw id with rc = 0x%x",
    VAR_7);
   FUNC_4(&VAR_4->nq[VAR_8]);
   goto free_nq;
  }
  VAR_5++;
 }
 return 0;
free_nq:
 for (VAR_8 = VAR_5; VAR_8 >= 0; VAR_8--) {
  VAR_10 = FUNC_7(&VAR_4->chip_ctx);
  FUNC_9(VAR_4, VAR_4->nq[VAR_8].ring_id, VAR_10);
  FUNC_4(&VAR_4->nq[VAR_8]);
 }
 FUNC_3(&VAR_4->qplib_res,
          &VAR_4->qplib_res.dpi_tbl,
          &VAR_4->dpi_privileged);
dealloc_res:
 FUNC_5(&VAR_4->qplib_res);

fail:
 VAR_4->qplib_res.rcfw = ((void*)0);
 return VAR_7;
}
