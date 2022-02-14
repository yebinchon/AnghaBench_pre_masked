
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;



__attribute__((used)) static inline void
FUNC_0(const u64 *VAR_0, u64 VAR_1, unsigned long *VAR_2, unsigned long *VAR_3)
{
 u64 VAR_4, VAR_5, VAR_6;
 *VAR_2 = *VAR_0;
 VAR_4 = ((unsigned long)VAR_0 >> 3) & 63;
 VAR_5 = ((unsigned long)VAR_2 >> 3) & 63;
 *VAR_3 &= ~(1UL << VAR_5);
 VAR_6 = (VAR_1 >> VAR_4) & 1;
 *VAR_3 |= (VAR_6 << VAR_5);
}
