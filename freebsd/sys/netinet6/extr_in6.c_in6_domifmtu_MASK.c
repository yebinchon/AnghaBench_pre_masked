
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_mtu; int ** if_afdata; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct ifnet*) ;

int
FUNC_1(struct ifnet *VAR_1)
{
 if (VAR_1->if_afdata[VAR_0] == ((void*)0))
  return VAR_1->if_mtu;

 return (FUNC_0(VAR_1));
}
