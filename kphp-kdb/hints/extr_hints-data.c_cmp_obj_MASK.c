
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int object_table; } ;


 TYPE_1__* VAR_0 ;
 long long FUNC_0 (int *,int) ;

int FUNC_1 (const void * VAR_1, const void * VAR_2) {
  int VAR_3 = *(int *)VAR_1, VAR_4 = *(int *)VAR_2;
  long long VAR_5 = FUNC_0 (&VAR_0->object_table, VAR_3), VAR_6 = FUNC_0 (&VAR_0->object_table, VAR_4);
  if (VAR_5 < VAR_6) {
    return -1;
  } else if (VAR_5 > VAR_6) {
    return +1;
  }
  return 0;
}
