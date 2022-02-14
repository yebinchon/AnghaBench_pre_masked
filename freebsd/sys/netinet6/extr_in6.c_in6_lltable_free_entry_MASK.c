
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lltable {struct ifnet* llt_ifp; } ;
struct llentry {int la_flags; } ;
struct ifnet {int dummy; } ;


 int FUNC_0 (struct ifnet*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int FUNC_2 (struct llentry*) ;
 int FUNC_3 (struct llentry*) ;
 int FUNC_4 (struct lltable*,struct llentry*) ;

__attribute__((used)) static void
FUNC_5(struct lltable *VAR_1, struct llentry *VAR_2)
{
 struct ifnet *VAR_3;

 FUNC_2(VAR_2);
 FUNC_1(VAR_1 != ((void*)0), ("lltable is NULL"));


 if ((VAR_2->la_flags & VAR_0) != 0) {

  VAR_3 = VAR_1->llt_ifp;
  FUNC_0(VAR_3);
  FUNC_4(VAR_1, VAR_2);
 }

 FUNC_3(VAR_2);
}
