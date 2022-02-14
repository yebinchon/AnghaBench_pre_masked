
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ar_valid_arg; int * ar_arg_text; } ;
struct kaudit_record {TYPE_1__ k_ar; } ;


 int VAR_0 ;
 int FUNC_0 (struct kaudit_record*,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct kaudit_record* FUNC_2 () ;
 int * FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *,char const*,int ) ;

void
FUNC_5(const char *VAR_5)
{
 struct kaudit_record *VAR_6;

 FUNC_1(VAR_5 != ((void*)0), ("audit_arg_text: text == NULL"));

 VAR_6 = FUNC_2();
 if (VAR_6 == ((void*)0))
  return;


 VAR_6->k_ar.ar_valid_arg &= (VAR_0 ^ VAR_1);

 if (VAR_6->k_ar.ar_arg_text == ((void*)0))
  VAR_6->k_ar.ar_arg_text = FUNC_3(VAR_2, VAR_3,
      VAR_4);

 FUNC_4(VAR_6->k_ar.ar_arg_text, VAR_5, VAR_2);
 FUNC_0(VAR_6, VAR_1);
}
