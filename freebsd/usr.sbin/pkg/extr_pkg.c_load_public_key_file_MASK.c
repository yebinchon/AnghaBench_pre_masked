
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 () ;
 int VAR_0 ;
 int * FUNC_4 (int *,int *,int *,int *) ;
 int FUNC_5 (int ,char*,char const*) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static EVP_PKEY *
FUNC_7(const char *VAR_1)
{
 EVP_PKEY *VAR_2;
 BIO *VAR_3;
 char VAR_4[1024];

 VAR_3 = FUNC_1(VAR_1, "r");
 if (!VAR_3)
  FUNC_5(VAR_0, "Unable to read %s", VAR_1);

 if ((VAR_2 = FUNC_4(VAR_3, ((void*)0), ((void*)0), ((void*)0))) == ((void*)0))
  FUNC_6("ici: %s", FUNC_2(FUNC_3(), VAR_4));

 FUNC_0(VAR_3);

 return (VAR_2);
}
