
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int online_tree; } ;
typedef TYPE_1__ user_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_1__*,int,int ,int) ;

int FUNC_4 (int VAR_3, int VAR_4, int *VAR_5) {
  user_t *VAR_6;
  int VAR_7, VAR_8 = VAR_3 * VAR_0, VAR_9 = 0;

  if (VAR_4 < 0 || VAR_4 > VAR_1 || VAR_3 <= 0) {
    return -1;
  }
  if (!VAR_4) {
    return 0;
  }

  for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
    VAR_6 = FUNC_1 (VAR_5[VAR_7]);
    if (!VAR_6) {
      continue;
    }
    VAR_9++;
    VAR_6->online_tree = FUNC_2 (VAR_6->online_tree, VAR_8);
    if (VAR_2) {

      FUNC_3 (VAR_6, -VAR_3, 0, 9);
    }
    FUNC_0 (VAR_6);
  }

  return VAR_9;
}
