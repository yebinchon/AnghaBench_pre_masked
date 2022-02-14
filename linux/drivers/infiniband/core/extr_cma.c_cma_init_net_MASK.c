
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct cma_pernet {int ib_ps; int ipoib_ps; int udp_ps; int tcp_ps; } ;


 struct cma_pernet* FUNC_0 (struct net*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct net *VAR_0)
{
 struct cma_pernet *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->tcp_ps);
 FUNC_1(&VAR_1->udp_ps);
 FUNC_1(&VAR_1->ipoib_ps);
 FUNC_1(&VAR_1->ib_ps);

 return 0;
}
