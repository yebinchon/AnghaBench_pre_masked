
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int memory_status ;
struct TYPE_3__ {int dwLength; int ullTotalPhys; } ;
typedef TYPE_1__ MEMORYSTATUSEX ;


 int FUNC_0 (TYPE_1__*) ;

uint64_t FUNC_1(void) {
  MEMORYSTATUSEX VAR_0;
  VAR_0.dwLength = sizeof(VAR_0);

  if (!FUNC_0(&VAR_0)) {
    return -1;
  }

  return (uint64_t)VAR_0.ullTotalPhys;
}
