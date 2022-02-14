
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int Type; int TargetName; } ;
typedef int DWORD ;
typedef TYPE_1__ CREDENTIALW ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char*,int ,int*,TYPE_1__***) ;
 int FUNC_2 (TYPE_1__**) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(void)
{
 CREDENTIALW **VAR_0;
 DWORD VAR_1;
 int VAR_2;

 if (!FUNC_1(L"git:*", 0, &VAR_1, &VAR_0))
  return;

 for (VAR_2 = 0; VAR_2 < VAR_1; ++VAR_2) {
  if (FUNC_3(VAR_0[VAR_2]))
   FUNC_0(VAR_0[VAR_2]->TargetName, VAR_0[VAR_2]->Type, 0);
 }

 FUNC_2(VAR_0);
}
