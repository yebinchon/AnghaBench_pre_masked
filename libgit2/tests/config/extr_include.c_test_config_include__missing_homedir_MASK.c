
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,char*) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 () ;
 int * FUNC_10 () ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (char*) ;

void FUNC_13(void)
{
 FUNC_4(FUNC_11(VAR_1, VAR_0, FUNC_2("config")));
 FUNC_3("including", "[include]\npath = ~/.nonexistentfile\n[foo]\nbar = baz");

 FUNC_9();
 FUNC_4(FUNC_8(&VAR_3, "including"));
 FUNC_0(FUNC_10() == ((void*)0));
 FUNC_4(FUNC_7(&VAR_2, VAR_3, "foo.bar"));
 FUNC_1("baz", FUNC_6(&VAR_2));

 FUNC_5();
 FUNC_4(FUNC_12("including"));
}
