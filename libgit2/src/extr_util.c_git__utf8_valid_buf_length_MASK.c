
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int const*,size_t) ;

size_t FUNC_1(const uint8_t *VAR_0, size_t VAR_1)
{
 size_t VAR_2 = 0;

 while (VAR_2 < VAR_1) {
  int VAR_3 = FUNC_0(VAR_0 + VAR_2, VAR_1 - VAR_2);

  if (VAR_3 < 0)
   break;

  VAR_2 += VAR_3;
 }

 return VAR_2;
}
