
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ar_arg_exitstatus; int ar_arg_exitretval; } ;
struct kaudit_record {TYPE_1__ k_ar; } ;


 int VAR_0 ;
 int FUNC_0 (struct kaudit_record*,int ) ;
 struct kaudit_record* FUNC_1 () ;

void
FUNC_2(int VAR_1, int VAR_2)
{
 struct kaudit_record *VAR_3;

 VAR_3 = FUNC_1();
 if (VAR_3 == ((void*)0))
  return;

 VAR_3->k_ar.ar_arg_exitstatus = VAR_1;
 VAR_3->k_ar.ar_arg_exitretval = VAR_2;
 FUNC_0(VAR_3, VAR_0);
}
