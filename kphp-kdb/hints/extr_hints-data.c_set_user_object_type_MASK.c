
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user ;
struct lev_hints_set_user_object_type {int type; int object_id; int user_id; } ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,int,int ,int) ;

int FUNC_2 (struct lev_hints_set_user_object_type *VAR_0) {
  user *VAR_1 = FUNC_0 (VAR_0->user_id);
  if (VAR_1 != ((void*)0)) {
    return FUNC_1 (VAR_1, (VAR_0->type >> 8) & 255, VAR_0->object_id, VAR_0->type & 255);
  }

  return 0;
}
