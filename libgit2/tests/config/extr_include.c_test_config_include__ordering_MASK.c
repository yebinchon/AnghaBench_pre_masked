
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (char*) ;

void FUNC_8(void)
{
 FUNC_1("included", "[foo \"bar\"]\nbaz = hurrah\nfrotz = hiya");
 FUNC_1("including",
        "[foo \"bar\"]\nfrotz = hello\n"
        "[include]\npath = included\n"
        "[foo \"bar\"]\nbaz = huzzah\n");

 FUNC_2(FUNC_6(&VAR_1, "including"));

 FUNC_2(FUNC_5(&VAR_0, VAR_1, "foo.bar.frotz"));
 FUNC_0("hiya", FUNC_4(&VAR_0));
 FUNC_3(&VAR_0);
 FUNC_2(FUNC_5(&VAR_0, VAR_1, "foo.bar.baz"));
 FUNC_0("huzzah", FUNC_4(&VAR_0));

 FUNC_2(FUNC_7("included"));
 FUNC_2(FUNC_7("including"));
}
