
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (int *,int ,char*) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (char*) ;

void FUNC_10(void)
{
 FUNC_3(FUNC_6(&VAR_0, "[include]\npath = %s/config-included", FUNC_1("config")));

 FUNC_2("config-include-absolute", FUNC_4(&VAR_0));
 FUNC_5(&VAR_0);
 FUNC_3(FUNC_8(&VAR_1, "config-include-absolute"));

 FUNC_3(FUNC_7(&VAR_0, VAR_1, "foo.bar.baz"));
 FUNC_0("huzzah", FUNC_4(&VAR_0));

 FUNC_3(FUNC_9("config-include-absolute"));
}
