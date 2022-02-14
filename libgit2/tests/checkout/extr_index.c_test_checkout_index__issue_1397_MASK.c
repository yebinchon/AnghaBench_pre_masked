
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int checkout_strategy; } ;
typedef TYPE_1__ git_checkout_options ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,int) ;
 int VAR_2 ;
 int FUNC_5 (int ,int *,TYPE_1__*) ;

void FUNC_6(void)
{
 git_checkout_options VAR_3 = VAR_1;

 FUNC_2();
 VAR_2 = FUNC_3("issue_1397");

 FUNC_4(VAR_2, "core.autocrlf", 1);

 VAR_3.checkout_strategy = VAR_0;

 FUNC_1(FUNC_5(VAR_2, ((void*)0), &VAR_3));

 FUNC_0("./issue_1397/crlf_file.txt", "first line\r\nsecond line\r\nboth with crlf");
}
