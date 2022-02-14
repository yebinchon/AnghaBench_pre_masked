
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct sdma_txreq {int next_descq_idx; } ;
struct sdma_engine {int descq_head; int sdma_mask; int idle_mask; int last_status; int descq_tail; int tx_head; int ** tx_ring; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct sdma_engine*,struct sdma_txreq*,int ) ;
 struct sdma_txreq* FUNC_3 (struct sdma_engine*) ;
 scalar_t__ FUNC_4 (struct sdma_engine*,int ) ;
 int FUNC_5 (struct sdma_engine*,int ) ;
 int FUNC_6 (struct sdma_engine*) ;
 int FUNC_7 (struct sdma_engine*) ;
 int FUNC_8 (struct sdma_engine*,int,int,struct sdma_txreq*) ;

__attribute__((used)) static void FUNC_9(struct sdma_engine *VAR_2, u64 VAR_3)
{
 struct sdma_txreq *VAR_4 = ((void*)0);
 int VAR_5 = 0;
 u16 VAR_6, VAR_7;
 int VAR_8 = 0;

 VAR_6 = FUNC_7(VAR_2);







retry:
 VAR_4 = FUNC_3(VAR_2);
 VAR_7 = VAR_2->descq_head & VAR_2->sdma_mask;
 FUNC_8(VAR_2, VAR_6, VAR_7, VAR_4);
 while (VAR_7 != VAR_6) {

  VAR_7 = ++VAR_2->descq_head & VAR_2->sdma_mask;


  if (VAR_4 && VAR_4->next_descq_idx == VAR_7) {

   VAR_2->tx_ring[VAR_2->tx_head++ & VAR_2->sdma_mask] = ((void*)0);
   FUNC_2(VAR_2, VAR_4, VAR_1);

   VAR_4 = FUNC_3(VAR_2);
  }
  FUNC_8(VAR_2, VAR_6, VAR_7, VAR_4);
  VAR_5++;
 }
 if ((VAR_3 & VAR_2->idle_mask) && !VAR_8) {
  u16 VAR_9;

  VAR_9 = FUNC_0(VAR_2->descq_tail) & VAR_2->sdma_mask;
  if (VAR_9 != VAR_6) {
   VAR_6 = (u16)FUNC_4(VAR_2, FUNC_1(VAR_0));
   VAR_8 = 1;
   goto retry;
  }
 }

 VAR_2->last_status = VAR_3;
 if (VAR_5)
  FUNC_5(VAR_2, FUNC_6(VAR_2));
}
