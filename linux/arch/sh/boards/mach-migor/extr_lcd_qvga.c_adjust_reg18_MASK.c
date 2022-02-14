
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned long FUNC_0(unsigned short VAR_0)
{
 unsigned long VAR_1, VAR_2;

 VAR_1 = (VAR_0<<1 | 0x00000001) & 0x000001FF;
 VAR_2 = (VAR_0<<2 | 0x00000200) & 0x0003FE00;
 return VAR_1 | VAR_2;
}
