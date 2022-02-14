
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct creq_register_mr_resp {int dummy; } ;
struct cmdq_register_mr {int log2_pg_size_lvl; int access; void* mr_size; int key; void* va; int log2_pbl_pg_size; void* pbl; } ;
struct bnxt_qplib_res {TYPE_2__* pdev; struct bnxt_qplib_rcfw* rcfw; } ;
struct bnxt_qplib_rcfw {int dummy; } ;
struct TYPE_8__ {int max_elements; scalar_t__ level; TYPE_1__* pbl; scalar_t__ pbl_ptr; } ;
struct bnxt_qplib_mrw {int flags; TYPE_3__ hwq; int total_size; int lkey; int va; } ;
typedef int dma_addr_t ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {int * pg_map_arr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 size_t VAR_11 ;
 scalar_t__ VAR_12 ;
 size_t FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 int VAR_13 ;
 int FUNC_2 (struct cmdq_register_mr,int ,int) ;
 int VAR_14 ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*,int *,int*,scalar_t__,int ,scalar_t__,int ) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_5 (struct bnxt_qplib_rcfw*,void*,void*,int *,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 void* FUNC_8 (int ) ;
 int FUNC_9 (int *,char*,...) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int) ;

int FUNC_12(struct bnxt_qplib_res *VAR_15, struct bnxt_qplib_mrw *VAR_16,
        u64 *VAR_17, int VAR_18, bool VAR_19, u32 VAR_20)
{
 struct bnxt_qplib_rcfw *VAR_21 = VAR_15->rcfw;
 struct cmdq_register_mr VAR_22;
 struct creq_register_mr_resp VAR_23;
 u16 VAR_24 = 0, VAR_25;
 int VAR_26, VAR_27, VAR_28, VAR_29;
 dma_addr_t **VAR_30;
 u32 VAR_31;

 if (VAR_18) {



  VAR_26 = FUNC_11(VAR_18);
  VAR_27 = VAR_26 >> VAR_8;
  if (!VAR_27)
   VAR_27++;

  if (VAR_27 > VAR_7) {
   FUNC_9(&VAR_15->pdev->dev,
    "SP: Reg MR pages requested (0x%x) exceeded max (0x%x)\n",
    VAR_27, VAR_7);
   return -VAR_5;
  }

  if (VAR_16->hwq.max_elements)
   FUNC_4(VAR_15->pdev, &VAR_16->hwq);

  VAR_16->hwq.max_elements = VAR_27;

  VAR_29 = FUNC_3(VAR_15->pdev, &VAR_16->hwq, ((void*)0),
            &VAR_16->hwq.max_elements,
            VAR_10, 0, VAR_10,
            VAR_6);
  if (VAR_29) {
   FUNC_9(&VAR_15->pdev->dev,
    "SP: Reg MR memory allocation failed\n");
   return -VAR_5;
  }

  VAR_30 = (dma_addr_t **)VAR_16->hwq.pbl_ptr;
  for (VAR_28 = 0; VAR_28 < VAR_18; VAR_28++)
   VAR_30[FUNC_1(VAR_28)][FUNC_0(VAR_28)] =
    (VAR_17[VAR_28] & VAR_9) | VAR_13;
 }

 FUNC_2(VAR_22, VAR_14, VAR_24);


 if (VAR_16->hwq.level == VAR_12) {

  VAR_25 = 0;
  VAR_22.pbl = 0;
  VAR_31 = VAR_10;
 } else {
  VAR_25 = VAR_16->hwq.level + 1;
  VAR_22.pbl = FUNC_8(VAR_16->hwq.pbl[VAR_11].pg_map_arr[0]);
 }
 VAR_31 = VAR_20 ? VAR_20 : VAR_10;
 VAR_22.log2_pg_size_lvl = (VAR_25 << VAR_4) |
          ((FUNC_10(VAR_31) <<
     VAR_3) &
    VAR_2);
 VAR_22.log2_pbl_pg_size = FUNC_6(((FUNC_10(VAR_10) <<
     VAR_1) &
    VAR_0));
 VAR_22.access = (VAR_16->flags & 0xFFFF);
 VAR_22.va = FUNC_8(VAR_16->va);
 VAR_22.key = FUNC_7(VAR_16->lkey);
 VAR_22.mr_size = FUNC_8(VAR_16->total_size);

 VAR_29 = FUNC_5(VAR_21, (void *)&VAR_22,
       (void *)&VAR_23, ((void*)0), VAR_19);
 if (VAR_29)
  goto fail;

 return 0;

fail:
 if (VAR_16->hwq.max_elements)
  FUNC_4(VAR_15->pdev, &VAR_16->hwq);
 return VAR_29;
}
