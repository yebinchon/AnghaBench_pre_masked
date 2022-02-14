
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const) ;

__attribute__((used)) static int FUNC_1(const char *VAR_1)
{
 int VAR_2 = 0;

 if (*VAR_1 == ':')
  return -VAR_0;
 for (; *VAR_1; VAR_1++)
  if (*VAR_1 == ':')
   goto found_colon;
 return -VAR_0;

found_colon:
 VAR_1++;
 for (; *VAR_1; VAR_1++) {
  if (!FUNC_0(*VAR_1))
   return -VAR_0;
  VAR_2++;
 }

 if (VAR_2 == 0 || VAR_2 & 1)
  return -VAR_0;
 return 0;
}
