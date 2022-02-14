
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
 int FUNC_5 (char*) ;

void FUNC_6(void)
{
 const char *VAR_1;

 FUNC_3("attr/.gitattributes", "file.txt foo=value1\n");
 FUNC_2(FUNC_4(&VAR_1, VAR_0, 0, "file.txt", "foo"));
 FUNC_1(VAR_1, "value1");

 FUNC_2(FUNC_5("attr/.gitattributes"));

 FUNC_2(FUNC_4(&VAR_1, VAR_0, 0, "file.txt", "foo"));
 FUNC_0(VAR_1, ((void*)0));
}
