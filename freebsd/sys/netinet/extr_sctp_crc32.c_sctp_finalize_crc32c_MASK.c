
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static uint32_t
FUNC_0(uint32_t VAR_0)
{
 uint32_t VAR_1;

 uint8_t VAR_2, VAR_3, VAR_4, VAR_5;



 VAR_1 = ~VAR_0;






 VAR_2 = VAR_1 & 0x000000ff;
 VAR_3 = (VAR_1 >> 8) & 0x000000ff;
 VAR_4 = (VAR_1 >> 16) & 0x000000ff;
 VAR_5 = (VAR_1 >> 24) & 0x000000ff;
 VAR_0 = ((VAR_2 << 24) | (VAR_3 << 16) | (VAR_4 << 8) | VAR_5);







 return (VAR_0);
}
