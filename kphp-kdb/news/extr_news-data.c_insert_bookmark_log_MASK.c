
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_bookmark_insert {int owner; int place; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct lev_bookmark_insert* FUNC_0 (scalar_t__,int,int) ;

void FUNC_1 (int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6) {
  struct lev_bookmark_insert *VAR_7 = FUNC_0 ((VAR_6 ? VAR_1 : VAR_0) + VAR_3, sizeof (struct lev_bookmark_insert), VAR_2);
  VAR_7->owner = VAR_4;
  VAR_7->place = VAR_5;
}
