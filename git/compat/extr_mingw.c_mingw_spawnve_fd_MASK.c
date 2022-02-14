
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef char wchar_t ;
struct strbuf {int len; scalar_t__* buf; } ;
struct pinfo_t {struct pinfo_t* next; int proc; int pid; } ;
typedef int si ;
typedef int pid_t ;
typedef int pi ;
struct TYPE_6__ {int cb; scalar_t__ hThread; int dwProcessId; int hProcess; void* hStdError; void* hStdOutput; void* hStdInput; int dwFlags; } ;
typedef TYPE_1__ STARTUPINFOW ;
typedef TYPE_1__ PROCESS_INFORMATION ;
typedef scalar_t__ HANDLE ;
typedef int BOOL ;


 int FUNC_0 (char*,int ) ;
 unsigned int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char*,int ,int ,int *,int ,int ,int *) ;
 int FUNC_3 (char*,char*,int *,int *,int ,unsigned int,char*,char*,TYPE_1__*,TYPE_1__*) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 () ;
 int VAR_11 ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char const*) ;
 char* FUNC_9 (char**) ;
 int FUNC_10 (TYPE_1__*,int ,int) ;
 struct pinfo_t* VAR_12 ;
 int VAR_13 ;
 char const* FUNC_11 (char const*) ;
 char const* FUNC_12 (char const*) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (int,int) ;
 int FUNC_15 (struct strbuf*,char) ;
 int FUNC_16 (struct strbuf*,char*) ;
 int FUNC_17 (struct strbuf*,int ) ;
 int FUNC_18 (struct strbuf*) ;
 int FUNC_19 (char const*,char const*) ;
 void* FUNC_20 (int) ;
 struct pinfo_t* FUNC_21 (int) ;
 int FUNC_22 (char*,scalar_t__*,int) ;
 scalar_t__ FUNC_23 (char*,char const*) ;

__attribute__((used)) static pid_t FUNC_24(const char *VAR_14, const char **VAR_15, char **VAR_16,
         const char *VAR_17,
         int VAR_18, int VAR_19, int VAR_20, int VAR_21)
{
 STARTUPINFOW VAR_22;
 PROCESS_INFORMATION VAR_23;
 struct strbuf VAR_24;
 wchar_t VAR_25[VAR_7], VAR_26[VAR_7], *VAR_27, *VAR_28 = ((void*)0);
 unsigned VAR_29 = VAR_0;
 BOOL VAR_30;
 HANDLE VAR_31;
 const char *(*VAR_32)(const char *VAR_33) =
  FUNC_8(*VAR_15) ? FUNC_12 : FUNC_11;

 FUNC_6();


 VAR_31 = FUNC_2(L"CONOUT$", VAR_5,
   VAR_4, ((void*)0), VAR_8,
   VAR_3, ((void*)0));
 if (VAR_31 == VAR_6) {
  VAR_29 |= VAR_1;
 } else {






  FUNC_1(VAR_31);
 }
 FUNC_10(&VAR_22, 0, sizeof(VAR_22));
 VAR_22.cb = sizeof(VAR_22);
 VAR_22.dwFlags = VAR_9;
 VAR_22.hStdInput = FUNC_20(VAR_19);
 VAR_22.hStdOutput = FUNC_20(VAR_20);
 VAR_22.hStdError = FUNC_20(VAR_21);

 if (*VAR_15 && !FUNC_19(VAR_14, *VAR_15))
  VAR_25[0] = L'\0';
 else if (FUNC_23(VAR_25, VAR_14) < 0)
  return -1;
 if (VAR_17 && FUNC_23(VAR_26, VAR_17) < 0)
  return -1;


 FUNC_17(&VAR_24, 0);
 if (VAR_18) {
  char *VAR_34 = (char *)VAR_32(VAR_14);
  FUNC_16(&VAR_24, VAR_34);
  if (VAR_34 != VAR_14)
   FUNC_7(VAR_34);
 }
 for (; *VAR_15; VAR_15++) {
  char *VAR_35 = (char *)VAR_32(*VAR_15);
  if (*VAR_24.buf)
   FUNC_15(&VAR_24, ' ');
  FUNC_16(&VAR_24, VAR_35);
  if (VAR_35 != *VAR_15)
   FUNC_7(VAR_35);
 }

 FUNC_0(VAR_27, FUNC_13(FUNC_14(2, VAR_24.len), 1));
 FUNC_22(VAR_27, VAR_24.buf, 2 * VAR_24.len + 1);
 FUNC_18(&VAR_24);

 VAR_28 = FUNC_9(VAR_16);

 FUNC_10(&VAR_23, 0, sizeof(VAR_23));
 VAR_30 = FUNC_3(*VAR_25 ? VAR_25 : ((void*)0), VAR_27, ((void*)0), ((void*)0), VAR_10,
  VAR_29, VAR_28, VAR_17 ? VAR_26 : ((void*)0), &VAR_22, &VAR_23);

 FUNC_7(VAR_28);
 FUNC_7(VAR_27);

 if (!VAR_30) {
  VAR_11 = VAR_2;
  return -1;
 }
 FUNC_1(VAR_23.hThread);
 FUNC_4(&VAR_13);
 {
  struct pinfo_t *VAR_36 = FUNC_21(sizeof(struct pinfo_t));
  VAR_36->pid = VAR_23.dwProcessId;
  VAR_36->proc = VAR_23.hProcess;
  VAR_36->next = VAR_12;
  VAR_12 = VAR_36;
 }
 FUNC_5(&VAR_13);

 return (pid_t)VAR_23.dwProcessId;
}
