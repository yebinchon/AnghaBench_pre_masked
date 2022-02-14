
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_ifinfo {int ii_llt; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct in_ifinfo*,int ) ;
 int FUNC_1 (struct ifnet*) ;
 int FUNC_2 (int ) ;

void
FUNC_3(struct ifnet *VAR_1, void *VAR_2)
{
 struct in_ifinfo *VAR_3 = (struct in_ifinfo *)VAR_2;

 FUNC_1(VAR_1);
 FUNC_2(VAR_3->ii_llt);
 FUNC_0(VAR_3, VAR_0);
}
