
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_backend {int (* cleanup ) (struct net_backend*) ;} ;


 int FUNC_0 (struct net_backend*) ;
 int FUNC_1 (struct net_backend*) ;

void
FUNC_2(struct net_backend *VAR_0)
{

 if (VAR_0 != ((void*)0)) {
  VAR_0->cleanup(VAR_0);
  FUNC_0(VAR_0);
 }
}
