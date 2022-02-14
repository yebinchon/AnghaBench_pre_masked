
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;



__attribute__((used)) static uint64_t
FUNC_0(uint64_t VAR_0, uint64_t VAR_1, uint64_t VAR_2)
{
 uint64_t VAR_3 = 0;
 uint64_t VAR_4 = VAR_0 % VAR_2;

 while (VAR_1 != 0) {
  if (VAR_1 & 1) {
   VAR_3 += VAR_4;
   if ((VAR_3 < VAR_4) || (VAR_3 >= VAR_2))
    VAR_3 -= VAR_2;
  }
  if (VAR_4 + VAR_4 < VAR_4)
   VAR_4 = VAR_4 + VAR_4 - VAR_2;
  else if (VAR_4 + VAR_4 >= VAR_2)
   VAR_4 = VAR_4 + VAR_4 - VAR_2;
  else
   VAR_4 = VAR_4 + VAR_4;
  VAR_1 >>= 1;
 }

 return (VAR_3);
}
