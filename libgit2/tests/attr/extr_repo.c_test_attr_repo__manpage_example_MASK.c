
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int FUNC_6 (char const**,int ,int ,char*,char*) ;

void FUNC_7(void)
{
 const char *VAR_1;

 FUNC_5(FUNC_6(&VAR_1, VAR_0, 0, "sub/abc", "foo"));
 FUNC_3(FUNC_1(VAR_1));

 FUNC_5(FUNC_6(&VAR_1, VAR_0, 0, "sub/abc", "bar"));
 FUNC_3(FUNC_2(VAR_1));

 FUNC_5(FUNC_6(&VAR_1, VAR_0, 0, "sub/abc", "baz"));
 FUNC_3(FUNC_0(VAR_1));

 FUNC_5(FUNC_6(&VAR_1, VAR_0, 0, "sub/abc", "merge"));
 FUNC_4("filfre", VAR_1);

 FUNC_5(FUNC_6(&VAR_1, VAR_0, 0, "sub/abc", "frotz"));
 FUNC_3(FUNC_2(VAR_1));
}
