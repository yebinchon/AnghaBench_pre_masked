
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ar_arg_pid; } ;
struct kaudit_record {TYPE_1__ k_ar; } ;
typedef int pid_t ;


 int VAR_0 ;
 int FUNC_0 (struct kaudit_record*,int ) ;
 struct kaudit_record* FUNC_1 () ;

void
FUNC_2(pid_t VAR_1)
{
 struct kaudit_record *VAR_2;

 VAR_2 = FUNC_1();
 if (VAR_2 == ((void*)0))
  return;

 VAR_2->k_ar.ar_arg_pid = VAR_1;
 FUNC_0(VAR_2, VAR_0);
}
