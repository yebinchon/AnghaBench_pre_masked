
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct aoetgt {int minbcnt; struct aoeif* ifs; struct aoedev* d; } ;
struct aoeif {int bcnt; struct net_device* nd; } ;
struct aoedev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct aoedev*) ;

__attribute__((used)) static void
FUNC_3(struct aoetgt *VAR_1, struct net_device *VAR_2, int VAR_3)
{
 struct aoedev *VAR_4;
 struct aoeif *VAR_5, *VAR_6;
 int VAR_7;

 VAR_4 = VAR_1->d;
 VAR_7 = VAR_3;
 VAR_5 = VAR_1->ifs;
 VAR_6 = VAR_5 + VAR_0;
 for (; VAR_5 < VAR_6; VAR_5++) {
  if (VAR_5->nd == ((void*)0))
   break;
  if (VAR_5->nd == VAR_2) {
   VAR_5->bcnt = VAR_3;
   VAR_2 = ((void*)0);
  } else if (VAR_7 > VAR_5->bcnt)
   VAR_7 = VAR_5->bcnt;
 }
 if (VAR_2) {
  if (VAR_5 == VAR_6) {
   FUNC_1("aoe: device setifbcnt failure; too many interfaces.\n");
   return;
  }
  FUNC_0(VAR_2);
  VAR_5->nd = VAR_2;
  VAR_5->bcnt = VAR_3;
 }
 VAR_1->minbcnt = VAR_7;
 FUNC_2(VAR_4);
}
