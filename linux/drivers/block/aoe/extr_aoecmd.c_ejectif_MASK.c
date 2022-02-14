
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
struct net_device {int dummy; } ;
struct aoetgt {struct aoeif* ifs; } ;
struct aoeif {struct net_device* nd; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct aoeif*,struct aoeif*,int) ;

__attribute__((used)) static void
FUNC_2(struct aoetgt *VAR_1, struct aoeif *VAR_2)
{
 struct aoeif *VAR_3;
 struct net_device *VAR_4;
 ulong VAR_5;

 VAR_4 = VAR_2->nd;
 VAR_3 = VAR_1->ifs + VAR_0 - 1;
 VAR_5 = (VAR_3 - VAR_2) * sizeof *VAR_2;
 FUNC_1(VAR_2, VAR_2+1, VAR_5);
 VAR_3->nd = ((void*)0);
 FUNC_0(VAR_4);
}
