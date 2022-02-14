
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;

__attribute__((used)) static int FUNC_1(char *VAR_0, int VAR_1)
{
 int VAR_2 = VAR_1, VAR_3 = 0;
 char *VAR_4;

 for (VAR_4 = VAR_0; *VAR_4; ++VAR_4) {
  if (VAR_4[0] == '"' && VAR_4 > VAR_0 && VAR_4[-1] != '\\')
   VAR_2++;

  if ((VAR_4[0] == ';' || VAR_4[0] == '#') &&
   (VAR_2 % 2) == 0 &&
   (VAR_3 % 2) == 0) {
   VAR_4[0] = '\0';
   break;
  }

  if (VAR_4[0] == '\\')
   VAR_3++;
  else
   VAR_3 = 0;
 }


 while (VAR_4 > VAR_0 && FUNC_0(VAR_4[-1])) {
  VAR_4--;
 }
 VAR_4[0] = '\0';

 return VAR_2;
}
