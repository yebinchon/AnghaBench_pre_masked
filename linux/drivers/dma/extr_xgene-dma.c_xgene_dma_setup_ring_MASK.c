
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct xgene_dma_ring {int slots; int size; scalar_t__ owner; TYPE_1__* pdma; int buf_num; struct xgene_dma_desc_hw* desc_hw; int num; int id; int cfgsize; int desc_paddr; void* state; } ;
struct xgene_dma_desc_hw {int m0; } ;
struct TYPE_2__ {scalar_t__ csr_ring; } ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*,int ) ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (void*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t FUNC_4 (int ) ;
 size_t FUNC_5 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (size_t,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (void*) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (void*,int ) ;
 int VAR_6 ;
 int FUNC_12 (void*,int ) ;
 int VAR_7 ;
 int FUNC_13 (int ) ;
 size_t FUNC_14 (scalar_t__) ;
 int FUNC_15 (size_t,scalar_t__) ;
 int FUNC_16 (struct xgene_dma_ring*) ;
 int FUNC_17 (struct xgene_dma_ring*) ;

__attribute__((used)) static void FUNC_18(struct xgene_dma_ring *VAR_8)
{
 void *VAR_9 = VAR_8->state;
 u64 VAR_10 = VAR_8->desc_paddr;
 u32 VAR_11, VAR_12;

 VAR_8->slots = VAR_8->size / VAR_7;


 FUNC_16(VAR_8);


 FUNC_12(VAR_9, VAR_6);

 if (VAR_8->owner == VAR_5) {

  FUNC_7(VAR_9);
  FUNC_9(VAR_9);
  FUNC_8(VAR_9);
 }


 FUNC_10(VAR_9);
 FUNC_0(VAR_9);
 FUNC_3(VAR_9);
 FUNC_2(VAR_9, VAR_10);
 FUNC_1(VAR_9, VAR_10);
 FUNC_11(VAR_9, VAR_8->cfgsize);


 FUNC_17(VAR_8);


 FUNC_15(FUNC_5(VAR_8->id),
    VAR_8->pdma->csr_ring + VAR_1);


 FUNC_15(FUNC_4(VAR_8->num),
    VAR_8->pdma->csr_ring + VAR_2);

 if (VAR_8->owner != VAR_4)
  return;


 for (VAR_11 = 0; VAR_11 < VAR_8->slots; VAR_11++) {
  struct xgene_dma_desc_hw *VAR_13;

  VAR_13 = &VAR_8->desc_hw[VAR_11];
  VAR_13->m0 = FUNC_13(VAR_0);
 }


 VAR_12 = FUNC_14(VAR_8->pdma->csr_ring + VAR_3);
 FUNC_6(VAR_12, VAR_8->buf_num);
 FUNC_15(VAR_12, VAR_8->pdma->csr_ring + VAR_3);
}
