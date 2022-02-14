
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int cq; } ;
struct sdp_sock {int socket; TYPE_1__ tx_ring; } ;
struct ib_wc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sdp_sock*) ;
 int FUNC_1 (int ,int,struct ib_wc*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct sdp_sock*,int ) ;
 int FUNC_4 (int ,int *,char*,int ) ;
 int FUNC_5 (struct sdp_sock*,struct ib_wc*) ;
 int VAR_2 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct sdp_sock*) ;

__attribute__((used)) static int
FUNC_8(struct sdp_sock *VAR_3)
{
 struct ib_wc VAR_4[VAR_1];
 int VAR_5, VAR_6;
 int VAR_7 = 0;

 FUNC_0(VAR_3);

 if (!VAR_3->tx_ring.cq) {
  FUNC_2(VAR_3->socket, "tx irq on destroyed tx_cq\n");
  return 0;
 }

 do {
  VAR_5 = FUNC_1(VAR_3->tx_ring.cq, VAR_1, VAR_4);
  for (VAR_6 = 0; VAR_6 < VAR_5; ++VAR_6) {
   FUNC_5(VAR_3, VAR_4 + VAR_6);
   VAR_7++;
  }
 } while (VAR_5 == VAR_1);

 if (VAR_7) {
  FUNC_3(VAR_3, VAR_0);
  FUNC_4(VAR_2, ((void*)0), "Waking sendmsg. inflight=%d",
    (u32) FUNC_7(VAR_3));
  FUNC_6(VAR_3->socket);
 }

 return VAR_7;
}
