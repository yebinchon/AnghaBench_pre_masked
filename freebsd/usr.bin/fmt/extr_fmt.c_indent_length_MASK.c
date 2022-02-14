
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;



__attribute__((used)) static size_t
FUNC_0(const wchar_t *VAR_0, size_t VAR_1)
{
 size_t VAR_2 = 0;

 while (VAR_2 < VAR_1 && *VAR_0++ == ' ')
  ++VAR_2;
 return VAR_2;
}
