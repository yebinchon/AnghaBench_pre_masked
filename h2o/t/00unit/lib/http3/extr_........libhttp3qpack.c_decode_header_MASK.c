
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
struct st_h2o_qpack_header_t {TYPE_4__* name; int value_len; int value; } ;
struct st_h2o_qpack_decode_header_ctx_t {int base_index; TYPE_2__* qpack; } ;
struct TYPE_14__ {int * base; } ;
struct TYPE_13__ {TYPE_1__* name; TYPE_4__ value; } ;
typedef TYPE_3__ h2o_qpack_static_table_entry_t ;
typedef int h2o_mem_pool_t ;
typedef TYPE_4__ h2o_iovec_t ;
struct TYPE_12__ {int table; } ;
struct TYPE_11__ {int buf; } ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (int *,int const**,int const*,int,char const**) ;
 TYPE_4__ FUNC_1 (int *,int const**,int const*,char const**) ;
 TYPE_4__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,struct st_h2o_qpack_header_t*) ;
 struct st_h2o_qpack_header_t* FUNC_4 (int *,int ,int const**,int const*,int,char const**) ;
 struct st_h2o_qpack_header_t* FUNC_5 (int *,int ,int const**,int const*,int,char const**) ;
 TYPE_3__* FUNC_6 (int const**,int const*,int,char const**) ;

__attribute__((used)) static int FUNC_7(h2o_mem_pool_t *VAR_1, void *VAR_2, h2o_iovec_t **VAR_3, h2o_iovec_t *VAR_4, const uint8_t **VAR_5,
                         const uint8_t *VAR_6, const char **VAR_7)
{
    struct st_h2o_qpack_decode_header_ctx_t *VAR_8 = VAR_2;

    switch (**VAR_5 >> 4) {
    case 12:
    case 13:
    case 14:
    case 15: {
        const h2o_qpack_static_table_entry_t *VAR_9;
        if ((VAR_9 = FUNC_6(VAR_5, VAR_6, 6, VAR_7)) == ((void*)0))
            goto Fail;
        *VAR_3 = (h2o_iovec_t *)&VAR_9->name->buf;
        *VAR_4 = VAR_9->value;
    } break;
    case 8:
    case 9:
    case 10:
    case 11: {
        struct st_h2o_qpack_header_t *VAR_10;
        if ((VAR_10 = FUNC_4(&VAR_8->qpack->table, VAR_8->base_index, VAR_5, VAR_6, 6, VAR_7)) == ((void*)0))
            goto Fail;
        FUNC_3(VAR_1, VAR_10);
        *VAR_3 = VAR_10->name;
        *VAR_4 = FUNC_2(VAR_10->value, VAR_10->value_len);
    } break;
    case 5:
    case 7: {
        const h2o_qpack_static_table_entry_t *VAR_11;
        if ((VAR_11 = FUNC_6(VAR_5, VAR_6, 4, VAR_7)) == ((void*)0))
            goto Fail;
        *VAR_3 = (h2o_iovec_t *)&VAR_11->name->buf;
        if ((*VAR_4 = FUNC_1(VAR_1, VAR_5, VAR_6, VAR_7)).base == ((void*)0))
            goto Fail;
    } break;
    case 4:
    case 6: {
        struct st_h2o_qpack_header_t *VAR_12;
        if ((VAR_12 = FUNC_4(&VAR_8->qpack->table, VAR_8->base_index, VAR_5, VAR_6, 4, VAR_7)) == ((void*)0))
            goto Fail;
        FUNC_3(VAR_1, VAR_12);
        *VAR_3 = VAR_12->name;
        if ((*VAR_4 = FUNC_1(VAR_1, VAR_5, VAR_6, VAR_7)).base == ((void*)0))
            goto Fail;
    } break;
    case 2:
    case 3: {
        if ((*VAR_3 = FUNC_0(VAR_1, VAR_5, VAR_6, 3, VAR_7)) == ((void*)0))
            goto Fail;
        if ((*VAR_4 = FUNC_1(VAR_1, VAR_5, VAR_6, VAR_7)).base == ((void*)0))
            goto Fail;
    } break;
    case 1: {
        struct st_h2o_qpack_header_t *VAR_13;
        if ((VAR_13 = FUNC_5(&VAR_8->qpack->table, VAR_8->base_index, VAR_5, VAR_6, 4, VAR_7)) == ((void*)0))
            goto Fail;
        FUNC_3(VAR_1, VAR_13);
        *VAR_3 = VAR_13->name;
        *VAR_4 = FUNC_2(VAR_13->value, VAR_13->value_len);
    } break;
    case 0: {
        struct st_h2o_qpack_header_t *VAR_14;
        if ((VAR_14 = FUNC_5(&VAR_8->qpack->table, VAR_8->base_index, VAR_5, VAR_6, 3, VAR_7)) == ((void*)0))
            goto Fail;
        FUNC_3(VAR_1, VAR_14);
        *VAR_3 = VAR_14->name;
        if ((*VAR_4 = FUNC_1(VAR_1, VAR_5, VAR_6, VAR_7)).base == ((void*)0))
            goto Fail;
    } break;
    }

    return 0;
Fail:
    return VAR_0;
}
