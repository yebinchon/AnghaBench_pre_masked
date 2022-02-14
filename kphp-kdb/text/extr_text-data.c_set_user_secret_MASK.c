
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int secret; } ;
typedef TYPE_1__ user_t ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int ,char const*,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (char const*) ;

int FUNC_4 (int VAR_0, const char *VAR_1) {
  user_t *VAR_2 = FUNC_0 (VAR_0);
  if (!VAR_2) {
    return 0;
  }

  if (!VAR_1) {
    FUNC_2 (VAR_2->secret, 0, 8);
    return 1;
  }

  if (FUNC_3 (VAR_1) != 8) {
    return 0;
  }

  FUNC_1 (VAR_2->secret, VAR_1, 8);
  return 8;
}
