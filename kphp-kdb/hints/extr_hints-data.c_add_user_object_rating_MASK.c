
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user ;
struct lev_hints_add_user_object_rating {int type; int text_len; int object_id; int object_type; int text; int user_id; } ;
typedef int rating ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,int ,...) ;
 int FUNC_3 (int *,int ,int ,int ,int) ;

int FUNC_4 (struct lev_hints_add_user_object_rating *VAR_2) {
  int VAR_3 = VAR_2->type - VAR_0;
  int VAR_4 = VAR_2->text_len - sizeof (float) * VAR_3;

  if (!FUNC_0 (VAR_4)) {
    return 0;
  }

  user *VAR_5 = FUNC_1 (VAR_2->user_id);
  if (VAR_5 != ((void*)0)) {
    int VAR_6, VAR_7;
    float *VAR_8;



    VAR_6 = FUNC_2 (VAR_5, VAR_2->object_type, VAR_2->object_id);

    VAR_8 = (float *)(VAR_2->text + 1 + VAR_4);

    for (VAR_7 = 0; VAR_7 < VAR_1 && VAR_7 < VAR_3; VAR_7++) {
      VAR_6 &= FUNC_3 (VAR_5, VAR_2->object_type, VAR_2->object_id, (rating)VAR_8[VAR_7], VAR_7);
    }

    return VAR_6;
  }

  return 0;
}
