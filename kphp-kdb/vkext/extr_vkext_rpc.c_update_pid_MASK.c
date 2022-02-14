
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ip; int utime; scalar_t__ pid; scalar_t__ port; } ;


 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2 (unsigned VAR_1) {
  if (!VAR_0.pid) {
    VAR_0.port = 0;
    VAR_0.pid = FUNC_0 ();
    VAR_0.utime = FUNC_1 (((void*)0));
  }
  if (!VAR_0.ip && VAR_0.ip != 0x7f000001) {
    VAR_0.ip = VAR_1;
  }
}
