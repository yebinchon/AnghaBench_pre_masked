
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user ;
struct lev_hints_increment_user_object_rating_char {int type; int object_id; int user_id; } ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,int,int ,int,int) ;

int FUNC_2 (struct lev_hints_increment_user_object_rating_char *VAR_1) {
  user *VAR_2 = FUNC_0 (VAR_1->user_id);
  if (VAR_2 != ((void*)0)) {
    return FUNC_1 (VAR_2, VAR_1->type & 0xff, VAR_1->object_id, (VAR_1->type & 0xff00) >> 8, (VAR_1->type - VAR_0) >> 16);
  }

  return 0;
}
