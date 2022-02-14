
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
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int*,int ,char*) ;
 int FUNC_7 (char*) ;

void FUNC_8(void)
{
 git_checkout_options VAR_4 = VAR_0;
 int VAR_5 = 0;

 VAR_4.checkout_strategy = VAR_2 | VAR_1;

 FUNC_2("testrepo/ignored_file", "as you wish");

 FUNC_3(FUNC_5(VAR_3, "ignored_file\n"));

 FUNC_3(FUNC_6(&VAR_5, VAR_3, "ignored_file"));
 FUNC_1(1, VAR_5);

 FUNC_0(FUNC_7("testrepo/ignored_file"));

 FUNC_3(FUNC_4(VAR_3, &VAR_4));

 FUNC_0(!FUNC_7("testrepo/ignored_file"));
}
