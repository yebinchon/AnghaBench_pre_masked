
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cq; } ;
struct sdp_sock {TYPE_1__ tx_ring; int socket; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int ,int *,char*) ;
 int FUNC_3 (struct sdp_sock*) ;
 int FUNC_4 (struct sdp_sock*) ;

__attribute__((used)) static inline void FUNC_5(struct sdp_sock *VAR_1)
{
 FUNC_2(VAR_1->socket, ((void*)0), "Arming TX cq");
 FUNC_1(VAR_1->socket, "Arming TX cq. credits: %d, posted: %d\n",
  FUNC_3(VAR_1), FUNC_4(VAR_1));

 FUNC_0(VAR_1->tx_ring.cq, VAR_0);
}
