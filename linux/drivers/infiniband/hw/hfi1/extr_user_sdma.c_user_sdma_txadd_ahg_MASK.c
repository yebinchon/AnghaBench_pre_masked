
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_6__ {int * pbc; } ;
struct user_sdma_txreq {int txreq; TYPE_1__ hdr; } ;
struct TYPE_7__ {int * pbc; } ;
struct user_sdma_request {int ahg_idx; TYPE_3__ hdr; struct hfi1_user_sdma_pkt_q* pq; } ;
struct hfi1_user_sdma_pkt_q {int dd; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct user_sdma_request*,TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (TYPE_3__,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,TYPE_3__*,int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,int *,TYPE_1__*,int) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int *,int ,int ,int ,int ,int *,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_11(struct user_sdma_request *VAR_2,
          struct user_sdma_txreq *VAR_3,
          u32 VAR_4)
{
 int VAR_5;
 u16 VAR_6 = FUNC_5(VAR_2->hdr.pbc[0]);
 u32 VAR_7 = FUNC_4(VAR_2->hdr, FUNC_7(VAR_4));
 struct hfi1_user_sdma_pkt_q *VAR_8 = VAR_2->pq;
 FUNC_6(&VAR_3->hdr, &VAR_2->hdr, sizeof(VAR_3->hdr));
 if (FUNC_1(VAR_6) != VAR_7) {
  VAR_6 = (VAR_6 & 0xf000) | FUNC_0(VAR_7);
  VAR_3->hdr.pbc[0] = FUNC_3(VAR_6);
 }
 VAR_5 = FUNC_2(VAR_2, &VAR_3->hdr, VAR_7, VAR_4);
 if (VAR_5)
  return VAR_5;
 VAR_5 = FUNC_10(&VAR_3->txreq, VAR_0,
         sizeof(VAR_3->hdr) + VAR_4, VAR_2->ahg_idx,
         0, ((void*)0), 0, VAR_1);
 if (VAR_5)
  return VAR_5;
 VAR_5 = FUNC_8(VAR_8->dd, &VAR_3->txreq, &VAR_3->hdr, sizeof(VAR_3->hdr));
 if (VAR_5)
  FUNC_9(VAR_8->dd, &VAR_3->txreq);
 return VAR_5;
}
