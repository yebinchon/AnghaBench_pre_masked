
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cq; } ;
struct sdp_sock {TYPE_1__ rx_ring; } ;


 int FUNC_0 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

void
FUNC_1(struct sdp_sock *VAR_2)
{
 if (VAR_0 <= 0 || VAR_1 <= 0)
  return;
 FUNC_0(VAR_2->rx_ring.cq, VAR_0, VAR_1);
}
