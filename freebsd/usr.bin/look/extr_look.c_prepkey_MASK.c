
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int,int ,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 int* FUNC_3 (int) ;
 size_t FUNC_4 (int*,char const*,int ,int *) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int) ;
 int* FUNC_7 (int*,int) ;

__attribute__((used)) static wchar_t *
FUNC_8(const char *VAR_4, wchar_t VAR_5)
{
 const char *VAR_6;
 wchar_t *VAR_7, *VAR_8;
 wchar_t VAR_9;
 size_t VAR_10;





 if ((VAR_7 = FUNC_3(sizeof(wchar_t) * (FUNC_5(VAR_4) + 1))) == ((void*)0))
  FUNC_0(2, ((void*)0));
 VAR_6 = VAR_4;
 VAR_8 = VAR_7;
 while ((VAR_10 = FUNC_4(&VAR_9, VAR_6, VAR_1, ((void*)0))) != 0) {
  if (VAR_10 == (size_t)-1 || VAR_10 == (size_t)-2)
   FUNC_1(2, VAR_0, ((void*)0));
  if (VAR_3)
   VAR_9 = FUNC_6(VAR_9);
  if (!VAR_2 || FUNC_2(VAR_9))
   *VAR_8++ = VAR_9;
  VAR_6 += VAR_10;
 }
 *VAR_8 = L'\0';
 if (VAR_5 != L'\0' && (VAR_8 = FUNC_7(VAR_7, VAR_5)) != ((void*)0))
  *++VAR_8 = L'\0';
 return (VAR_7);
}
