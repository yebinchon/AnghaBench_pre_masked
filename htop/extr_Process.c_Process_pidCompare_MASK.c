
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long pid; } ;
typedef TYPE_1__ Process ;



long FUNC_0(const void* VAR_0, const void* VAR_1) {
   Process* VAR_2 = (Process*)VAR_0;
   Process* VAR_3 = (Process*)VAR_1;
   return (VAR_2->pid - VAR_3->pid);
}
