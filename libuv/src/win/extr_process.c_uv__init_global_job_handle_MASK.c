
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int LimitFlags; } ;
struct TYPE_8__ {TYPE_1__ BasicLimitInformation; int bInheritHandle; } ;
typedef TYPE_2__ SECURITY_ATTRIBUTES ;
typedef TYPE_2__ JOBOBJECT_EXTENDED_LIMIT_INFORMATION ;


 int * FUNC_0 (TYPE_2__*,int *) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int ,TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int FUNC_4 (int ,char*) ;
 int * VAR_6 ;

__attribute__((used)) static void FUNC_5(void) {
  SECURITY_ATTRIBUTES VAR_7;
  JOBOBJECT_EXTENDED_LIMIT_INFORMATION VAR_8;

  FUNC_3(&VAR_7, 0, sizeof VAR_7);
  VAR_7.bInheritHandle = VAR_0;

  FUNC_3(&VAR_8, 0, sizeof VAR_8);
  VAR_8.BasicLimitInformation.LimitFlags =
      VAR_1 |
      VAR_4 |
      VAR_2 |
      VAR_3;

  VAR_6 = FUNC_0(&VAR_7, ((void*)0));
  if (VAR_6 == ((void*)0))
    FUNC_4(FUNC_1(), "CreateJobObjectW");

  if (!FUNC_2(VAR_6,
                               VAR_5,
                               &VAR_8,
                               sizeof VAR_8))
    FUNC_4(FUNC_1(), "SetInformationJobObject");
}
