
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint32 ;


 int* VAR_0 ;

__attribute__((used)) static uint32 FUNC_0(uint32 VAR_1, uint8* VAR_2, size_t VAR_3)
{
 while (VAR_3--)
 {
  VAR_1 = VAR_0[(VAR_1 ^ *VAR_2++) & 0xff] ^ (VAR_1 >> 8);
 }
 return VAR_1;
}
