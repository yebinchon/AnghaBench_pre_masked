
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int sbuf_small ;
typedef int ptls_t ;
typedef int ptls_key_exchange_algorithm_t ;
struct TYPE_12__ {TYPE_1__** key_exchanges; int member_3; int ** member_2; int * member_1; int member_0; } ;
typedef TYPE_2__ ptls_context_t ;
struct TYPE_13__ {size_t off; int* base; } ;
typedef TYPE_3__ ptls_buffer_t ;
typedef int decbuf_small ;
typedef int cbuf_small ;
struct TYPE_11__ {scalar_t__ id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_2__* VAR_2 ;
 scalar_t__ FUNC_1 (int*,char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int *,int) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int FUNC_6 (int *,TYPE_3__*,int*,size_t*,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (int *,TYPE_3__*,int*,size_t*) ;
 int FUNC_9 (int *,TYPE_3__*,char*,int) ;

__attribute__((used)) static void FUNC_10(void)
{
    ptls_key_exchange_algorithm_t *VAR_8[] = {&VAR_7, &VAR_6, ((void*)0)};
    ptls_context_t VAR_9 = {VAR_5, VAR_3, VAR_8, &VAR_4};
    ptls_t *VAR_10, *VAR_11;
    ptls_buffer_t VAR_12, VAR_13, VAR_14;
    uint8_t VAR_15[16384], VAR_16[16384], VAR_17[16384];
    size_t VAR_18;
    int VAR_19;

    FUNC_0(VAR_2->key_exchanges[0] != ((void*)0) && VAR_2->key_exchanges[0]->id == VAR_1);
    FUNC_0(VAR_2->key_exchanges[1] == ((void*)0));

    VAR_10 = FUNC_7(&VAR_9, 0);
    VAR_11 = FUNC_7(VAR_2, 1);
    FUNC_4(&VAR_12, VAR_15, sizeof(VAR_15));
    FUNC_4(&VAR_13, VAR_16, sizeof(VAR_16));
    FUNC_4(&VAR_14, VAR_17, sizeof(VAR_17));

    VAR_19 = FUNC_6(VAR_10, &VAR_12, ((void*)0), ((void*)0), ((void*)0));
    FUNC_2(VAR_19 == VAR_0);

    VAR_18 = VAR_12.off;
    VAR_19 = FUNC_6(VAR_11, &VAR_13, VAR_12.base, &VAR_18, ((void*)0));
    FUNC_2(VAR_19 == VAR_0);
    FUNC_2(VAR_18 == VAR_12.off);
    VAR_12.off = 0;

    FUNC_2(VAR_13.off > 5 + 4);
    FUNC_2(VAR_13.base[5] == 2 );

    VAR_18 = VAR_13.off;
    VAR_19 = FUNC_6(VAR_10, &VAR_12, VAR_13.base, &VAR_18, ((void*)0));
    FUNC_2(VAR_19 == VAR_0);
    FUNC_2(VAR_18 == VAR_13.off);
    VAR_13.off = 0;

    FUNC_2(VAR_12.off >= 5 + 4);
    FUNC_2(VAR_12.base[5] == 1 );

    VAR_18 = VAR_12.off;
    VAR_19 = FUNC_6(VAR_11, &VAR_13, VAR_12.base, &VAR_18, ((void*)0));
    FUNC_2(VAR_19 == 0);
    FUNC_2(VAR_18 == VAR_12.off);
    VAR_12.off = 0;

    FUNC_2(VAR_13.off >= 5 + 4);
    FUNC_2(VAR_13.base[5] == 2 );

    VAR_18 = VAR_13.off;
    VAR_19 = FUNC_6(VAR_10, &VAR_12, VAR_13.base, &VAR_18, ((void*)0));
    FUNC_2(VAR_19 == 0);
    FUNC_2(VAR_18 == VAR_13.off);
    VAR_13.off = 0;

    VAR_19 = FUNC_9(VAR_10, &VAR_12, "hello world", 11);
    FUNC_2(VAR_19 == 0);

    VAR_18 = VAR_12.off;
    VAR_19 = FUNC_8(VAR_11, &VAR_14, VAR_12.base, &VAR_18);
    FUNC_2(VAR_19 == 0);
    FUNC_2(VAR_18 == VAR_12.off);
    VAR_12.off = 0;

    FUNC_2(VAR_14.off == 11);
    FUNC_2(FUNC_1(VAR_14.base, "hello world", 11) == 0);

    FUNC_3(&VAR_14);
    FUNC_3(&VAR_13);
    FUNC_3(&VAR_12);
    FUNC_5(VAR_10);
    FUNC_5(VAR_11);
}
