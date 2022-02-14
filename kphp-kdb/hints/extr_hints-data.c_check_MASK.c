
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int object_old_n; int object_table; } ;
typedef TYPE_1__ user ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;

inline void FUNC_2 (user *VAR_0, int VAR_1) {
  FUNC_0 (VAR_1 > 0);
  if (VAR_1 > VAR_0->object_old_n) {
    FUNC_0 (FUNC_1 (&VAR_0->object_table, VAR_1 - VAR_0->object_old_n));
  }
}
