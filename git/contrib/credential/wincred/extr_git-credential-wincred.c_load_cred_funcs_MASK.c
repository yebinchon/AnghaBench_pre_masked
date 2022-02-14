
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CredWriteWT ;
typedef scalar_t__ CredFreeT ;
typedef scalar_t__ CredEnumerateWT ;
typedef scalar_t__ CredDeleteWT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 int VAR_4 ;
 int FUNC_1 (char*,int *,int ) ;
 int VAR_5 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void)
{

 VAR_5 = FUNC_1("advapi32.dll", ((void*)0),
    VAR_4);
 if (!VAR_5)
  FUNC_2("failed to load advapi32.dll");


 VAR_3 = (CredWriteWT)FUNC_0(VAR_5, "CredWriteW");
 VAR_1 = (CredEnumerateWT)FUNC_0(VAR_5,
     "CredEnumerateW");
 VAR_2 = (CredFreeT)FUNC_0(VAR_5, "CredFree");
 VAR_0 = (CredDeleteWT)FUNC_0(VAR_5, "CredDeleteW");
 if (!VAR_3 || !VAR_1 || !VAR_2 || !VAR_0)
  FUNC_2("failed to load functions");
}
