
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (char*) ;
 char* VAR_0 ;

void FUNC_1(const void *VAR_1, size_t VAR_2)
{
  const uint8_t *VAR_3 = VAR_1;
  char VAR_4[3];

  VAR_4[2] = 0;

  for (size_t VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  {
    VAR_4[0] = VAR_0[(VAR_3[VAR_5] >> 4) & 0xf];
    VAR_4[1] = VAR_0[VAR_3[VAR_5] & 0xf];
    FUNC_0(VAR_4);
  }
}
