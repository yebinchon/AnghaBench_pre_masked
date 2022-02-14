
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdp_sock {int recv_request; int rx_ring; scalar_t__ recv_request_head; } ;
struct sdp_chrecvbuf {int size; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct sdp_sock*,int ) ;

__attribute__((used)) static void
FUNC_4(struct sdp_sock *VAR_0, struct sdp_chrecvbuf *VAR_1)
{
 if (FUNC_3(VAR_0, FUNC_0(VAR_1->size)) == 0)
  VAR_0->recv_request_head = FUNC_1(VAR_0->rx_ring) + 1;
 else
  VAR_0->recv_request_head = FUNC_2(VAR_0->rx_ring);
 VAR_0->recv_request = 1;
}
