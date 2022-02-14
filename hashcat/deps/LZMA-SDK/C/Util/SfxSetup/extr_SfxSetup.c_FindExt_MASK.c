
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;


 int FUNC_0 (char const*) ;

__attribute__((used)) static unsigned FUNC_1(const wchar_t *VAR_0, unsigned *VAR_1)
{
  unsigned VAR_2 = (unsigned)FUNC_0(VAR_0);
  unsigned VAR_3;
  for (VAR_3 = VAR_2; VAR_3 > 0; VAR_3--)
  {
    if (VAR_0[VAR_3 - 1] == '.')
    {
      *VAR_1 = VAR_2 - VAR_3;
      return VAR_3 - 1;
    }
  }
  *VAR_1 = 0;
  return VAR_2;
}
