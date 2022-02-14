
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (char*) ;
 char* VAR_0 ;

void FUNC_1(uint32_t VAR_1)
{
  char VAR_2[sizeof "0x11223344"];
  VAR_2[0] = '0';
  VAR_2[1] = 'x';
  VAR_2[2] = VAR_0[(VAR_1 >> 28) & 0xf];
  VAR_2[3] = VAR_0[(VAR_1 >> 24) & 0xf];
  VAR_2[4] = VAR_0[(VAR_1 >> 20) & 0xf];
  VAR_2[5] = VAR_0[(VAR_1 >> 16) & 0xf];
  VAR_2[6] = VAR_0[(VAR_1 >> 12) & 0xf];
  VAR_2[7] = VAR_0[(VAR_1 >> 8) & 0xf];
  VAR_2[8] = VAR_0[(VAR_1 >> 4) & 0xf];
  VAR_2[9] = VAR_0[VAR_1 & 0xf];
  VAR_2[10] = 0;

  FUNC_0(VAR_2);
}
