
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct aoetgt {struct aoeif* ifs; } ;
struct aoeif {struct net_device* nd; } ;


 int VAR_0 ;

__attribute__((used)) static struct aoeif *
FUNC_0(struct aoetgt *VAR_1, struct net_device *VAR_2)
{
 struct aoeif *VAR_3, *VAR_4;

 VAR_3 = VAR_1->ifs;
 VAR_4 = VAR_3 + VAR_0;
 for (; VAR_3 < VAR_4; VAR_3++)
  if (VAR_3->nd == VAR_2)
   return VAR_3;
 return ((void*)0);
}
