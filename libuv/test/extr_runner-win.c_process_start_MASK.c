
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int si ;
struct TYPE_7__ {char* name; int process; scalar_t__ stdio_out; scalar_t__ stdio_in; } ;
typedef TYPE_1__ process_info_t ;
typedef int path ;
typedef int image ;
typedef int args ;
typedef int WCHAR ;
struct TYPE_9__ {scalar_t__ hThread; int hProcess; } ;
struct TYPE_8__ {int cb; scalar_t__ hStdError; scalar_t__ hStdOutput; scalar_t__ hStdInput; int dwFlags; } ;
typedef TYPE_2__ STARTUPINFOW ;
typedef TYPE_3__ PROCESS_INFORMATION ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int,int,int *,int ,int ,int *) ;
 scalar_t__ FUNC_2 (int *,int,int ,int *,int ,int,int *) ;
 int FUNC_3 (int *,int *,int *,int *,int ,int ,int *,int *,TYPE_2__*,TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int *,int *,int) ;
 scalar_t__ FUNC_5 (int *,char*,int ,int *) ;
 scalar_t__ FUNC_6 (int,int *) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (scalar_t__,int ,int ) ;
 int VAR_13 ;
 scalar_t__ FUNC_8 (int *,int,char*,int *,char*,...) ;
 int FUNC_9 (void*,int ,int) ;
 int FUNC_10 (int) ;

int FUNC_11(char *VAR_14, char *VAR_15, process_info_t *VAR_16, int VAR_17) {
  HANDLE VAR_18 = VAR_9;
  HANDLE VAR_19 = VAR_9;
  WCHAR VAR_20[VAR_10], VAR_21[VAR_10];
  WCHAR VAR_22[VAR_10 + 1];
  WCHAR VAR_23[VAR_10 * 2];
  STARTUPINFOW VAR_24;
  PROCESS_INFORMATION VAR_25;
  DWORD VAR_26;

  if (!VAR_17) {

    FUNC_10(250);
  }

  if (FUNC_6(sizeof(VAR_20) / sizeof(WCHAR), (WCHAR*)&VAR_20) == 0)
    goto error;
  if (FUNC_5((WCHAR*)&VAR_20, L"uv", 0, (WCHAR*)&VAR_21) == 0)
    goto error;

  VAR_18 = FUNC_2((WCHAR*)VAR_21,
                     VAR_6 | VAR_7,
                     0,
                     ((void*)0),
                     VAR_0,
                     VAR_2 | VAR_3,
                     ((void*)0));
  if (VAR_18 == VAR_9)
    goto error;

  if (!FUNC_7(VAR_18, VAR_8, VAR_8))
    goto error;

  VAR_19 = FUNC_1("nul",
                    VAR_6,
                    VAR_4 | VAR_5,
                    ((void*)0),
                    VAR_11,
                    VAR_1,
                    ((void*)0));
  if (VAR_19 == VAR_9)
    goto error;

  if (!FUNC_7(VAR_19, VAR_8, VAR_8))
    goto error;

  VAR_26 = FUNC_4(((void*)0),
                              (WCHAR*) &VAR_22,
                              sizeof(VAR_22) / sizeof(WCHAR));
  if (VAR_26 == 0 || VAR_26 == sizeof(VAR_22))
    goto error;

  if (VAR_15) {
    if (FUNC_8((WCHAR*)VAR_23,
                   sizeof(VAR_23) / sizeof(WCHAR),
                   L"\"%s\" %S %S",
                   VAR_22,
                   VAR_14,
                   VAR_15) < 0) {
      goto error;
    }
  } else {
    if (FUNC_8((WCHAR*)VAR_23,
                   sizeof(VAR_23) / sizeof(WCHAR),
                   L"\"%s\" %S",
                   VAR_22,
                   VAR_14) < 0) {
      goto error;
    }
  }

  FUNC_9((void*)&VAR_24, 0, sizeof(VAR_24));
  VAR_24.cb = sizeof(VAR_24);
  VAR_24.dwFlags = VAR_12;
  VAR_24.hStdInput = VAR_19;
  VAR_24.hStdOutput = VAR_18;
  VAR_24.hStdError = VAR_18;

  if (!FUNC_3(VAR_22, VAR_23, ((void*)0), ((void*)0), VAR_13,
                      0, ((void*)0), ((void*)0), &VAR_24, &VAR_25))
    goto error;

  FUNC_0(VAR_25.hThread);

  FUNC_7(VAR_19, VAR_8, 0);
  FUNC_7(VAR_18, VAR_8, 0);

  VAR_16->stdio_in = VAR_19;
  VAR_16->stdio_out = VAR_18;
  VAR_16->process = VAR_25.hProcess;
  VAR_16->name = VAR_15;

  return 0;

error:
  if (VAR_18 != VAR_9)
    FUNC_0(VAR_18);
  if (VAR_19 != VAR_9)
    FUNC_0(VAR_19);

  return -1;
}
