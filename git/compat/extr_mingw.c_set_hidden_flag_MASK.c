
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int const*,int) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(const wchar_t *VAR_2, int VAR_3)
{
 DWORD VAR_4 = FUNC_0(VAR_2), VAR_5;
 if (VAR_3)
  VAR_5 = VAR_4 | VAR_0;
 else
  VAR_5 = VAR_4 & ~VAR_0;
 if (VAR_4 == VAR_5 || FUNC_2(VAR_2, VAR_5))
  return 0;
 VAR_1 = FUNC_3(FUNC_1());
 return -1;
}
