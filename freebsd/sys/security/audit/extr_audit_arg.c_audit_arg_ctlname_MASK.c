
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ar_arg_len; int ar_arg_ctlname; } ;
struct kaudit_record {TYPE_1__ k_ar; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kaudit_record*,int) ;
 int FUNC_1 (int*,int *,int) ;
 struct kaudit_record* FUNC_2 () ;

void
FUNC_3(int *VAR_2, int VAR_3)
{
 struct kaudit_record *VAR_4;

 VAR_4 = FUNC_2();
 if (VAR_4 == ((void*)0))
  return;

 FUNC_1(VAR_2, &VAR_4->k_ar.ar_arg_ctlname, VAR_3 * sizeof(int));
 VAR_4->k_ar.ar_arg_len = VAR_3;
 FUNC_0(VAR_4, VAR_0 | VAR_1);
}
