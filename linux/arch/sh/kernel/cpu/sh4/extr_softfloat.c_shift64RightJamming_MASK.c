
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16 ;
typedef int bits64 ;



void FUNC_0(bits64 VAR_0, int16 VAR_1, bits64 * VAR_2)
{
 bits64 VAR_3;

 if (VAR_1 == 0) {
  VAR_3 = VAR_0;
 } else if (VAR_1 < 64) {
  VAR_3 = (VAR_0 >> VAR_1) | ((VAR_0 << ((-VAR_1) & 63)) != 0);
 } else {
  VAR_3 = (VAR_0 != 0);
 }
 *VAR_2 = VAR_3;
}
