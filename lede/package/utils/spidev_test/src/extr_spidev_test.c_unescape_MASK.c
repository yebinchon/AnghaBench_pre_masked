
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,unsigned int*) ;

__attribute__((used)) static int FUNC_1(char *VAR_0, char *VAR_1, size_t VAR_2)
{
 int VAR_3 = 0;
 char *VAR_4 = VAR_1;
 char *VAR_5 = VAR_0;
 unsigned int VAR_6;

 while (*VAR_4) {
  if (*VAR_4 == '\\' && *(VAR_4+1) == 'x') {
   FUNC_0(VAR_4 + 2, "%2x", &VAR_6);
   VAR_4 += 4;
   *VAR_5++ = (unsigned char)VAR_6;
  } else {
   *VAR_5++ = *VAR_4++;
  }
  VAR_3++;
 }
 return VAR_3;
}
