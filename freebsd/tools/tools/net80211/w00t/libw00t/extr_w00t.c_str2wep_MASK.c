
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,unsigned int*) ;
 int FUNC_1 (char*) ;

int FUNC_2(char *VAR_0, int *VAR_1, char *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 % 2)
  return -1;
 VAR_3 /= 2;

 if (VAR_3 != 5 && VAR_3 != 13)
  return -1;

 *VAR_1 = VAR_3;

 while (VAR_3--) {
  unsigned int VAR_4;

  if (FUNC_0(VAR_2, "%2x", &VAR_4) != 1)
   return -1;

  *VAR_0 = (unsigned char) VAR_4;
  VAR_0++;
  VAR_2 += 2;
 }

 return 0;
}
