
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t saint_t ;



__attribute__((used)) static inline void FUNC_0(const saint_t *VAR_0, saint_t *VAR_1, saint_t VAR_2, saint_t VAR_3)
{
 saint_t VAR_4, VAR_5 = 0;
 if (VAR_3) for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4) VAR_5 += VAR_0[VAR_4], VAR_1[VAR_4] = VAR_5;
 else for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4) VAR_5 += VAR_0[VAR_4], VAR_1[VAR_4] = VAR_5 - VAR_0[VAR_4];
}
