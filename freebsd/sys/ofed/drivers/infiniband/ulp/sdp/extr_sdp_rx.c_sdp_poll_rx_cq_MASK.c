
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct ib_cq* cq; } ;
struct sdp_sock {TYPE_1__ rx_ring; } ;
struct mbuf {int dummy; } ;
struct ib_wc {int wr_id; } ;
struct ib_cq {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ib_cq*,int,struct ib_wc*) ;
 int FUNC_2 (struct sdp_sock*) ;
 int FUNC_3 (struct sdp_sock*,struct mbuf*) ;
 struct mbuf* FUNC_4 (struct sdp_sock*,struct ib_wc*) ;

__attribute__((used)) static int
FUNC_5(struct sdp_sock *VAR_2)
{
 struct ib_cq *VAR_3 = VAR_2->rx_ring.cq;
 struct ib_wc VAR_4[VAR_0];
 int VAR_5, VAR_6;
 int VAR_7 = 0;
 struct mbuf *VAR_8;

 do {
  VAR_5 = FUNC_1(VAR_3, VAR_0, VAR_4);
  for (VAR_6 = 0; VAR_6 < VAR_5; ++VAR_6) {
   struct ib_wc *VAR_9 = &VAR_4[VAR_6];

   FUNC_0(!(VAR_9->wr_id & VAR_1));
   VAR_8 = FUNC_4(VAR_2, VAR_9);
   if (!VAR_8)
    continue;

   FUNC_3(VAR_2, VAR_8);
   VAR_7++;
  }
 } while (VAR_5 == VAR_0);

 if (VAR_7)
  FUNC_2(VAR_2);

 return VAR_7;
}
