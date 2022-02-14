
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 () ;
 int * FUNC_8 () ;
 int FUNC_9 (char*) ;

void FUNC_10(void)
{
 FUNC_2("including", "[include]\npath = nonexistentfile\n[foo]\nbar = baz");

 FUNC_7();
 FUNC_3(FUNC_6(&VAR_1, "including"));
 FUNC_0(FUNC_8() == ((void*)0));
 FUNC_3(FUNC_5(&VAR_0, VAR_1, "foo.bar"));
 FUNC_1("baz", FUNC_4(&VAR_0));

 FUNC_3(FUNC_9("including"));
}
