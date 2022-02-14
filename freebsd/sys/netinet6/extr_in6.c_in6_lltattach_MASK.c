
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lltable {int llt_mark_used; int llt_match_prefix; int llt_free_entry; int llt_fill_sa_entry; int llt_hash; int llt_dump_entry; int llt_delete_entry; int llt_alloc_entry; int llt_lookup; struct ifnet* llt_ifp; int llt_af; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct lltable* FUNC_0 (int ) ;
 int FUNC_1 (struct lltable*) ;

__attribute__((used)) static struct lltable *
FUNC_2(struct ifnet *VAR_11)
{
 struct lltable *VAR_12;

 VAR_12 = FUNC_0(VAR_1);
 VAR_12->llt_af = VAR_0;
 VAR_12->llt_ifp = VAR_11;

 VAR_12->llt_lookup = VAR_8;
 VAR_12->llt_alloc_entry = VAR_2;
 VAR_12->llt_delete_entry = VAR_3;
 VAR_12->llt_dump_entry = VAR_4;
 VAR_12->llt_hash = VAR_7;
 VAR_12->llt_fill_sa_entry = VAR_5;
 VAR_12->llt_free_entry = VAR_6;
 VAR_12->llt_match_prefix = VAR_10;
 VAR_12->llt_mark_used = VAR_9;
  FUNC_1(VAR_12);

 return (VAR_12);
}
