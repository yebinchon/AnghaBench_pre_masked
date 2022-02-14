
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;



__attribute__((used)) static inline void FUNC_0(unsigned char *VAR_0, wchar_t VAR_1, int VAR_2)
{
 VAR_2 &= 1;
 VAR_0[VAR_2] = VAR_1>>8;
 VAR_0[VAR_2^1] = VAR_1;
}
