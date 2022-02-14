
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int len; int base; } ;
typedef TYPE_2__ h2o_iovec_t ;
struct TYPE_11__ {int size; } ;
struct TYPE_13__ {TYPE_1__ keys; } ;
typedef TYPE_3__ h2o_http2_casper_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;
 TYPE_3__* FUNC_3 (int,int) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_2__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int ,int) ;
 TYPE_2__ FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(void)
{
    h2o_http2_casper_t *VAR_0;

    VAR_0 = FUNC_3(13, 6);
    FUNC_6(VAR_0, FUNC_0("/index.html"), 1);
    h2o_iovec_t VAR_1 = FUNC_5(VAR_0);
    VAR_1 = FUNC_7(((void*)0), VAR_1, VAR_1);
    FUNC_4(VAR_0);

    VAR_0 = FUNC_3(13, 6);
    FUNC_6(VAR_0, FUNC_0("/index.php"), 1);
    h2o_iovec_t VAR_2 = FUNC_5(VAR_0);
    VAR_2 = FUNC_7(((void*)0), VAR_2, VAR_2);
    FUNC_4(VAR_0);

    VAR_0 = FUNC_3(13, 6);
    FUNC_2(VAR_0, VAR_1, FUNC_1(VAR_1, VAR_1));
    FUNC_2(VAR_0, VAR_1, FUNC_1(VAR_1, VAR_1));
    FUNC_8(VAR_0->keys.size == 1);
    FUNC_8(FUNC_6(VAR_0, FUNC_0("/index.html"), 0) == 1);
    FUNC_2(VAR_0, VAR_2, FUNC_1(VAR_2, VAR_2));
    FUNC_8(VAR_0->keys.size == 2);
    FUNC_8(FUNC_6(VAR_0, FUNC_0("/index.html"), 0) == 1);
    FUNC_8(FUNC_6(VAR_0, FUNC_0("/index.php"), 0) == 1);
    FUNC_4(VAR_0);
}
