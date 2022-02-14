
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char*,size_t) ;

__attribute__((used)) static int FUNC_1(int VAR_1, char **VAR_2, size_t VAR_3, size_t *VAR_4)
{
 char *VAR_5;
 size_t VAR_6 = VAR_3 + 1;
 if (VAR_6 > *VAR_4) {
  VAR_6 += VAR_0 - 1;
  VAR_6 *= 2;
  VAR_5 = FUNC_0(*VAR_2, VAR_6);
  if (!VAR_5)
   return -1;

  *VAR_2 = VAR_5;
  *VAR_4 = VAR_6;
 }

 (*VAR_2)[VAR_3] = VAR_1;

 return 0;
}
