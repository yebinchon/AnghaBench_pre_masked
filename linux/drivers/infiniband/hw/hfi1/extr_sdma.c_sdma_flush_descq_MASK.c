
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sdma_txreq {int next_descq_idx; } ;
struct sdma_engine {int descq_head; int sdma_mask; int descq_tail; int tx_head; int ** tx_ring; } ;


 int VAR_0 ;
 int FUNC_0 (struct sdma_engine*,struct sdma_txreq*,int ) ;
 struct sdma_txreq* FUNC_1 (struct sdma_engine*) ;
 int FUNC_2 (struct sdma_engine*,int ) ;
 int FUNC_3 (struct sdma_engine*) ;
 int FUNC_4 (struct sdma_engine*,int,int,struct sdma_txreq*) ;

__attribute__((used)) static void FUNC_5(struct sdma_engine *VAR_1)
{
 u16 VAR_2, VAR_3;
 int VAR_4 = 0;
 struct sdma_txreq *VAR_5 = FUNC_1(VAR_1);






 VAR_2 = VAR_1->descq_head & VAR_1->sdma_mask;
 VAR_3 = VAR_1->descq_tail & VAR_1->sdma_mask;
 while (VAR_2 != VAR_3) {

  VAR_2 = ++VAR_1->descq_head & VAR_1->sdma_mask;

  if (VAR_5 && VAR_5->next_descq_idx == VAR_2) {

   VAR_1->tx_ring[VAR_1->tx_head++ & VAR_1->sdma_mask] = ((void*)0);
   FUNC_0(VAR_1, VAR_5, VAR_0);
   FUNC_4(VAR_1, VAR_2, VAR_3, VAR_5);
   VAR_5 = FUNC_1(VAR_1);
  }
  VAR_4++;
 }
 if (VAR_4)
  FUNC_2(VAR_1, FUNC_3(VAR_1));
}
