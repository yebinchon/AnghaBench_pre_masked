
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int size; } ;
struct TYPE_7__ {TYPE_1__ keys; } ;
typedef TYPE_2__ h2o_http2_casper_t ;


 int FUNC_0 (char*) ;
 TYPE_2__* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(void)
{
    h2o_http2_casper_t *VAR_0;
    VAR_0 = FUNC_1(13, 6);

    FUNC_4(FUNC_3(VAR_0, FUNC_0("/index.html"), 0) == 0);
    FUNC_4(FUNC_3(VAR_0, FUNC_0("/index.html"), 1) == 0);
    FUNC_4(VAR_0->keys.size == 1);
    FUNC_4(FUNC_3(VAR_0, FUNC_0("/index.html"), 0) == 1);
    FUNC_4(FUNC_3(VAR_0, FUNC_0("/index.html"), 1) == 1);
    FUNC_4(VAR_0->keys.size == 1);

    FUNC_2(VAR_0);
}
