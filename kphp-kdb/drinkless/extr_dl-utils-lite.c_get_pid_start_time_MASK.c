
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pid_t ;
struct TYPE_3__ {unsigned long long starttime; } ;
typedef TYPE_1__ pid_info_t ;


 scalar_t__ FUNC_0 (int ,TYPE_1__*) ;

unsigned long long FUNC_1 (pid_t VAR_0) {
  pid_info_t VAR_1;
  unsigned long long VAR_2 = 0;
  if (FUNC_0 (VAR_0, &VAR_1)) {
    VAR_2 = VAR_1.starttime;
  }

  return VAR_2;
}
