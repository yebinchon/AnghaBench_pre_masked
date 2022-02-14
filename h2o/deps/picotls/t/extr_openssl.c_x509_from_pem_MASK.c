
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (void*,int) ;
 int * FUNC_2 (int *,int *,int *,int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char const*) ;

__attribute__((used)) static X509 *FUNC_5(const char *VAR_0)
{
    BIO *VAR_1 = FUNC_1((void *)VAR_0, (int)FUNC_4(VAR_0));
    X509 *VAR_2 = FUNC_2(VAR_1, ((void*)0), ((void*)0), ((void*)0));
    FUNC_3(VAR_2 != ((void*)0) && "failed to load certificate");
    FUNC_0(VAR_1);
    return VAR_2;
}
