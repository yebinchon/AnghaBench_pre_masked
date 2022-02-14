
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_news_comment {int group; int owner; int place; int item; int type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct lev_news_comment* FUNC_0 (scalar_t__,int,int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (struct lev_news_comment*) ;
 int FUNC_3 (int,char*,int ,int) ;

int FUNC_4 (int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7) {
  if (!VAR_0 || !FUNC_1 (VAR_2, VAR_5, VAR_6)) {
    return -1;
  }

  struct lev_news_comment *VAR_8 = FUNC_0 (VAR_1 + VAR_2, 24, VAR_3);
  VAR_8->group = VAR_4;
  VAR_8->owner = VAR_5;
  VAR_8->place = VAR_6;
  VAR_8->item = VAR_7;

  FUNC_3 (2, "created news comment type %08x, place_id=%d\n", VAR_8->type, VAR_8->place);

  return FUNC_2 (VAR_8);
}
