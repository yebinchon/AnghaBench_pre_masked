
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ pid_t ;
struct TYPE_2__ {scalar_t__ type; scalar_t__ pid; } ;
typedef TYPE_1__ koaux_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (scalar_t__,int*,int ) ;

int FUNC_2(void *VAR_2)
{
 koaux_t *VAR_3 = (koaux_t*)VAR_2;
 if (VAR_3->type == VAR_0) {
  int VAR_4;
  pid_t VAR_5;
  VAR_5 = FUNC_1(VAR_3->pid, &VAR_4, VAR_1);
  if (VAR_5 != VAR_3->pid) FUNC_0(VAR_3->pid, 15);
 }
 return 0;
}
