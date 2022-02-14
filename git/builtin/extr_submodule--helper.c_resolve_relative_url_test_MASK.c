
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,char const*,char const*) ;
 int FUNC_4 (char const*,char*) ;
 char* FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(int VAR_0, const char **VAR_1, const char *VAR_2)
{
 char *VAR_3, *VAR_4;
 const char *VAR_5, *VAR_6;

 if (VAR_0 != 4)
  FUNC_0("resolve-relative-url-test only accepts three arguments: <up_path> <remoteurl> <url>");

 VAR_5 = VAR_1[1];
 VAR_3 = FUNC_5(VAR_1[2]);
 VAR_6 = VAR_1[3];

 if (!FUNC_4(VAR_5, "(null)"))
  VAR_5 = ((void*)0);

 VAR_4 = FUNC_3(VAR_3, VAR_6, VAR_5);
 FUNC_2(VAR_4);
 FUNC_1(VAR_4);
 FUNC_1(VAR_3);
 return 0;
}
