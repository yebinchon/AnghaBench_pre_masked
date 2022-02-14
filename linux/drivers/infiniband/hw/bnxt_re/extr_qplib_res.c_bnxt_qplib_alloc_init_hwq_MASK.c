
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct scatterlist {int dummy; } ;
struct pci_dev {int dummy; } ;
struct bnxt_qplib_sg_info {int npages; int nmap; struct scatterlist* sglist; } ;
struct bnxt_qplib_hwq {size_t level; int is_user; int max_elements; int element_size; int* pbl_dma_ptr; TYPE_1__* pbl; scalar_t__ pbl_ptr; scalar_t__ cons; scalar_t__ prod; int lock; struct pci_dev* pdev; } ;
typedef enum bnxt_qplib_hwq_type { ____Placeholder_bnxt_qplib_hwq_type } bnxt_qplib_hwq_type ;
typedef int dma_addr_t ;
struct TYPE_2__ {int* pg_map_arr; int pg_count; scalar_t__ pg_arr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (struct pci_dev*,TYPE_1__*,struct scatterlist*,int,int,int) ;
 int FUNC_3 (struct pci_dev*,struct bnxt_qplib_hwq*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct pci_dev *VAR_15, struct bnxt_qplib_hwq *VAR_16,
         struct bnxt_qplib_sg_info *VAR_17,
         u32 *VAR_18, u32 VAR_19, u32 VAR_20,
         u32 VAR_21, enum bnxt_qplib_hwq_type VAR_22)
{
 u32 VAR_23, VAR_24, VAR_25, VAR_26, VAR_27 = 0, VAR_28 = 0;
 dma_addr_t *VAR_29, **VAR_30;
 struct scatterlist *VAR_31 = ((void*)0);
 int VAR_32, VAR_33;

 VAR_16->level = VAR_10;

 VAR_25 = FUNC_4(*VAR_18);
 if (VAR_20) {
  VAR_28 = FUNC_4(VAR_20);
  VAR_27 = (VAR_25 * VAR_28) / VAR_21;
  if ((VAR_25 * VAR_28) % VAR_21)
   VAR_27++;
 }
 VAR_26 = FUNC_4(VAR_19);

 if (VAR_17)
  VAR_31 = VAR_17->sglist;

 if (!VAR_31) {
  VAR_16->is_user = 0;
  VAR_23 = (VAR_25 * VAR_26) / VAR_21 + VAR_27;
  if ((VAR_25 * VAR_26) % VAR_21)
   VAR_23++;
  if (!VAR_23)
   return -VAR_0;
  VAR_24 = 0;
 } else {
  VAR_16->is_user = 1;
  VAR_23 = VAR_17->npages;
  VAR_24 = VAR_17->nmap;
 }


 if (VAR_31 && (VAR_23 == VAR_4))
  VAR_33 = FUNC_2(VAR_15, &VAR_16->pbl[VAR_7], VAR_31,
     VAR_23, VAR_24, VAR_21);
 else
  VAR_33 = FUNC_2(VAR_15, &VAR_16->pbl[VAR_7], ((void*)0),
     1, 0, VAR_21);
 if (VAR_33)
  goto fail;

 VAR_16->level = VAR_7;

 if (VAR_23 > VAR_4) {
  if (VAR_23 > VAR_5) {

   VAR_33 = FUNC_2(VAR_15, &VAR_16->pbl[VAR_8], ((void*)0),
      VAR_6,
      0, VAR_21);
   if (VAR_33)
    goto fail;

   VAR_30 =
    (dma_addr_t **)VAR_16->pbl[VAR_7].pg_arr;
   VAR_29 = VAR_16->pbl[VAR_8].pg_map_arr;
   for (VAR_32 = 0; VAR_32 < VAR_16->pbl[VAR_8].pg_count; VAR_32++)
    VAR_30[FUNC_1(VAR_32)][FUNC_0(VAR_32)] =
     VAR_29[VAR_32] | VAR_11;
   VAR_16->level = VAR_8;

   VAR_33 = FUNC_2(VAR_15, &VAR_16->pbl[VAR_9], VAR_31,
      VAR_23, VAR_24, VAR_21);
   if (VAR_33)
    goto fail;


   VAR_30 =
    (dma_addr_t **)VAR_16->pbl[VAR_8].pg_arr;
   VAR_29 = VAR_16->pbl[VAR_9].pg_map_arr;
   for (VAR_32 = 0; VAR_32 < VAR_16->pbl[VAR_9].pg_count; VAR_32++) {
    VAR_30[FUNC_1(VAR_32)][FUNC_0(VAR_32)] =
     VAR_29[VAR_32] | VAR_14;
   }
   if (VAR_22 == VAR_3) {

    VAR_32 = VAR_16->pbl[VAR_9].pg_count;
    VAR_30[FUNC_1(VAR_32 - 1)][FUNC_0(VAR_32 - 1)] |=
          VAR_12;
    if (VAR_32 > 1)
     VAR_30[FUNC_1(VAR_32 - 2)]
          [FUNC_0(VAR_32 - 2)] |=
          VAR_13;
   }
   VAR_16->level = VAR_9;
  } else {
   u32 VAR_34 = VAR_22 == VAR_2 ? 0 :
      VAR_14;


   VAR_33 = FUNC_2(VAR_15, &VAR_16->pbl[VAR_8], VAR_31,
      VAR_23, VAR_24, VAR_21);
   if (VAR_33)
    goto fail;

   VAR_30 =
    (dma_addr_t **)VAR_16->pbl[VAR_7].pg_arr;
   VAR_29 = VAR_16->pbl[VAR_8].pg_map_arr;
   for (VAR_32 = 0; VAR_32 < VAR_16->pbl[VAR_8].pg_count; VAR_32++) {
    VAR_30[FUNC_1(VAR_32)][FUNC_0(VAR_32)] =
     VAR_29[VAR_32] | VAR_34;
   }
   if (VAR_22 == VAR_3) {

    VAR_32 = VAR_16->pbl[VAR_8].pg_count;
    VAR_30[FUNC_1(VAR_32 - 1)][FUNC_0(VAR_32 - 1)] |=
          VAR_12;
    if (VAR_32 > 1)
     VAR_30[FUNC_1(VAR_32 - 2)]
          [FUNC_0(VAR_32 - 2)] |=
          VAR_13;
   }
   VAR_16->level = VAR_8;
  }
 }
 VAR_16->pdev = VAR_15;
 FUNC_5(&VAR_16->lock);
 VAR_16->prod = 0;
 VAR_16->cons = 0;
 *VAR_18 = VAR_16->max_elements = VAR_25;
 VAR_16->element_size = VAR_26;


 VAR_16->pbl_ptr = VAR_16->pbl[VAR_16->level].pg_arr;
 VAR_16->pbl_dma_ptr = VAR_16->pbl[VAR_16->level].pg_map_arr;

 return 0;

fail:
 FUNC_3(VAR_15, VAR_16);
 return -VAR_1;
}
