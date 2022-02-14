
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int*,int ,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (char*) ;

void FUNC_6(void)
{
 int VAR_1;

 FUNC_1("top-level", "[include]\npath = included\n[foo]\nbar = 1");
 FUNC_1("included", "[foo]\nbar = 2");

 FUNC_2(FUNC_4(&VAR_0, "top-level"));
 FUNC_2(FUNC_3(&VAR_1, VAR_0, "foo.bar"));
 FUNC_0(VAR_1, 1);

 FUNC_2(FUNC_5("top-level"));
 FUNC_2(FUNC_5("included"));
}
