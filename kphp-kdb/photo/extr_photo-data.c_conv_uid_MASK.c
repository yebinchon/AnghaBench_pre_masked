
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int id; int local_id; int d; int current_album_id; int current_photo_id; } ;
typedef TYPE_2__ user ;
struct TYPE_8__ {int user_cnt; TYPE_1__* user_index; } ;
struct TYPE_6__ {int id; int current_album_id; int current_photo_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 TYPE_4__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (int *,int*) ;
 int VAR_9 ;
 TYPE_2__* VAR_10 ;
 int VAR_11 ;

user *FUNC_4 (int VAR_12) {
  if (VAR_12 == 0) {
    return ((void*)0);
  }
  if (FUNC_2 (VAR_12) % VAR_8 != VAR_7) {
    return ((void*)0);
  }
  if (VAR_6) {
    return VAR_10;
  }

  user **VAR_13 = (user **)FUNC_3 (&VAR_4, &VAR_12);
  if (*VAR_13 == (user *)&VAR_12) {
    FUNC_0 (VAR_3 + 1 < VAR_9);

    *VAR_13 = &VAR_10[++VAR_3];
    (*VAR_13)->id = VAR_12;
    (*VAR_13)->local_id = VAR_3;

    if (VAR_3 <= VAR_5.user_cnt) {
      FUNC_0 (VAR_12 == VAR_5.user_index[VAR_3].id);
      (*VAR_13)->current_photo_id = VAR_5.user_index[VAR_3].current_photo_id;
      (*VAR_13)->current_album_id = VAR_5.user_index[VAR_3].current_album_id;
    } else {
      (*VAR_13)->current_photo_id = VAR_1;
      (*VAR_13)->current_album_id = VAR_0;
    }


    if (!VAR_11) {
      FUNC_1 (&(*VAR_13)->d, &VAR_2);
    }
  }
  return *VAR_13;
}
