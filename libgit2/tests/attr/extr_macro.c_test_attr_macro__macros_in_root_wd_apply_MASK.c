
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int FUNC_4 (char const**,int ,int ,char*,char*) ;
 int FUNC_5 (char*,int) ;

void FUNC_6(void)
{
 const char *VAR_1;

 VAR_0 = FUNC_3("empty_standard_repo");

 FUNC_1(FUNC_5("empty_standard_repo/dir", 0777));
 FUNC_2("empty_standard_repo/.gitattributes", "[attr]customattr key=value\n");
 FUNC_2("empty_standard_repo/dir/.gitattributes", "file customattr\n");

 FUNC_1(FUNC_4(&VAR_1, VAR_0, 0, "dir/file", "key"));
 FUNC_0(VAR_1, "value");
}
