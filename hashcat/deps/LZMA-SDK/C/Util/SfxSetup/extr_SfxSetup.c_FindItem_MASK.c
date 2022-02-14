
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int wchar_t ;
typedef unsigned int Byte ;


 unsigned int const FUNC_0 (unsigned int) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static unsigned FUNC_2(const char * const *VAR_0, unsigned VAR_1, const wchar_t *VAR_2, unsigned VAR_3)
{
  unsigned VAR_4;
  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  {
    const char *VAR_5 = VAR_0[VAR_4];
    unsigned VAR_6 = (unsigned)FUNC_1(VAR_5);
    unsigned VAR_7;
    if (VAR_3 != VAR_6)
      continue;
    for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
    {
      unsigned VAR_8 = (Byte)VAR_5[VAR_7];
      if (VAR_8 != VAR_2[VAR_7] && FUNC_0(VAR_8) != VAR_2[VAR_7])
        break;
    }
    if (VAR_7 == VAR_3)
      return VAR_4;
  }
  return VAR_4;
}
