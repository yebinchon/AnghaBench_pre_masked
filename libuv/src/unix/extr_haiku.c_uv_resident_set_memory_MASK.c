
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int team; } ;
typedef TYPE_1__ thread_info ;
typedef scalar_t__ status_t ;
typedef scalar_t__ ssize_t ;
struct TYPE_6__ {scalar_t__ ram_size; } ;
typedef TYPE_2__ area_info ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,scalar_t__*,TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*) ;

int FUNC_4(size_t* VAR_1) {
  area_info VAR_2;
  ssize_t VAR_3;
  status_t VAR_4;
  thread_info VAR_5;

  VAR_4 = FUNC_3(FUNC_1(((void*)0)), &VAR_5);
  if (VAR_4 != VAR_0)
    return FUNC_0(VAR_4);

  VAR_3 = 0;
  *VAR_1 = 0;
  while (FUNC_2(VAR_5.team, &VAR_3, &VAR_2) == VAR_0)
    *VAR_1 += VAR_2.ram_size;

  return 0;
}
