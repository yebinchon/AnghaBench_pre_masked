
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*,int *,int ,int*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (char*) ;
 int VAR_2 ;

void FUNC_7(void)
{
 int VAR_3;

 VAR_3 = 0;
 FUNC_1("config", "[old]\nvalue = 5\nvalue = 6\n");
 FUNC_2(FUNC_4(&VAR_0, "config"));
 FUNC_2(FUNC_3(VAR_0, "old.value", ((void*)0), VAR_1, &VAR_3));
 FUNC_0(2, VAR_3);

 VAR_3 = 0;
 FUNC_2(FUNC_5(&VAR_2, VAR_0));
 FUNC_2(FUNC_3(VAR_2, "old.value", ((void*)0), VAR_1, &VAR_3));
 FUNC_0(2, VAR_3);

 FUNC_2(FUNC_6("config"));
}
