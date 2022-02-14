
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ len; int * base; } ;
typedef TYPE_1__ h2o_iovec_t ;
typedef int h2o_http2_casper_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,int *,int ) ;
 int * FUNC_3 (int,int) ;
 int FUNC_4 (int *) ;
 TYPE_1__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int) ;
 TYPE_1__ FUNC_7 (int *,int *,scalar_t__) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(void)
{
    h2o_http2_casper_t *VAR_0;

    VAR_0 = FUNC_3(13, 6);

    h2o_iovec_t VAR_1 = FUNC_5(VAR_0);
    FUNC_8(VAR_1.base == ((void*)0));
    FUNC_8(VAR_1.len == 0);

    FUNC_6(VAR_0, FUNC_0("/index.html"), 1);
    VAR_1 = FUNC_5(VAR_0);
    FUNC_8(VAR_1.len != 0);
    VAR_1 = FUNC_7(((void*)0), VAR_1.base, VAR_1.len);
    FUNC_4(VAR_0);
    VAR_0 = FUNC_3(13, 6);

    FUNC_2(VAR_0, VAR_1.base, FUNC_1(VAR_1.base, VAR_1.len));
    FUNC_8(FUNC_6(VAR_0, FUNC_0("/index.html"), 0) == 1);
    FUNC_8(FUNC_6(VAR_0, FUNC_0("/index.php"), 0) == 0);
    FUNC_6(VAR_0, FUNC_0("/index.php"), 1);

    FUNC_6(VAR_0, FUNC_0("/index.html"), 1);
    VAR_1 = FUNC_5(VAR_0);
    FUNC_8(VAR_1.len != 0);
    VAR_1 = FUNC_7(((void*)0), VAR_1.base, VAR_1.len);

    FUNC_4(VAR_0);
    VAR_0 = FUNC_3(13, 6);

    FUNC_2(VAR_0, VAR_1.base, FUNC_1(VAR_1.base, VAR_1.len));
    FUNC_8(FUNC_6(VAR_0, FUNC_0("/index.html"), 0) == 1);
    FUNC_8(FUNC_6(VAR_0, FUNC_0("/index.php"), 0) == 1);

    FUNC_4(VAR_0);
}
