
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (char*) ;

void FUNC_6(void)
{
 FUNC_1("top-level", "[include]\npath = included\n");

 FUNC_1("included", "[foo]\nbar = value");

 FUNC_2(FUNC_3(&VAR_0, "top-level"));
 FUNC_0(FUNC_4(VAR_0, "foo.bar", "other-value"));

 FUNC_2(FUNC_5("top-level"));
 FUNC_2(FUNC_5("included"));
}
