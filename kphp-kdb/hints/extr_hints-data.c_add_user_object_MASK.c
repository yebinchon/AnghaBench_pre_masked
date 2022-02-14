
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user ;
struct lev_hints_add_user_object {int object_id; int object_type; int text; int user_id; int text_len; } ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,...) ;

int FUNC_3 (struct lev_hints_add_user_object *VAR_0) {
  if (!FUNC_0 (VAR_0->text_len)) {
    return 0;
  }

  user *VAR_1 = FUNC_1 (VAR_0->user_id);
  if (VAR_1 != ((void*)0)) {



    return FUNC_2 (VAR_1, VAR_0->object_type, VAR_0->object_id);

  }

  return 0;
}
