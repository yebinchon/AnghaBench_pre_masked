
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int h2o_iovec_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*,size_t,int ) ;
 char* FUNC_4 (int *,char,size_t*,int *) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(void)
{
    h2o_iovec_t VAR_0;
    const char *VAR_1;
    size_t VAR_2;







    VAR_0 = FUNC_2(FUNC_0("public, max-age=86400, must-revalidate"));
    if ((VAR_1 = FUNC_4(&VAR_0, ',', &VAR_2, ((void*)0))) == ((void*)0)) { FUNC_5(0); return; };
    FUNC_5(FUNC_3(VAR_1, VAR_2, FUNC_0("public")));
    if ((VAR_1 = FUNC_4(&VAR_0, ',', &VAR_2, ((void*)0))) == ((void*)0)) { FUNC_5(0); return; };
    FUNC_5(FUNC_3(VAR_1, VAR_2, FUNC_0("max-age=86400")));
    if ((VAR_1 = FUNC_4(&VAR_0, ',', &VAR_2, ((void*)0))) == ((void*)0)) { FUNC_5(0); return; };
    FUNC_5(FUNC_3(VAR_1, VAR_2, FUNC_0("must-revalidate")));
    VAR_1 = FUNC_4(&VAR_0, ',', &VAR_2, ((void*)0));
    FUNC_5(VAR_1 == ((void*)0));

    VAR_0 = FUNC_2(FUNC_0("  public  ,max-age=86400  ,"));
    if ((VAR_1 = FUNC_4(&VAR_0, ',', &VAR_2, ((void*)0))) == ((void*)0)) { FUNC_5(0); return; };
    FUNC_5(FUNC_3(VAR_1, VAR_2, FUNC_0("public")));
    if ((VAR_1 = FUNC_4(&VAR_0, ',', &VAR_2, ((void*)0))) == ((void*)0)) { FUNC_5(0); return; };
    FUNC_5(FUNC_3(VAR_1, VAR_2, FUNC_0("max-age=86400")));
    VAR_1 = FUNC_4(&VAR_0, ',', &VAR_2, ((void*)0));
    FUNC_5(VAR_1 == ((void*)0));

    VAR_0 = FUNC_2(FUNC_0(""));
    VAR_1 = FUNC_4(&VAR_0, ',', &VAR_2, ((void*)0));
    FUNC_5(VAR_1 == ((void*)0));

    VAR_0 = FUNC_2(FUNC_0(", ,a, "));
    if ((VAR_1 = FUNC_4(&VAR_0, ',', &VAR_2, ((void*)0))) == ((void*)0)) { FUNC_5(0); return; };
    FUNC_5(VAR_2 == 0);
    if ((VAR_1 = FUNC_4(&VAR_0, ',', &VAR_2, ((void*)0))) == ((void*)0)) { FUNC_5(0); return; };
    FUNC_5(VAR_2 == 0);
    if ((VAR_1 = FUNC_4(&VAR_0, ',', &VAR_2, ((void*)0))) == ((void*)0)) { FUNC_5(0); return; };
    FUNC_5(FUNC_3(VAR_1, VAR_2, FUNC_0("a")));
    VAR_1 = FUNC_4(&VAR_0, ',', &VAR_2, ((void*)0));
    FUNC_5(VAR_1 == ((void*)0));


}
