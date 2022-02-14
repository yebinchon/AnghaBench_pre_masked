
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**,int*) ;
 int FUNC_1 (char**,int*,int) ;

char *FUNC_2(const char *VAR_0, int VAR_1, int *VAR_2)
{
 int VAR_3, VAR_4 = 1;

 while (VAR_4 < VAR_1) {
  VAR_3 = FUNC_0((char **)&VAR_0, VAR_2 + VAR_4);
  if (VAR_3 == 0)
   break;
  if (VAR_3 == 3) {
   int VAR_5;
   VAR_5 = FUNC_1((char **)&VAR_0, VAR_2 + VAR_4, VAR_1 - VAR_4);
   if (VAR_5 < 0)
    break;





   VAR_4 += (VAR_5 - 1);
  }
  VAR_4++;
  if (VAR_3 == 1)
   break;
 }
 VAR_2[0] = VAR_4 - 1;
 return (char *)VAR_0;
}
