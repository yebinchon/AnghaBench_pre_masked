
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int current_photo_id; } ;
typedef TYPE_1__ user ;
typedef int data ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int *,int,int,int) ;
 int * FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;

int FUNC_8 (user *VAR_1, int VAR_2, int VAR_3) {

  if (!FUNC_2 (VAR_2)) {
    return 0;
  }

  if (VAR_0) {
    int VAR_4 = VAR_1->current_photo_id;

    VAR_1->current_photo_id += VAR_3;


    return VAR_4;
  }

  FUNC_1 (FUNC_7 (VAR_1));

  int VAR_5 = VAR_1->current_photo_id;

  if (VAR_2 < 0) {
    FUNC_4 (VAR_1, VAR_2);
  }

  data *VAR_6 = FUNC_6 (VAR_1, VAR_2);
  if (VAR_6 == ((void*)0) || FUNC_3 (VAR_6) + VAR_3 > FUNC_0 (VAR_2)) {
    VAR_1->current_photo_id += VAR_3;

    return 0;
  }

  int VAR_7 = FUNC_5 (VAR_1, VAR_6, VAR_2, VAR_3, VAR_5);
  FUNC_1 (VAR_7 == VAR_3);

  VAR_1->current_photo_id += VAR_3;

  return VAR_5;
}
