
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;


 scalar_t__ FUNC_0 (int ,int *) ;
 char* FUNC_1 (char const*,size_t,int *) ;

size_t FUNC_2(const char *VAR_0, size_t VAR_1)
{
 size_t VAR_2;
 uint32_t VAR_3;
 uint16_t VAR_4[2];

 if (VAR_1 != 0) {
  const char *VAR_5, *VAR_6;

  VAR_2 = 0;
  VAR_5 = VAR_0;
  while (VAR_1 != 0) {
   VAR_6 = FUNC_1(VAR_5, VAR_1, &VAR_3);
   VAR_2 += FUNC_0(VAR_3, VAR_4);
   VAR_1 -= VAR_6 - VAR_5;
   VAR_5 = VAR_6;
  }
  return VAR_2;
 }
 VAR_2 = 0;
 while (*VAR_0) {
  VAR_0 = FUNC_1(VAR_0, VAR_1, &VAR_3);
  VAR_2 += FUNC_0(VAR_3, VAR_4);
 }
 return VAR_2;
}
