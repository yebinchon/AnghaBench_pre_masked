
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct news_gather_extra {int end_date; int timestamp; int type_mask; } ;
struct gather {struct news_gather_extra* extra; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

int FUNC_1 (struct gather *VAR_2, int VAR_3) {
  struct news_gather_extra *VAR_4 = VAR_2->extra;
  FUNC_0 (VAR_1);
  FUNC_0 (VAR_4->type_mask);;
  FUNC_0 (VAR_4->timestamp);
  FUNC_0 (VAR_4->end_date);
  FUNC_0 (VAR_0);
  return 0;
}
