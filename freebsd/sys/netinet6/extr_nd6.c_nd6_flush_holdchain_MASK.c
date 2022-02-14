
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int dummy; } ;
struct mbuf {struct mbuf* m_nextpkt; } ;
struct ifnet {int dummy; } ;


 int FUNC_0 (struct ifnet*,struct ifnet*,struct mbuf*,struct sockaddr_in6*,int *) ;

int
FUNC_1(struct ifnet *VAR_0, struct mbuf *VAR_1,
    struct sockaddr_in6 *VAR_2)
{
 struct mbuf *VAR_3, *VAR_4;
 int VAR_5 = 0;

 VAR_4 = VAR_1;

 while (VAR_4) {
  VAR_3 = VAR_4;
  VAR_4 = VAR_4->m_nextpkt;
  VAR_5 = FUNC_0(VAR_0, VAR_0, VAR_3, VAR_2, ((void*)0));
 }





 return (VAR_5);
}
