
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct pci_dev {int dummy; } ;
struct TYPE_4__ {int max_elements; int level; TYPE_1__* pbl; scalar_t__ pbl_ptr; } ;
struct bnxt_qplib_ctx {int qpc_count; int mrw_count; int srqc_count; int cq_count; int* tqm_count; int tqm_pde_level; int stats; TYPE_2__ tim_tbl; TYPE_2__* tqm_tbl; TYPE_2__ tqm_pde; TYPE_2__ cq_tbl; TYPE_2__ srqc_tbl; TYPE_2__ mrw_tbl; TYPE_2__ qpc_tbl; } ;
typedef int __le64 ;
struct TYPE_3__ {int pg_count; int* pg_map_arr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 size_t FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 int VAR_8 ;
 int FUNC_2 (struct pci_dev*,TYPE_2__*,int *,int*,int,int ,int ,int ) ;
 int FUNC_3 (struct pci_dev*,int *) ;
 int FUNC_4 (struct pci_dev*,struct bnxt_qplib_ctx*) ;
 int FUNC_5 (int) ;

int FUNC_6(struct pci_dev *VAR_9,
    struct bnxt_qplib_ctx *VAR_10,
    bool VAR_11, bool VAR_12)
{
 int VAR_13, VAR_14, VAR_15, VAR_16 = 0;
 int VAR_17 = -1;
 __le64 **VAR_18;

 if (VAR_11 || VAR_12)
  goto stats_alloc;


 VAR_10->qpc_tbl.max_elements = VAR_10->qpc_count;
 VAR_16 = FUNC_2(VAR_9, &VAR_10->qpc_tbl, ((void*)0),
           &VAR_10->qpc_tbl.max_elements,
           VAR_2, 0,
           VAR_7, VAR_4);
 if (VAR_16)
  goto fail;


 VAR_10->mrw_tbl.max_elements = VAR_10->mrw_count;
 VAR_16 = FUNC_2(VAR_9, &VAR_10->mrw_tbl, ((void*)0),
           &VAR_10->mrw_tbl.max_elements,
           VAR_1, 0,
           VAR_7, VAR_4);
 if (VAR_16)
  goto fail;


 VAR_10->srqc_tbl.max_elements = VAR_10->srqc_count;
 VAR_16 = FUNC_2(VAR_9, &VAR_10->srqc_tbl, ((void*)0),
           &VAR_10->srqc_tbl.max_elements,
           VAR_3, 0,
           VAR_7, VAR_4);
 if (VAR_16)
  goto fail;


 VAR_10->cq_tbl.max_elements = VAR_10->cq_count;
 VAR_16 = FUNC_2(VAR_9, &VAR_10->cq_tbl, ((void*)0),
           &VAR_10->cq_tbl.max_elements,
           VAR_0, 0,
           VAR_7, VAR_4);
 if (VAR_16)
  goto fail;


 VAR_10->tqm_pde.max_elements = 512;
 VAR_16 = FUNC_2(VAR_9, &VAR_10->tqm_pde, ((void*)0),
           &VAR_10->tqm_pde.max_elements, sizeof(u64),
           0, VAR_7, VAR_4);
 if (VAR_16)
  goto fail;

 for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
  if (!VAR_10->tqm_count[VAR_13])
   continue;
  VAR_10->tqm_tbl[VAR_13].max_elements = VAR_10->qpc_count *
            VAR_10->tqm_count[VAR_13];
  VAR_16 = FUNC_2(VAR_9, &VAR_10->tqm_tbl[VAR_13], ((void*)0),
            &VAR_10->tqm_tbl[VAR_13].max_elements, 1,
            0, VAR_7, VAR_4);
  if (VAR_16)
   goto fail;
 }
 VAR_18 = (__le64 **)VAR_10->tqm_pde.pbl_ptr;
 for (VAR_13 = 0, VAR_14 = 0; VAR_13 < VAR_6;
      VAR_13++, VAR_14 += VAR_5) {
  if (!VAR_10->tqm_tbl[VAR_13].max_elements)
   continue;
  if (VAR_17 == -1)
   VAR_17 = VAR_13;
  switch (VAR_10->tqm_tbl[VAR_13].level) {
  case 128:
   for (VAR_15 = 0; VAR_15 < VAR_10->tqm_tbl[VAR_13].pbl[129].pg_count;
        VAR_15++)
    VAR_18[FUNC_1(VAR_14 + VAR_15)][FUNC_0(VAR_14 + VAR_15)] =
      FUNC_5(
        VAR_10->tqm_tbl[VAR_13].pbl[129].pg_map_arr[VAR_15]
        | VAR_8);
   break;
  case 129:
  case 130:
  default:
   VAR_18[FUNC_1(VAR_14)][FUNC_0(VAR_14)] = FUNC_5(
    VAR_10->tqm_tbl[VAR_13].pbl[130].pg_map_arr[0] |
    VAR_8);
   break;
  }
 }
 if (VAR_17 == -1)
  VAR_17 = 0;
 VAR_10->tqm_pde_level = VAR_10->tqm_tbl[VAR_17].level == 128 ?
        128 : VAR_10->tqm_tbl[VAR_17].level + 1;


 VAR_10->tim_tbl.max_elements = VAR_10->qpc_count * 16;
 VAR_16 = FUNC_2(VAR_9, &VAR_10->tim_tbl, ((void*)0),
           &VAR_10->tim_tbl.max_elements, 1,
           0, VAR_7, VAR_4);
 if (VAR_16)
  goto fail;

stats_alloc:

 VAR_16 = FUNC_3(VAR_9, &VAR_10->stats);
 if (VAR_16)
  goto fail;

 return 0;

fail:
 FUNC_4(VAR_9, VAR_10);
 return VAR_16;
}
