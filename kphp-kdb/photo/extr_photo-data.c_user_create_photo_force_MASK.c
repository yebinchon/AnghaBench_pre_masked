
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int current_photo_id; } ;
typedef TYPE_1__ user ;
typedef int data ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,int *,int,int,int) ;
 int * FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;

int FUNC_9 (user *VAR_1, int VAR_2, int VAR_3, int VAR_4) {


  if (!FUNC_3 (VAR_4) || !FUNC_2 (VAR_2) || VAR_4 + VAR_3 > VAR_1->current_photo_id) {
    return -1;
  }

  if (VAR_0) {
    return 1;
  }

  FUNC_1 (FUNC_8 (VAR_1));

  if (VAR_2 < 0) {
    FUNC_5 (VAR_1, VAR_2);
  }

  data *VAR_5 = FUNC_7 (VAR_1, VAR_2);
  if (VAR_5 == ((void*)0) || FUNC_4 (VAR_5) + VAR_3 > FUNC_0 (VAR_2)) {
    return -1;
  }

  return FUNC_6 (VAR_1, VAR_5, VAR_2, VAR_3, VAR_4);
}
