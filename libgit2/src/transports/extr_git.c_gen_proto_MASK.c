
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int *,size_t) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,unsigned int,char const*,char*,int ,char*) ;
 int FUNC_3 (int *,char const*,int) ;
 int FUNC_4 (int *,char) ;
 int FUNC_5 (int ,char*) ;
 char* FUNC_6 (char const*,char) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static int FUNC_8(git_buf *VAR_1, const char *VAR_2, const char *VAR_3)
{
 char *VAR_4, *VAR_5;
 char VAR_6[] = "host=";
 size_t VAR_7;

 VAR_4 = FUNC_6(VAR_3, '/');
 if (VAR_4 == ((void*)0)) {
  FUNC_5(VAR_0, "malformed URL");
  return -1;
 }

 VAR_5 = VAR_4;
 if (VAR_5[1] == '~')
  ++VAR_5;

 VAR_4 = FUNC_6(VAR_3, ':');
 if (VAR_4 == ((void*)0))
  VAR_4 = FUNC_6(VAR_3, '/');

 VAR_7 = 4 + FUNC_7(VAR_2) + 1 + FUNC_7(VAR_5) + 1 + FUNC_7(VAR_6) + (VAR_4 - VAR_3) + 1;

 FUNC_0(VAR_1, VAR_7);
 FUNC_2(VAR_1, "%04x%s %s%c%s",
  (unsigned int)(VAR_7 & 0x0FFFF), VAR_2, VAR_5, 0, VAR_6);
 FUNC_3(VAR_1, VAR_3, VAR_4 - VAR_3);
 FUNC_4(VAR_1, '\0');

 if (FUNC_1(VAR_1))
  return -1;

 return 0;
}
