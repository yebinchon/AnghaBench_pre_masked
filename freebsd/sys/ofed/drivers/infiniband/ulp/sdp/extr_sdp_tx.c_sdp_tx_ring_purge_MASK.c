
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdp_sock {int tx_ring; } ;
struct mbuf {int dummy; } ;


 int FUNC_0 (struct mbuf*) ;
 int FUNC_1 (int ) ;
 struct mbuf* FUNC_2 (struct sdp_sock*,int ) ;
 scalar_t__ FUNC_3 (struct sdp_sock*) ;

__attribute__((used)) static
void FUNC_4(struct sdp_sock *VAR_0)
{
 while (FUNC_3(VAR_0)) {
  struct mbuf *VAR_1;
  VAR_1 = FUNC_2(VAR_0, FUNC_1(VAR_0->tx_ring));
  if (!VAR_1)
   break;
  FUNC_0(VAR_1);
 }
}
