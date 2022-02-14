
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_STORE ;
typedef int X509_LOOKUP ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,char const*,int ) ;
 int * FUNC_2 (int *,int ) ;
 int * FUNC_3 () ;
 int FUNC_4 (int ,char*,char const*,int) ;
 int VAR_1 ;

X509_STORE * FUNC_5(char const * VAR_2)
{
    int VAR_3 = 0;
    X509_STORE *VAR_4 = FUNC_3();

    if (VAR_4 != ((void*)0)) {
        X509_LOOKUP *VAR_5 = FUNC_2(VAR_4, FUNC_0());
        VAR_3 = FUNC_1(VAR_5, VAR_2, VAR_0);
        if (VAR_3 != 1) {
            FUNC_4(VAR_1, "Cannot load store (%s), ret = %d\n",
                VAR_2, VAR_3);
        }
    }

    return VAR_4;
}
