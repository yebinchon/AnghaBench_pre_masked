
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uint8_t ;


 int FUNC_0 (int const) ;

__attribute__((used)) static uintmax_t
FUNC_1(const uint8_t *VAR_0, size_t VAR_1)
{
 uintmax_t VAR_2;

 VAR_2 = 0;
 while (VAR_1 > 0) {
  VAR_2 <<= 4;
  VAR_2 |= FUNC_0(*VAR_0);
  VAR_0++;
  VAR_1--;
 }
 return (VAR_2);
}
