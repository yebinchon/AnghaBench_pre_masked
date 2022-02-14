
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int data ;
struct TYPE_4__ {int deleted; } ;
typedef TYPE_1__ actual_object ;


 scalar_t__ FUNC_0 (int *,int,TYPE_1__*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;

inline int FUNC_3 (data *VAR_0, int VAR_1, const int VAR_2, actual_object *VAR_3) {
  int VAR_4 = FUNC_2 (VAR_0, VAR_1);
  if (VAR_4 < 0 || ((VAR_3->deleted = FUNC_1 (VAR_0, VAR_1)) != 0 && !VAR_2) || FUNC_0 (VAR_0, VAR_4, VAR_3) < 0) {
    return -1;
  }
  return 0;
}
