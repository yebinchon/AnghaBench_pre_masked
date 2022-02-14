
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int destroyed_lock; scalar_t__ destroyed; int * buffer; } ;
struct sdp_sock {TYPE_1__ rx_ring; } ;


 int FUNC_0 (int *,char*) ;

void
FUNC_1(struct sdp_sock *VAR_0)
{
 VAR_0->rx_ring.buffer = ((void*)0);
 VAR_0->rx_ring.destroyed = 0;
 FUNC_0(&VAR_0->rx_ring.destroyed_lock, "sdp rx lock");
}
