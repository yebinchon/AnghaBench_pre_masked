
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct net_backend {int (* get_cap ) (struct net_backend*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_backend*) ;

uint64_t
FUNC_2(struct net_backend *VAR_0)
{

 FUNC_0(VAR_0 != ((void*)0));
 return (VAR_0->get_cap(VAR_0));
}
