
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,char*) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (char*) ;

void FUNC_10(void)
{
 FUNC_3(FUNC_8(VAR_1, VAR_0, FUNC_1("config")));
 FUNC_2("config-include-homedir", "[include]\npath = ~/config-included");

 FUNC_3(FUNC_7(&VAR_3, "config-include-homedir"));

 FUNC_3(FUNC_6(&VAR_2, VAR_3, "foo.bar.baz"));
 FUNC_0("huzzah", FUNC_5(&VAR_2));

 FUNC_4();

 FUNC_3(FUNC_9("config-include-homedir"));
}
