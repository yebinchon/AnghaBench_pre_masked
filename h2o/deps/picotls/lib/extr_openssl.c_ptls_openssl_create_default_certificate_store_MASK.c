
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_STORE ;
typedef int X509_LOOKUP ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *,int ) ;
 int * FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 () ;

X509_STORE *FUNC_7(void)
{
    X509_STORE *VAR_1;
    X509_LOOKUP *VAR_2;

    if ((VAR_1 = FUNC_6()) == ((void*)0))
        goto Error;
    if ((VAR_2 = FUNC_4(VAR_1, FUNC_1())) == ((void*)0))
        goto Error;
    FUNC_3(VAR_2, ((void*)0), VAR_0);
    if ((VAR_2 = FUNC_4(VAR_1, FUNC_2())) == ((void*)0))
        goto Error;
    FUNC_0(VAR_2, ((void*)0), VAR_0);

    return VAR_1;
Error:
    if (VAR_1 != ((void*)0))
        FUNC_5(VAR_1);
    return ((void*)0);
}
