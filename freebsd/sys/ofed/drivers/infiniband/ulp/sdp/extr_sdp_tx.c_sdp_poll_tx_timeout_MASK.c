
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int timer; } ;
struct sdp_sock {TYPE_1__ tx_ring; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sdp_sock*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0)
{
 struct sdp_sock *VAR_1 = (struct sdp_sock *)VAR_0;

 if (!FUNC_0(&VAR_1->tx_ring.timer))
  return;
 FUNC_1(&VAR_1->tx_ring.timer);
 FUNC_2(VAR_1);
}
