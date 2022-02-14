
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_13__ ;


typedef int const uint8_t ;
typedef int int64_t ;
typedef int h2o_url_scheme_t ;
typedef int h2o_qpack_encoder_t ;
typedef int h2o_qpack_decoder_t ;
typedef int h2o_mem_pool_t ;
struct TYPE_19__ {int len; int base; int * member_0; } ;
typedef TYPE_3__ h2o_iovec_t ;
struct TYPE_20__ {int size; TYPE_13__* entries; int * member_0; } ;
typedef TYPE_4__ h2o_headers_t ;
struct TYPE_21__ {scalar_t__ size; int const* entries; int * member_0; } ;
typedef TYPE_5__ h2o_byte_vector_t ;
struct TYPE_18__ {int len; int base; } ;
struct TYPE_17__ {int len; int base; } ;
struct TYPE_16__ {TYPE_2__ value; TYPE_1__* name; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int const VAR_1 ;
 size_t VAR_2 ;
 TYPE_5__* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,TYPE_4__*,int ,int ,int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,int ) ;
 int * FUNC_8 (int,int) ;
 int * FUNC_9 (int,int) ;
 int FUNC_10 (int *,int **,size_t*,int const**,int const*,char const**) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int *,int,TYPE_5__*,TYPE_5__*,int ,int const*,int ,int ,TYPE_13__*,int) ;
 int FUNC_14 (int *,int *,int ,TYPE_3__*,int const**,TYPE_3__*,TYPE_3__*,TYPE_4__*,int*,size_t*,int *,int const*,size_t*,int const*,int,char const**) ;
 int FUNC_15 (TYPE_5__*,int ,int) ;
 int FUNC_16 (int) ;

__attribute__((used)) static void FUNC_17(int VAR_3)
{
    h2o_qpack_decoder_t *VAR_4 = FUNC_8(4096, 10);
    h2o_qpack_encoder_t *VAR_5 = FUNC_9(4096, 10);
    h2o_mem_pool_t VAR_6;
    h2o_byte_vector_t *VAR_7 = ((void*)0), VAR_8 = {((void*)0)};
    uint8_t VAR_9[VAR_0];
    size_t VAR_10;
    const char *VAR_11 = ((void*)0);
    int VAR_12;

    FUNC_6(&VAR_6);

    if (VAR_3) {
        VAR_7 = FUNC_1(sizeof(*VAR_7));
        FUNC_15(VAR_7, 0, sizeof(*VAR_7));
    }

    {
        h2o_headers_t VAR_13 = {((void*)0)};
        FUNC_3(&VAR_6, &VAR_13, FUNC_0("x-hoge"), 0, ((void*)0), FUNC_0("\x01\x02\x03"));
        FUNC_13(VAR_5, &VAR_6, 123, VAR_7, &VAR_8, FUNC_4(FUNC_0("GET")), &VAR_1,
                                  FUNC_4(FUNC_0("example.com")), FUNC_4(FUNC_0("/foobar")), VAR_13.entries,
                                  VAR_13.size);
    }

    if (VAR_7 != ((void*)0)) {
        int64_t *VAR_14;
        size_t VAR_15;
        FUNC_2(VAR_7->size != 0);
        const uint8_t *VAR_16 = VAR_7->entries;
        VAR_12 = FUNC_10(VAR_4, &VAR_14, &VAR_15, &VAR_16, VAR_16 + VAR_7->size, &VAR_11);
        FUNC_2(VAR_12 == 0);
        FUNC_2(VAR_16 == VAR_7->entries + VAR_7->size);
    }

    {
        h2o_iovec_t VAR_17 = {((void*)0)}, VAR_18 = {((void*)0)}, VAR_19 = {((void*)0)};
        const h2o_url_scheme_t *VAR_20 = ((void*)0);
        int VAR_21 = 0;
        h2o_headers_t VAR_22 = {((void*)0)};
        size_t VAR_23 = VAR_2;
        VAR_12 = FUNC_14(&VAR_6, VAR_4, 0, &VAR_17, &VAR_20, &VAR_18, &VAR_19, &VAR_22, &VAR_21,
                                      &VAR_23, ((void*)0), VAR_9, &VAR_10, VAR_8.entries, VAR_8.size,
                                      &VAR_11);
        FUNC_16(VAR_12 == 0);
        FUNC_16(FUNC_7(VAR_17.base, VAR_17.len, FUNC_0("GET")));
        FUNC_16(VAR_20 == &VAR_1);
        FUNC_16(FUNC_7(VAR_18.base, VAR_18.len, FUNC_0("example.com")));
        FUNC_16(FUNC_7(VAR_19.base, VAR_19.len, FUNC_0("/foobar")));
        FUNC_16(VAR_22.size == 1);
        FUNC_16(FUNC_7(VAR_22.entries[0].name->base, VAR_22.entries[0].name->len, FUNC_0("x-hoge")));
        FUNC_16(FUNC_7(VAR_22.entries[0].value.base, VAR_22.entries[0].value.len, FUNC_0("\x01\x02\x03")));
    }

    if (VAR_7 != ((void*)0)) {
        FUNC_16(VAR_10 != 0);
    } else {
        FUNC_16(VAR_10 == 0);
    }

    FUNC_5(&VAR_6);
    FUNC_11(VAR_4);
    FUNC_12(VAR_5);
}
