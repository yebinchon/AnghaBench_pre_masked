
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int album_by_photo; } ;
typedef TYPE_1__ user ;
typedef int data ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int ) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int * FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;

int FUNC_9 (user *VAR_3, int VAR_4) {
  if (VAR_2) {
    return 1;
  }

  FUNC_0 (FUNC_8 (VAR_3));

  int VAR_5 = FUNC_6 (VAR_3, VAR_4);
  if (VAR_5 == 0) {
    return 0;
  }
  data *VAR_6 = FUNC_7 (VAR_3, VAR_5);
  if (VAR_6 == ((void*)0)) {
    return 0;
  }
  if (FUNC_2 (VAR_6, VAR_4) != 0) {
    return 0;
  }

  if (FUNC_4(VAR_6) >= VAR_1) {
    FUNC_0 (FUNC_1 (VAR_6, VAR_4) > -1);
    FUNC_5 (&VAR_3->album_by_photo, VAR_4, 0);
  } else {
    FUNC_0 (FUNC_3 (VAR_6, VAR_4, VAR_0) > -1);
  }

  return 1;
}
