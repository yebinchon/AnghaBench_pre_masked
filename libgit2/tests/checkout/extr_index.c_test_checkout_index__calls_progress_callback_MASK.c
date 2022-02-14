
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int checkout_strategy; int* progress_payload; int progress_cb; } ;
typedef TYPE_1__ git_checkout_options ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,int *,TYPE_1__*) ;

void FUNC_3(void)
{
 git_checkout_options VAR_5 = VAR_0;
 int VAR_6 = 0;

 VAR_5.checkout_strategy = VAR_2 | VAR_1;
 VAR_5.progress_cb = VAR_3;
 VAR_5.progress_payload = &VAR_6;

 FUNC_1(FUNC_2(VAR_4, ((void*)0), &VAR_5));
 FUNC_0(VAR_6 > 0);
}
