
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int prm; } ;
typedef TYPE_1__ data ;
typedef int actual_object ;


 int FUNC_0 (int ,int *,int*,int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int,int *) ;
 int VAR_0 ;

int FUNC_3 (data *VAR_1, actual_object *VAR_2, int VAR_3) {
  static int VAR_4[1000];
  int VAR_5 = FUNC_0 (VAR_0, &VAR_1->prm, VAR_4, 1000, 0);
  FUNC_1 (VAR_5 < 1000);
  if (VAR_5 > VAR_3) {
    VAR_5 = VAR_3;
  }
  int VAR_6;
  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
    FUNC_1 (FUNC_2 (VAR_1, VAR_4[VAR_6], &VAR_2[VAR_6]) > -1);
  }

  return VAR_5;
}
