
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
 int FUNC_2 (int ,char*,int) ;
 int VAR_2 ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int ,char*) ;

void FUNC_5(void)
{
 git_checkout_options VAR_3 = VAR_1;
 VAR_3.checkout_strategy = VAR_0;

 FUNC_2(VAR_2, "core.autocrlf", 1);

 FUNC_1(FUNC_4(VAR_2, "refs/heads/empty-files"));
 FUNC_1(FUNC_3(VAR_2, &VAR_3));

 FUNC_0("./crlf/test1.txt", "");

 FUNC_0("./crlf/test2.txt", "test2.txt's content\r\n");

 FUNC_0("./crlf/test3.txt", "");
}
