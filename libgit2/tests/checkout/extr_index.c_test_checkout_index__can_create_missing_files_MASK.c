
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int checkout_strategy; } ;
typedef TYPE_1__ git_checkout_options ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,int *,TYPE_1__*) ;
 int FUNC_4 (char*) ;

void FUNC_5(void)
{
 git_checkout_options VAR_4 = VAR_0;

 FUNC_1(0, FUNC_4("./testrepo/README"));
 FUNC_1(0, FUNC_4("./testrepo/branch_file.txt"));
 FUNC_1(0, FUNC_4("./testrepo/new.txt"));

 VAR_4.checkout_strategy = VAR_2 | VAR_1;

 FUNC_2(FUNC_3(VAR_3, ((void*)0), &VAR_4));

 FUNC_0("./testrepo/README", "hey there\n");
 FUNC_0("./testrepo/branch_file.txt", "hi\nbye!\n");
 FUNC_0("./testrepo/new.txt", "my new file\n");
}
