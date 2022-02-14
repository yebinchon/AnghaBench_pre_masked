
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int tmp ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,char const*,int ) ;
 char* FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(char **VAR_0, const char *VAR_1, va_list VAR_2)
{
 int VAR_3;
 char VAR_4[8192];

 VAR_3 = FUNC_1(VAR_4, sizeof(VAR_4), VAR_1, VAR_2);
 if (VAR_3 < 0)
  FUNC_0("Fatal: Out of memory");
 if (VAR_3 >= sizeof(VAR_4))
  FUNC_0("imap command overflow!");
 *VAR_0 = FUNC_2(VAR_4, VAR_3);
 return VAR_3;
}
