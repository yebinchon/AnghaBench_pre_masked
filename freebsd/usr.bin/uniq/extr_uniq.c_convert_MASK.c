
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int*) ;
 scalar_t__ VAR_1 ;
 int* FUNC_3 (size_t) ;
 size_t FUNC_4 (int*,char const*,size_t) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int*) ;
 int FUNC_6 (int) ;
 int* FUNC_7 (int ) ;

__attribute__((used)) static wchar_t *
FUNC_8(const char *VAR_4)
{
 size_t VAR_5;
 wchar_t *VAR_6, *VAR_7, *VAR_8;

 if ((VAR_5 = FUNC_4(((void*)0), VAR_4, 0)) == (size_t)-1)
  return (((void*)0));
 if (VAR_0 / sizeof(*VAR_6) < VAR_5 + 1)
  FUNC_1(1, "conversion buffer length overflow");
 if ((VAR_6 = FUNC_3((VAR_5 + 1) * sizeof(*VAR_6))) == ((void*)0))
  FUNC_0(1, "malloc");
 if (FUNC_4(VAR_6, VAR_4, VAR_5 + 1) != VAR_5)
  FUNC_1(1, "internal mbstowcs() error");

 if (VAR_5 > 0 && VAR_6[VAR_5 - 1] == L'\n')
  VAR_6[VAR_5 - 1] = L'\0';


 if (VAR_3 || VAR_2) {
  if ((VAR_7 = FUNC_7(FUNC_5(VAR_6))) == ((void*)0))
   FUNC_0(1, "wcsdup");
  FUNC_2(VAR_6);
 } else
  VAR_7 = VAR_6;

 if (VAR_1) {
  for (VAR_8 = VAR_7; *VAR_8 != L'\0'; VAR_8++)
   *VAR_8 = FUNC_6(*VAR_8);
 }

 return (VAR_7);
}
