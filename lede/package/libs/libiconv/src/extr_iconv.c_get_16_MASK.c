
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char const wchar_t ;



__attribute__((used)) static inline wchar_t FUNC_0(const unsigned char *VAR_0, int VAR_1)
{
 VAR_1 &= 1;
 return VAR_0[VAR_1]<<8 | VAR_0[VAR_1^1];
}
