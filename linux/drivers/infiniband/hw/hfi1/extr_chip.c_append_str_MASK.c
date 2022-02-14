
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(char *VAR_0, char **VAR_1, int *VAR_2, const char *VAR_3)
{
 char *VAR_4 = *VAR_1;
 int VAR_5 = *VAR_2;
 int VAR_6 = 0;
 char VAR_7;


 if (VAR_4 != VAR_0) {
  if (VAR_5 == 0) {
   VAR_6 = 1;
   goto done;
  }
  *VAR_4++ = ',';
  VAR_5--;
 }


 while ((VAR_7 = *VAR_3++) != 0) {
  if (VAR_5 == 0) {
   VAR_6 = 1;
   goto done;
  }
  *VAR_4++ = VAR_7;
  VAR_5--;
 }

done:

 *VAR_1 = VAR_4;
 *VAR_2 = VAR_5;

 return VAR_6;
}
