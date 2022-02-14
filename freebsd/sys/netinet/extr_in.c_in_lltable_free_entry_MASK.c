
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lltable {int llt_ifp; } ;
struct llentry {int la_flags; } ;


 int FUNC_0 (int ,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int FUNC_3 (struct llentry*) ;
 int VAR_1 ;
 size_t FUNC_4 (struct llentry*) ;
 int FUNC_5 (struct lltable*,struct llentry*) ;

__attribute__((used)) static void
FUNC_6(struct lltable *VAR_2, struct llentry *VAR_3)
{
 size_t VAR_4;

 FUNC_3(VAR_3);
 FUNC_2(VAR_2 != ((void*)0), ("lltable is NULL"));


 if ((VAR_3->la_flags & VAR_0) != 0) {
  FUNC_1(VAR_2->llt_ifp);
  FUNC_5(VAR_2, VAR_3);
 }


 VAR_4 = FUNC_4(VAR_3);
 FUNC_0(VAR_1, VAR_4);
}
