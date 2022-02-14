
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int checkout_strategy; } ;
typedef TYPE_1__ git_checkout_options ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_4 ;
 int FUNC_2 (int ,TYPE_1__*) ;

void FUNC_3(void)
{
 git_checkout_options VAR_5 = VAR_3;
 VAR_5.checkout_strategy = VAR_2;

 FUNC_1(VAR_4, "core.autocrlf", 1);

 FUNC_2(VAR_4, &VAR_5);

 FUNC_0("./crlf/all-lf", VAR_1);
 FUNC_0("./crlf/all-crlf", VAR_0);
}
