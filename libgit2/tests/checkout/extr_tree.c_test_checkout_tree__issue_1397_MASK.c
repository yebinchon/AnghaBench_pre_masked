
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_object ;
struct TYPE_4__ {int checkout_strategy; } ;
typedef TYPE_1__ git_checkout_options ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_2 ;
 int FUNC_4 (int ,int *,TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,char const*) ;
 int FUNC_7 () ;

void FUNC_8(void)
{
 git_checkout_options VAR_3 = VAR_1;
 const char *VAR_4 = "8a7ef04";
 git_object *VAR_5 = ((void*)0);

 FUNC_7();

 VAR_2 = FUNC_2("issue_1397");

 FUNC_3(VAR_2, "core.autocrlf", 1);

 FUNC_1(FUNC_6(&VAR_5, VAR_2, VAR_4));

 VAR_3.checkout_strategy = VAR_0;

 FUNC_1(FUNC_4(VAR_2, VAR_5, &VAR_3));

 FUNC_0("./issue_1397/crlf_file.txt", "first line\r\nsecond line\r\nboth with crlf");

 FUNC_5(VAR_5);
}
