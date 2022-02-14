
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0(unsigned long VAR_3, int VAR_4, unsigned *VAR_5, unsigned *VAR_6)
{
 int VAR_7 = VAR_3 >> (VAR_0 + VAR_4 * VAR_1);

 *VAR_5 = (VAR_7 & 0xc) | 0x40;
 *VAR_6 = (VAR_7 & 0x3) | 0x80;

 return (VAR_3 >> (VAR_4 * VAR_2)) & 0x3;
}
