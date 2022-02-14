
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ user ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int * FUNC_2 (TYPE_1__*,int,int) ;
 long long FUNC_3 (TYPE_1__*,int) ;

int FUNC_4 (user *VAR_0, int VAR_1, int VAR_2, int VAR_3) {
  int VAR_4 = 0;
  if (FUNC_0(VAR_0->flags) == 1) {
    VAR_4 = FUNC_1 (*FUNC_2 (VAR_0, VAR_1, VAR_3), *FUNC_2 (VAR_0, VAR_2, VAR_3));
  }
  if (VAR_4 != 0) {
    return VAR_4;
  }


  long long VAR_5 = FUNC_3 (VAR_0, VAR_1);
  long long VAR_6 = FUNC_3 (VAR_0, VAR_2);

  if (VAR_5 < VAR_6) {
    return 1;
  } else if (VAR_5 > VAR_6) {
    return -1;
  }

  return 0;
}
