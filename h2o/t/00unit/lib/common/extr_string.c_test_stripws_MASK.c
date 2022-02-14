
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int base; } ;
typedef TYPE_1__ h2o_iovec_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int ) ;
 TYPE_1__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(void)
{
    h2o_iovec_t VAR_0;

    VAR_0 = FUNC_2(FUNC_0(""));
    FUNC_3(FUNC_1(VAR_0.base, VAR_0.len, FUNC_0("")));
    VAR_0 = FUNC_2(FUNC_0("hello world"));
    FUNC_3(FUNC_1(VAR_0.base, VAR_0.len, FUNC_0("hello world")));
    VAR_0 = FUNC_2(FUNC_0("   hello world"));
    FUNC_3(FUNC_1(VAR_0.base, VAR_0.len, FUNC_0("hello world")));
    VAR_0 = FUNC_2(FUNC_0("hello world   "));
    FUNC_3(FUNC_1(VAR_0.base, VAR_0.len, FUNC_0("hello world")));
    VAR_0 = FUNC_2(FUNC_0("   hello world   "));
    FUNC_3(FUNC_1(VAR_0.base, VAR_0.len, FUNC_0("hello world")));
    VAR_0 = FUNC_2(FUNC_0("     "));
    FUNC_3(FUNC_1(VAR_0.base, VAR_0.len, FUNC_0("")));
}
