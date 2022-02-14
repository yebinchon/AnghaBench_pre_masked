
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ WRes ;
struct TYPE_4__ {char* cFileName; int dwFileAttributes; } ;
typedef TYPE_1__ WIN32_FIND_DATAW ;
typedef int WCHAR ;
typedef scalar_t__ HANDLE ;


 scalar_t__ FUNC_0 (int*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int*,TYPE_1__*) ;
 int FUNC_3 (scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int*) ;
 int FUNC_6 (int*,int ) ;
 int VAR_3 ;
 int FUNC_7 (int*,int ) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 int FUNC_9 (int*,char*) ;
 size_t FUNC_10 (int*) ;

__attribute__((used)) static WRes FUNC_11(WCHAR *VAR_4)
{
  WIN32_FIND_DATAW VAR_5;
  HANDLE VAR_6;
  WRes VAR_7 = 0;
  size_t VAR_8 = FUNC_10(VAR_4);
  FUNC_9(VAR_4 + VAR_8, L"*");
  VAR_6 = FUNC_2(VAR_4, &VAR_5);
  VAR_4[VAR_8] = L'\0';
  if (VAR_6 == VAR_2)
    return FUNC_4();

  for (;;)
  {
    if (FUNC_8(VAR_5.cFileName, L".") != 0 &&
        FUNC_8(VAR_5.cFileName, L"..") != 0)
    {
      FUNC_9(VAR_4 + VAR_8, VAR_5.cFileName);
      if ((VAR_5.dwFileAttributes & VAR_1) != 0)
      {
        FUNC_7(VAR_4, VAR_3);
        VAR_7 = FUNC_11(VAR_4);
      }
      else
      {
        FUNC_6(VAR_4, 0);
        if (FUNC_0(VAR_4) == 0)
          VAR_7 = FUNC_4();
      }

      if (VAR_7 != 0)
        break;
    }

    if (!FUNC_3(VAR_6, &VAR_5))
    {
      VAR_7 = FUNC_4();
      if (VAR_7 == VAR_0)
        VAR_7 = 0;
      break;
    }
  }

  VAR_4[VAR_8] = L'\0';
  FUNC_1(VAR_6);
  if (VAR_7 == 0)
  {
    if (!FUNC_5(VAR_4))
      VAR_7 = FUNC_4();
  }
  return VAR_7;
}
