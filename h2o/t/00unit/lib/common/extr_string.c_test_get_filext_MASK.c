
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * base; int len; } ;
typedef TYPE_1__ h2o_iovec_t ;


 int FUNC_0 (char*) ;
 TYPE_1__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(void)
{
    h2o_iovec_t VAR_0;

    VAR_0 = FUNC_1(FUNC_0("/abc.txt"));
    FUNC_3(FUNC_2(VAR_0.base, VAR_0.len, FUNC_0("txt")));
    VAR_0 = FUNC_1(FUNC_0("/abc.txt.gz"));
    FUNC_3(FUNC_2(VAR_0.base, VAR_0.len, FUNC_0("gz")));
    VAR_0 = FUNC_1(FUNC_0("/abc."));
    FUNC_3(FUNC_2(VAR_0.base, VAR_0.len, FUNC_0("")));
    VAR_0 = FUNC_1(FUNC_0("/abc"));
    FUNC_3(VAR_0.base == ((void*)0));
    VAR_0 = FUNC_1(FUNC_0("/abc.def/abc"));
    FUNC_3(VAR_0.base == ((void*)0));
    VAR_0 = FUNC_1(FUNC_0("/abc.def/"));
    FUNC_3(VAR_0.base == ((void*)0));
}
