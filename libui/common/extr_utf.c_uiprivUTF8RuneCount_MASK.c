
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 char* FUNC_0 (char const*,size_t,int *) ;

size_t FUNC_1(const char *VAR_0, size_t VAR_1)
{
 size_t VAR_2;
 uint32_t VAR_3;

 if (VAR_1 != 0) {
  const char *VAR_4, *VAR_5;

  VAR_2 = 0;
  VAR_4 = VAR_0;
  while (VAR_1 != 0) {
   VAR_5 = FUNC_0(VAR_4, VAR_1, &VAR_3);
   VAR_2++;
   VAR_1 -= VAR_5 - VAR_4;
   VAR_4 = VAR_5;
  }
  return VAR_2;
 }
 VAR_2 = 0;
 while (*VAR_0) {
  VAR_0 = FUNC_0(VAR_0, VAR_1, &VAR_3);
  VAR_2++;
 }
 return VAR_2;
}
