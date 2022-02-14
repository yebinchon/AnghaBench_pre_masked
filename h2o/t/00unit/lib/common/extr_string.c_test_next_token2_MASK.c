
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* base; size_t len; } ;
typedef TYPE_1__ h2o_iovec_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 TYPE_1__ FUNC_2 (int ) ;
 int FUNC_3 (char const*,size_t,int ) ;
 char* FUNC_4 (TYPE_1__*,char,size_t*,TYPE_1__*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(void)
{
    h2o_iovec_t VAR_0, VAR_1;
    const char *VAR_2;
    size_t VAR_3;







    VAR_0 = FUNC_2(FUNC_0("public, max-age=86400, must-revalidate"));
    if ((VAR_2 = FUNC_4(&VAR_0, ',', &VAR_3, &VAR_1)) == ((void*)0)) { FUNC_5(0); return; };
    FUNC_5(FUNC_3(VAR_2, VAR_3, FUNC_0("public")));
    FUNC_5(VAR_1.base == ((void*)0));
    FUNC_5(VAR_1.len == 0);
    if ((VAR_2 = FUNC_4(&VAR_0, ',', &VAR_3, &VAR_1)) == ((void*)0)) { FUNC_5(0); return; };
    FUNC_5(FUNC_3(VAR_2, VAR_3, FUNC_0("max-age")));
    FUNC_5(FUNC_3(VAR_1.base, VAR_1.len, FUNC_0("86400")));
    if ((VAR_2 = FUNC_4(&VAR_0, ',', &VAR_3, &VAR_1)) == ((void*)0)) { FUNC_5(0); return; };
    FUNC_5(FUNC_3(VAR_2, VAR_3, FUNC_0("must-revalidate")));
    FUNC_5(VAR_1.base == ((void*)0));
    FUNC_5(VAR_1.len == 0);
    VAR_2 = FUNC_4(&VAR_0, ',', &VAR_3, &VAR_1);
    FUNC_5(VAR_2 == ((void*)0));

    VAR_0 = FUNC_2(FUNC_0("public, max-age = 86400 = c , must-revalidate="));
    if ((VAR_2 = FUNC_4(&VAR_0, ',', &VAR_3, &VAR_1)) == ((void*)0)) { FUNC_5(0); return; };
    FUNC_5(FUNC_3(VAR_2, VAR_3, FUNC_0("public")));
    FUNC_5(VAR_1.base == ((void*)0));
    FUNC_5(VAR_1.len == 0);
    if ((VAR_2 = FUNC_4(&VAR_0, ',', &VAR_3, &VAR_1)) == ((void*)0)) { FUNC_5(0); return; };
    FUNC_5(FUNC_3(VAR_2, VAR_3, FUNC_0("max-age")));
    FUNC_5(FUNC_3(VAR_1.base, VAR_1.len, FUNC_0("86400 = c")));
    if ((VAR_2 = FUNC_4(&VAR_0, ',', &VAR_3, &VAR_1)) == ((void*)0)) { FUNC_5(0); return; };
    FUNC_5(FUNC_3(VAR_2, VAR_3, FUNC_0("must-revalidate")));
    VAR_2 = FUNC_4(&VAR_0, ',', &VAR_3, &VAR_1);
    FUNC_5(FUNC_3(VAR_1.base, VAR_1.len, FUNC_0("")));


}
