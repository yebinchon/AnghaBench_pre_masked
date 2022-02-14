
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ar_arg_envc; int ar_arg_envv; } ;
struct kaudit_record {TYPE_1__ k_ar; } ;


 int VAR_0 ;
 int FUNC_0 (struct kaudit_record*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,int ,int) ;
 struct kaudit_record* FUNC_2 () ;
 int FUNC_3 (int,int ,int ) ;

void
FUNC_4(char *VAR_4, int VAR_5, int VAR_6)
{
 struct kaudit_record *VAR_7;

 if (VAR_3 == 0)
  return;

 VAR_7 = FUNC_2();
 if (VAR_7 == ((void*)0))
  return;

 VAR_7->k_ar.ar_arg_envv = FUNC_3(VAR_6, VAR_1, VAR_2);
 FUNC_1(VAR_4, VAR_7->k_ar.ar_arg_envv, VAR_6);
 VAR_7->k_ar.ar_arg_envc = VAR_5;
 FUNC_0(VAR_7, VAR_0);
}
