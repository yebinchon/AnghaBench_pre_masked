
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int online_tree; } ;
typedef TYPE_1__ user_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;

int FUNC_6 (int VAR_3, int VAR_4) {
  user_t *VAR_5 = FUNC_3 (VAR_3);
  VAR_2 = 0;
  if (!VAR_5) {
    return FUNC_1 (VAR_3) < 0 ? -1 : 0;
  }
  VAR_1 = VAR_0;
  FUNC_0 (VAR_5);
  FUNC_2 (VAR_5->online_tree, VAR_4);
  VAR_2 = VAR_1 - VAR_0;
  if (VAR_4) {
    FUNC_5 (0, (VAR_2 >> 1) - 1);
    return VAR_2 >> 1;
  } else {
    FUNC_4 (0, VAR_2 - 1);
    return VAR_2;
  }
}
