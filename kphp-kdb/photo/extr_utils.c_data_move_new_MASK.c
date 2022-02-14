
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int prm; } ;
typedef TYPE_1__ data ;


 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 int FUNC_3 (TYPE_1__*,int,int,int) ;
 int VAR_0 ;

int FUNC_4 (data *VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5) {
  if (1) {
    int VAR_6 = VAR_2 == 0 ? -1 : FUNC_0 (VAR_0, &VAR_1->prm, VAR_2 - 1);
    FUNC_1 (VAR_6 >= -1);
    FUNC_3 (VAR_1, VAR_6, VAR_4, VAR_5);
  }

  return FUNC_2 (VAR_1, VAR_2, VAR_3);
}
