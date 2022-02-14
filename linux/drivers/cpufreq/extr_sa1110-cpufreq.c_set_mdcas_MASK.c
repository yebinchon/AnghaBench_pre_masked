
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;



__attribute__((used)) static inline void FUNC_0(u_int *VAR_0, int VAR_1, u_int VAR_2)
{
 u_int VAR_3;

 VAR_2 = 2 * VAR_2 - 1;
 VAR_3 = VAR_1 + 1 + VAR_2;

 VAR_0[0] = (1 << VAR_2) - 1;
 VAR_0[0] |= 0x55555555 << VAR_3;
 VAR_0[1] = VAR_0[2] = 0x55555555 << (VAR_3 & 1);
}
