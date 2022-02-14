
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* UserName; int TargetName; } ;
typedef int LPCWSTR ;
typedef TYPE_1__ CREDENTIALW ;


 char* VAR_0 ;
 scalar_t__ FUNC_0 (int *,char*,char*) ;
 scalar_t__ FUNC_1 (int *,scalar_t__,char*) ;
 char* VAR_1 ;
 char* VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__,char*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_3(const CREDENTIALW *VAR_4)
{
 LPCWSTR VAR_5 = VAR_4->TargetName;
 if (VAR_3 && FUNC_2(VAR_3, VAR_4->UserName ? VAR_4->UserName : L""))
  return 0;

 return FUNC_0(&VAR_5, L"git", L":") &&
  FUNC_0(&VAR_5, VAR_2, L"://") &&
  FUNC_1(&VAR_5, VAR_3, L"@") &&
  FUNC_0(&VAR_5, VAR_0, L"/") &&
  FUNC_0(&VAR_5, VAR_1, L"");
}
