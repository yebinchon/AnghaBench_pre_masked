
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int checkout_strategy; } ;
typedef TYPE_1__ git_checkout_options ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,int *,TYPE_1__*) ;

void FUNC_4(void)
{
 git_checkout_options VAR_4 = VAR_1;

 FUNC_1("./testrepo/new.txt", "This isn't what's stored!");




 VAR_4.checkout_strategy = VAR_2 | VAR_0;

 FUNC_2(FUNC_3(VAR_3, ((void*)0), &VAR_4));

 FUNC_0("./testrepo/new.txt", "This isn't what's stored!");
}
