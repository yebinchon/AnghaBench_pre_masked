
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_10__ {int member_0; } ;
typedef TYPE_2__ h2o_iovec_t ;
typedef int h2o_cache_t ;
struct TYPE_9__ {int len; int base; } ;
struct TYPE_11__ {TYPE_1__ value; } ;
typedef TYPE_3__ h2o_cache_ref_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int * FUNC_1 (int ,int,int,int ) ;
 int FUNC_2 (int *,int,TYPE_2__,int ) ;
 int FUNC_3 (int *) ;
 TYPE_3__* FUNC_4 (int *,int,TYPE_2__,int ) ;
 int FUNC_5 (int *,TYPE_3__*) ;
 int FUNC_6 (int *,int,TYPE_2__,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int) ;
 int VAR_2 ;

void FUNC_10(void)
{
    h2o_cache_t *VAR_3 = FUNC_1(VAR_0, 1024, 1000, VAR_2);
    uint64_t VAR_4 = 0;
    h2o_iovec_t VAR_5 = {FUNC_0("key")};
    h2o_cache_ref_t *VAR_6;


    VAR_6 = FUNC_4(VAR_3, VAR_4, VAR_5, 0);
    FUNC_9(VAR_6 == ((void*)0));


    FUNC_6(VAR_3, VAR_4, VAR_5, 0, FUNC_7(FUNC_0("value")));


    FUNC_2(VAR_3, VAR_4, VAR_5, 0);
    VAR_6 = FUNC_4(VAR_3, VAR_4, VAR_5, 0);
    FUNC_9(VAR_6 == ((void*)0));


    FUNC_6(VAR_3, VAR_4, VAR_5, 0, FUNC_7(FUNC_0("value")));


    VAR_6 = FUNC_4(VAR_3, VAR_4, VAR_5, 0);
    FUNC_9(FUNC_8(VAR_6->value.base, VAR_6->value.len, FUNC_0("value")));
    FUNC_5(VAR_3, VAR_6);


    VAR_4 += 999;


    VAR_6 = FUNC_4(VAR_3, VAR_4, VAR_5, 0);
    FUNC_9(VAR_6 == ((void*)0));


    VAR_6 = FUNC_4(VAR_3, VAR_4, VAR_5, 0);
    FUNC_9(FUNC_8(VAR_6->value.base, VAR_6->value.len, FUNC_0("value")));
    FUNC_5(VAR_3, VAR_6);


    FUNC_6(VAR_3, VAR_4, VAR_5, 0, FUNC_7(FUNC_0("value2")));


    VAR_6 = FUNC_4(VAR_3, VAR_4, VAR_5, 0);
    FUNC_9(FUNC_8(VAR_6->value.base, VAR_6->value.len, FUNC_0("value2")));
    FUNC_5(VAR_3, VAR_6);

    FUNC_9(VAR_1 == 10);

    FUNC_3(VAR_3);

    FUNC_9(VAR_1 == 16);
}
