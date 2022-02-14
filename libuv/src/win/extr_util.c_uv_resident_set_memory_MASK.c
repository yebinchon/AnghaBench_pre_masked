
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pmc ;
struct TYPE_3__ {size_t WorkingSetSize; } ;
typedef TYPE_1__ PROCESS_MEMORY_COUNTERS ;
typedef int HANDLE ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,TYPE_1__*,int) ;
 int FUNC_3 (int ) ;

int FUNC_4(size_t* VAR_0) {
  HANDLE VAR_1;
  PROCESS_MEMORY_COUNTERS VAR_2;

  VAR_1 = FUNC_0();

  if (!FUNC_2(VAR_1, &VAR_2, sizeof(VAR_2))) {
    return FUNC_3(FUNC_1());
  }

  *VAR_0 = VAR_2.WorkingSetSize;

  return 0;
}
