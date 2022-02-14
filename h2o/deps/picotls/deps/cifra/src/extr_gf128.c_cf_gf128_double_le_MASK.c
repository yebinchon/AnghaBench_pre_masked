
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int* cf_gf128 ;


 int FUNC_0 (int,int*,int) ;

void FUNC_1(const cf_gf128 VAR_0, cf_gf128 VAR_1)
{
  uint8_t VAR_2[2] = { 0x00, 0xe1 };
  uint32_t VAR_3 = 0;
  uint32_t VAR_4;

  VAR_4 = VAR_0[0]; VAR_1[0] = (VAR_4 >> 1) | (VAR_3 << 31); VAR_3 = VAR_4 & 1;
  VAR_4 = VAR_0[1]; VAR_1[1] = (VAR_4 >> 1) | (VAR_3 << 31); VAR_3 = VAR_4 & 1;
  VAR_4 = VAR_0[2]; VAR_1[2] = (VAR_4 >> 1) | (VAR_3 << 31); VAR_3 = VAR_4 & 1;
  VAR_4 = VAR_0[3]; VAR_1[3] = (VAR_4 >> 1) | (VAR_3 << 31); VAR_3 = VAR_4 & 1;




  VAR_1[0] ^= VAR_2[VAR_3] << 24;

}
