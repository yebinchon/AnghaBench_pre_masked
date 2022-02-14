
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,int *) ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*) ;
 int VAR_0 ;
 int FUNC_4 (char const**,int ,int ,char*,char*) ;

void FUNC_5(void)
{
 const char *VAR_1;

 FUNC_3("attr/.gitattributes", "file.txt foo=first\n");
 FUNC_2(FUNC_4(&VAR_1, VAR_0, 0, "file.txt", "foo"));
 FUNC_1(VAR_1, "first");

 FUNC_3("attr/.gitattributes", "file.txt foo=second\n");
 FUNC_2(FUNC_4(&VAR_1, VAR_0, 0, "file.txt", "foo"));
 FUNC_1(VAR_1, "second");

 FUNC_3("attr/.gitattributes", "file.txt other=value\n");
 FUNC_2(FUNC_4(&VAR_1, VAR_0, 0, "file.txt", "foo"));
 FUNC_0(VAR_1, ((void*)0));
}
