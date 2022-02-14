
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_1 ;
 int* FUNC_2 (size_t) ;
 size_t FUNC_3 (int*,char const*,size_t) ;
 int FUNC_4 (int) ;

__attribute__((used)) static wchar_t *
FUNC_5(const char *VAR_2)
{
 size_t VAR_3;
 wchar_t *VAR_4, *VAR_5;

 if ((VAR_3 = FUNC_3(((void*)0), VAR_2, 0)) == (size_t)-1)
  return (((void*)0));
 if (VAR_0 / sizeof(*VAR_4) < VAR_3 + 1)
  FUNC_1(1, "conversion buffer length overflow");
 if ((VAR_4 = FUNC_2((VAR_3 + 1) * sizeof(*VAR_4))) == ((void*)0))
  FUNC_0(1, "malloc");
 if (FUNC_3(VAR_4, VAR_2, VAR_3 + 1) != VAR_3)
  FUNC_1(1, "internal mbstowcs() error");

 if (VAR_1) {
  for (VAR_5 = VAR_4; *VAR_5 != L'\0'; VAR_5++)
   *VAR_5 = FUNC_4(*VAR_5);
 }

 return (VAR_4);
}
