
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ user ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int VAR_1 ;

int FUNC_5 (int VAR_2) {
  int VAR_3 = FUNC_4 (VAR_2);
  if (VAR_3 == -1) {
    return -3;
  }

  int VAR_4;
  if (VAR_3 == 0) {
    VAR_4 = -1;
  } else {
    user *VAR_5 = FUNC_2 (VAR_2);
    FUNC_1 (VAR_5);

    VAR_4 = FUNC_0(VAR_5->flags);
  }

  if (VAR_4 == -1 && FUNC_3() > VAR_1 * VAR_0) {
    VAR_4 = -2;
  }

  return VAR_4;
}
