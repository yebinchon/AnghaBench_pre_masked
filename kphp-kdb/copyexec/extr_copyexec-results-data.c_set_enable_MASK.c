
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int disabled; } ;
typedef TYPE_1__ host_t ;


 TYPE_1__* FUNC_0 (unsigned long long,int ) ;

int FUNC_1 (unsigned long long VAR_0, int VAR_1) {
  host_t *VAR_2 = FUNC_0 (VAR_0, 0);
  if (VAR_2 == ((void*)0)) {
    return -1;
  }
  int VAR_3 = VAR_1 ? 0 : 1;
  if (VAR_2->disabled == VAR_3) {
    return 1;
  }
  VAR_2->disabled = VAR_3;
  return 0;
}
