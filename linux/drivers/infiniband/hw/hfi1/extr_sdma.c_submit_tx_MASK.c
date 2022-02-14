
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef size_t u16 ;
struct sdma_txreq {int num_desc; size_t next_descq_idx; scalar_t__ sn; struct sdma_desc* descp; } ;
struct sdma_engine {size_t descq_tail; size_t sdma_mask; size_t tx_tail; int desc_avail; struct sdma_txreq** tx_ring; int tail_sn; TYPE_1__* descq; } ;
struct sdma_desc {int * qw; } ;
struct TYPE_2__ {void** qw; } ;


 int VAR_0 ;
 int FUNC_0 (struct sdma_txreq*) ;
 int FUNC_1 (struct sdma_engine*,int ) ;
 int FUNC_2 (struct sdma_txreq*) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct sdma_engine*,int ,int ,size_t,TYPE_1__*) ;
 int FUNC_5 (struct sdma_engine*,scalar_t__) ;

__attribute__((used)) static inline u16 FUNC_6(struct sdma_engine *VAR_1, struct sdma_txreq *VAR_2)
{
 int VAR_3;
 u16 VAR_4;
 struct sdma_desc *VAR_5 = VAR_2->descp;
 u8 VAR_6 = 0, VAR_7 = FUNC_2(VAR_2);

 VAR_4 = VAR_1->descq_tail & VAR_1->sdma_mask;
 VAR_1->descq[VAR_4].qw[0] = FUNC_3(VAR_5->qw[0]);
 VAR_1->descq[VAR_4].qw[1] = FUNC_3(FUNC_1(VAR_1, VAR_5->qw[1]));
 FUNC_4(VAR_1, VAR_5->qw[0], VAR_5->qw[1],
       VAR_4, &VAR_1->descq[VAR_4]);
 VAR_4 = ++VAR_1->descq_tail & VAR_1->sdma_mask;
 VAR_5++;
 if (VAR_7 > VAR_0)
  VAR_6 = VAR_7 >> 1;
 for (VAR_3 = 1; VAR_3 < VAR_2->num_desc; VAR_3++, VAR_5++) {
  u64 VAR_8;

  VAR_1->descq[VAR_4].qw[0] = FUNC_3(VAR_5->qw[0]);
  if (VAR_6) {

   VAR_8 = VAR_5->qw[1];
   VAR_6--;
  } else {

   VAR_8 = FUNC_1(VAR_1, VAR_5->qw[1]);
  }
  VAR_1->descq[VAR_4].qw[1] = FUNC_3(VAR_8);
  FUNC_4(VAR_1, VAR_5->qw[0], VAR_8,
        VAR_4, &VAR_1->descq[VAR_4]);
  VAR_4 = ++VAR_1->descq_tail & VAR_1->sdma_mask;
 }
 VAR_2->next_descq_idx = VAR_4;





 VAR_1->tx_ring[VAR_1->tx_tail++ & VAR_1->sdma_mask] = VAR_2;
 VAR_1->desc_avail -= VAR_2->num_desc;
 return VAR_4;
}
