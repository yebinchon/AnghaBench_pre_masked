
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xgene_dma_ring {scalar_t__ owner; TYPE_1__* pdma; int id; int buf_num; } ;
struct TYPE_2__ {scalar_t__ csr_ring; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct xgene_dma_ring*) ;

__attribute__((used)) static void FUNC_5(struct xgene_dma_ring *VAR_4)
{
 u32 VAR_5, VAR_6;

 if (VAR_4->owner == VAR_3) {

  VAR_6 = FUNC_2(VAR_4->pdma->csr_ring +
          VAR_2);
  FUNC_1(VAR_6, VAR_4->buf_num);
  FUNC_3(VAR_6, VAR_4->pdma->csr_ring +
     VAR_2);
 }


 VAR_5 = FUNC_0(VAR_4->id);
 FUNC_3(VAR_5, VAR_4->pdma->csr_ring + VAR_0);

 FUNC_3(0, VAR_4->pdma->csr_ring + VAR_1);
 FUNC_4(VAR_4);
}
