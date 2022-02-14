
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,char) ;
 scalar_t__ FUNC_1 (int *,char const*,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*,int) ;

int FUNC_5(git_buf *VAR_2, const char *VAR_3)
{
 const char *VAR_4;
 int VAR_5 = 0, VAR_6;


 if (VAR_3 == ((void*)0) || *VAR_3 == '\0') {
  VAR_3 = ".";
  VAR_6 = 1;
  goto Exit;
 }


 VAR_4 = VAR_3 + FUNC_3(VAR_3) - 1;
 while (VAR_4 > VAR_3 && *VAR_4 == '/')
  VAR_4--;

 if (VAR_4 - VAR_3 + 1 > VAR_1) {
  FUNC_2(VAR_0, "path too long");
  VAR_6 = -1;
  goto Exit;
 }

 if ((VAR_6 = FUNC_4(VAR_3, (int)(VAR_4 - VAR_3 + 1))) > 0) {
  VAR_5 = 1;
  goto Exit;
 }


 while (VAR_4 > VAR_3 && *VAR_4 != '/')
  VAR_4--;


 if (VAR_4 == VAR_3) {
  VAR_3 = (*VAR_4 == '/') ? "/" : ".";
  VAR_6 = 1;
  goto Exit;
 }

 do {
  VAR_4--;
 } while (VAR_4 > VAR_3 && *VAR_4 == '/');

 if (VAR_4 - VAR_3 + 1 > VAR_1) {
  FUNC_2(VAR_0, "path too long");
  VAR_6 = -1;
  goto Exit;
 }

 if ((VAR_6 = FUNC_4(VAR_3, (int)(VAR_4 - VAR_3 + 1))) > 0) {
  VAR_5 = 1;
  goto Exit;
 }


 VAR_6 = (int)(VAR_4 - VAR_3 + 1);

Exit:
 if (VAR_2) {
  if (FUNC_1(VAR_2, VAR_3, VAR_6) < 0)
   return -1;
  if (VAR_5 && FUNC_0(VAR_2, '/') < 0)
   return -1;
 }

 return VAR_6;
}
