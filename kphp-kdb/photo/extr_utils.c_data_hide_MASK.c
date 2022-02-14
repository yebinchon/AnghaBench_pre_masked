
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int prm; int hidden_state; } ;
typedef TYPE_1__ data ;


 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int *,int,int) ;

int FUNC_6 (data *VAR_2, int VAR_3, int VAR_4) {
  int VAR_5 = FUNC_2 (VAR_2, VAR_3);
  if (VAR_5 < 0) {
    return -1;
  }

  int VAR_6 = FUNC_3 (VAR_2, VAR_5);
  FUNC_1 (VAR_6 >= 0);

  int VAR_7 = VAR_6 == 0 ? -1 : FUNC_0 (VAR_1, &VAR_2->prm, VAR_6 - 1);
  FUNC_4 (VAR_2, VAR_5, VAR_7);

  FUNC_5 (&VAR_2->hidden_state, VAR_3, VAR_4);

  return FUNC_0 (VAR_0, &VAR_2->prm, VAR_6);
}
