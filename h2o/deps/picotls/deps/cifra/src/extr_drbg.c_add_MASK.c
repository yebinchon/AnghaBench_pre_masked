
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_0, size_t VAR_1, const uint8_t *VAR_2, size_t VAR_3)
{
  FUNC_0(VAR_1 >= VAR_3);

  uint16_t VAR_4 = 0;
  int VAR_5, VAR_6;

  for (VAR_5 = VAR_1 - 1, VAR_6 = VAR_3 - 1;
       VAR_5 >= 0;
       VAR_6--, VAR_5--)
  {
    VAR_4 += VAR_0[VAR_5];
    if (VAR_6 >= 0)
      VAR_4 += VAR_2[VAR_6];
    VAR_0[VAR_5] = VAR_4 & 0xff;
    VAR_4 >>= 8;
  }
}
