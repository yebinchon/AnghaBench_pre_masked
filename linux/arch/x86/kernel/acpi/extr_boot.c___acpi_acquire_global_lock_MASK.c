
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned int*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_1 (int) ;

int FUNC_2(unsigned int *VAR_0)
{
 unsigned int VAR_1, VAR_2, VAR_3;
 do {
  VAR_1 = *VAR_0;
  VAR_2 = (((VAR_1 & ~0x3) + 2) + ((VAR_1 >> 1) & 0x1));
  VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 } while (FUNC_1 (VAR_3 != VAR_1));
 return (VAR_2 < 3) ? -1 : 0;
}
