
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;


 int FUNC_0 (scalar_t__ const) ;

__attribute__((used)) static int
FUNC_1(const uint8_t *VAR_0, int VAR_1, uint16_t *VAR_2, int VAR_3)
{
 uint16_t *VAR_4;

 VAR_4 = VAR_2;
 while (VAR_1 > 0 && VAR_0[0] != 0) {
  if (VAR_3 < 1)
   break;
  if (VAR_4)
   VAR_4[0] = FUNC_0(VAR_0[0]);
  VAR_4 += 1;
  VAR_3 -= 1;
  VAR_0 += 1;
  VAR_1 -= 1;
 }

 return VAR_4 - VAR_2;
}
