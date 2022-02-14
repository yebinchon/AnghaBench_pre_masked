
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_5__ {int CredentialBlobSize; scalar_t__ CredentialBlob; scalar_t__ UserName; } ;
typedef scalar_t__ LPCWSTR ;
typedef int DWORD ;
typedef TYPE_1__ CREDENTIALW ;


 int FUNC_0 (char*,int ,int*,TYPE_1__***) ;
 int FUNC_1 (TYPE_1__**) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_5(void)
{
 CREDENTIALW **VAR_0;
 DWORD VAR_1;
 int VAR_2;

 if (!FUNC_0(L"git:*", 0, &VAR_1, &VAR_0))
  return;


 for (VAR_2 = 0; VAR_2 < VAR_1; ++VAR_2)
  if (FUNC_2(VAR_0[VAR_2])) {
   FUNC_4("username", VAR_0[VAR_2]->UserName,
    VAR_0[VAR_2]->UserName ? FUNC_3(VAR_0[VAR_2]->UserName) : 0);
   FUNC_4("password",
    (LPCWSTR)VAR_0[VAR_2]->CredentialBlob,
    VAR_0[VAR_2]->CredentialBlobSize / sizeof(WCHAR));
   break;
  }

 FUNC_1(VAR_0);
}
