
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline void FUNC_0(unsigned short *VAR_0, unsigned long VAR_1)
{
 *VAR_0 = (VAR_1 & 0xffff0000) >> 16;
 *(VAR_0 + 1) = (VAR_1 & 0xffff);
}
