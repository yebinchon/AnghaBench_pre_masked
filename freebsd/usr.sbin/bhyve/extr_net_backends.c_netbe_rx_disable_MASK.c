
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_backend {void (* recv_disable ) (struct net_backend*) ;} ;


 void FUNC_0 (struct net_backend*) ;

void
FUNC_1(struct net_backend *VAR_0)
{

 return VAR_0->recv_disable(VAR_0);
}
