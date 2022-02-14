
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * rcvif; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct label {int dummy; } ;
struct inpcb {int dummy; } ;


 int FUNC_0 (struct mbuf*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int
FUNC_2(struct inpcb *VAR_0, struct label *VAR_1,
    struct mbuf *VAR_2, struct label *VAR_3)
{

 FUNC_0(VAR_2);
 if (VAR_2->m_pkthdr.rcvif != ((void*)0))
  return (FUNC_1(VAR_2->m_pkthdr.rcvif, 0));

 return (0);
}
