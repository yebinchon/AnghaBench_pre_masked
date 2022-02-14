
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ uint16_t ;


 scalar_t__* FUNC_0 (scalar_t__ const*,size_t,int *) ;
 scalar_t__ FUNC_1 (int ,char*) ;

size_t FUNC_2(const uint16_t *VAR_0, size_t VAR_1)
{
 size_t VAR_2;
 uint32_t VAR_3;
 char VAR_4[4];

 if (VAR_1 != 0) {
  const uint16_t *VAR_5, *VAR_6;

  VAR_2 = 0;
  VAR_5 = VAR_0;
  while (VAR_1 != 0) {
   VAR_6 = FUNC_0(VAR_5, VAR_1, &VAR_3);
   VAR_2 += FUNC_1(VAR_3, VAR_4);
   VAR_1 -= VAR_6 - VAR_5;
   VAR_5 = VAR_6;
  }
  return VAR_2;
 }
 VAR_2 = 0;
 while (*VAR_0) {
  VAR_0 = FUNC_0(VAR_0, VAR_1, &VAR_3);
  VAR_2 += FUNC_1(VAR_3, VAR_4);
 }
 return VAR_2;
}
