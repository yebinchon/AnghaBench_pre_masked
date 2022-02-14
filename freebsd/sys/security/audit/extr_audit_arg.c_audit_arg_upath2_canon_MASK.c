
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ar_arg_upath2; } ;
struct kaudit_record {TYPE_1__ k_ar; } ;


 int FUNC_0 (struct kaudit_record*,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int *) ;
 struct kaudit_record* FUNC_2 () ;

void
FUNC_3(char *VAR_1)
{
 struct kaudit_record *VAR_2;

 VAR_2 = FUNC_2();
 if (VAR_2 == ((void*)0))
  return;

 FUNC_1(VAR_1, &VAR_2->k_ar.ar_arg_upath2);
 FUNC_0(VAR_2, VAR_0);
}
