
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(unsigned int VAR_0)
{
 unsigned int VAR_1;

 VAR_1 = 0x10000000;
 if ((VAR_0 & 0xfc000000) == 0x7c000000)
  VAR_1 = 0x100;
 return (VAR_0 & VAR_1) != 0;
}
