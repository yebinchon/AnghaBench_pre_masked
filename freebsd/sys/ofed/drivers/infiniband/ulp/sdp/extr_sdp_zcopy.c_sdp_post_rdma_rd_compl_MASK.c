
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdp_sock {int socket; } ;
struct rx_srcavail_state {int used; int reported; } ;
struct mbuf {int dummy; } ;


 struct mbuf* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct sdp_sock*,struct mbuf*) ;

int FUNC_2(struct sdp_sock *VAR_0,
  struct rx_srcavail_state *VAR_1)
{
 struct mbuf *VAR_2;
 int VAR_3 = VAR_1->used - VAR_1->reported;

 if (VAR_1->used <= VAR_1->reported)
  return 0;

 VAR_2 = FUNC_0(VAR_0->socket, VAR_3, 0);

 VAR_1->reported += VAR_3;


 FUNC_1(VAR_0, VAR_2);

 return 0;
}
