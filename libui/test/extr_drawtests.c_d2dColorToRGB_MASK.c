
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static void FUNC_0(uint32_t VAR_0, double *VAR_1, double *VAR_2, double *VAR_3)
{
 uint8_t VAR_4, VAR_5, VAR_6;

 VAR_4 = (VAR_0 & 0xFF0000) >> 16;
 VAR_5 = (VAR_0 & 0x00FF00) >> 8;
 VAR_6 = VAR_0 & 0x0000FF;
 *VAR_1 = ((double) VAR_4) / 255.0;
 *VAR_2 = ((double) VAR_5) / 255.0;
 *VAR_3 = ((double) VAR_6) / 255.0;
}
