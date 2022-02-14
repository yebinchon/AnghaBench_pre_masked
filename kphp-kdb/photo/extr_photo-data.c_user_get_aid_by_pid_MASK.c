
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int album_by_photo; } ;
typedef TYPE_1__ user ;
typedef int data ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,int ) ;
 int * FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5 (user *VAR_0, int VAR_1) {


  FUNC_0 (FUNC_4 (VAR_0));
  int VAR_2 = FUNC_2 (&VAR_0->album_by_photo, VAR_1, 0);



  if (VAR_2 != 0) {
    data *VAR_3 = FUNC_3 (VAR_0);
    FUNC_0 (FUNC_1 (VAR_3, VAR_2) != -1);
  }

  return VAR_2;
}
