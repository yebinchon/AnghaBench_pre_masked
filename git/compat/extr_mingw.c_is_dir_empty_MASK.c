
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_4__ {int cFileName; } ;
typedef TYPE_1__ WIN32_FIND_DATAW ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int *,int const*) ;

__attribute__((used)) static int FUNC_7(const wchar_t *VAR_3)
{
 WIN32_FIND_DATAW VAR_4;
 HANDLE VAR_5;
 wchar_t VAR_6[VAR_2 + 2];
 FUNC_6(VAR_6, VAR_3);
 FUNC_4(VAR_6, L"\\*");
 VAR_5 = FUNC_1(VAR_6, &VAR_4);
 if (VAR_5 == VAR_1)
  return FUNC_3() == VAR_0;

 while (!FUNC_5(VAR_4.cFileName, L".") ||
   !FUNC_5(VAR_4.cFileName, L".."))
  if (!FUNC_2(VAR_5, &VAR_4)) {
   DWORD VAR_7 = FUNC_3();
   FUNC_0(VAR_5);
   return VAR_7 == VAR_0;
  }
 FUNC_0(VAR_5);
 return 0;
}
