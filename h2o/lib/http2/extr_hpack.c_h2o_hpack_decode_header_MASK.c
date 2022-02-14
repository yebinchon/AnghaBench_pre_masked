
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_11__ ;


typedef int uint8_t ;
struct st_h2o_hpack_header_table_entry_t {char* err_desc; TYPE_2__* value; TYPE_2__* name; } ;
typedef scalar_t__ int64_t ;
struct TYPE_17__ {int buf; } ;
typedef TYPE_1__ h2o_token_t ;
typedef int h2o_mem_pool_t ;
struct TYPE_18__ {scalar_t__ len; int base; } ;
typedef TYPE_2__ h2o_iovec_t ;
struct TYPE_19__ {scalar_t__ hpack_max_capacity; size_t hpack_capacity; scalar_t__ num_entries; size_t hpack_size; } ;
typedef TYPE_3__ h2o_hpack_header_table_t ;
struct TYPE_16__ {int value; scalar_t__ name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_0 (int *,int const** const,int const*,int,char const**) ;
 scalar_t__ FUNC_1 (int const** const,int const*,int) ;
 char const* VAR_6 ;
 struct st_h2o_hpack_header_table_entry_t* FUNC_2 (TYPE_3__*,scalar_t__) ;
 TYPE_11__* VAR_7 ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_1__* FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *,TYPE_2__*) ;
 struct st_h2o_hpack_header_table_entry_t* FUNC_7 (TYPE_3__*,scalar_t__,int ) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_2__*) ;

int FUNC_10(h2o_mem_pool_t *VAR_8, void *VAR_9, h2o_iovec_t **VAR_10, h2o_iovec_t *VAR_11,
                            const uint8_t **const VAR_12, const uint8_t *VAR_13, const char **VAR_14)
{
    h2o_hpack_header_table_t *VAR_15 = VAR_9;
    h2o_iovec_t *VAR_16 = ((void*)0), *VAR_17 = ((void*)0);
    int64_t VAR_18 = 0;
    int VAR_19 = 0, VAR_20 = 0;

Redo:
    if (*VAR_12 >= VAR_13)
        return VAR_0;


    if (**VAR_12 >= 128) {

        if ((VAR_18 = FUNC_1(VAR_12, VAR_13, 7)) <= 0)
            return VAR_0;
        VAR_19 = 1;
    } else if (**VAR_12 >= 64) {

        if (**VAR_12 == 64) {
            ++*VAR_12;
        } else if ((VAR_18 = FUNC_1(VAR_12, VAR_13, 6)) <= 0) {
            return VAR_0;
        }
        VAR_20 = 1;
    } else if (**VAR_12 < 32) {

        if ((**VAR_12 & 0xf) == 0) {
            ++*VAR_12;
        } else if ((VAR_18 = FUNC_1(VAR_12, VAR_13, 4)) <= 0) {
            return VAR_0;
        }
    } else {

        int64_t VAR_21;
        if ((VAR_21 = FUNC_1(VAR_12, VAR_13, 5)) < 0) {
            return VAR_0;
        }
        if (VAR_21 > VAR_15->hpack_max_capacity) {
            return VAR_0;
        }
        VAR_15->hpack_capacity = (size_t)VAR_21;
        while (VAR_15->num_entries != 0 && VAR_15->hpack_size > VAR_15->hpack_capacity) {
            FUNC_8(VAR_15);
        }
        goto Redo;
    }


    if (VAR_18 > 0) {

        if (VAR_18 < VAR_4) {
            VAR_16 = (h2o_iovec_t *)VAR_7[VAR_18 - 1].name;
            if (VAR_19)
                VAR_17 = (h2o_iovec_t *)&VAR_7[VAR_18 - 1].value;
        } else if (VAR_18 - VAR_4 < VAR_15->num_entries) {
            struct st_h2o_hpack_header_table_entry_t *VAR_22 =
                FUNC_2(VAR_15, VAR_18 - VAR_4);
            *VAR_14 = VAR_22->err_desc;
            VAR_16 = VAR_22->name;
            if (!FUNC_3(VAR_16))
                FUNC_6(VAR_8, VAR_16);
            if (VAR_19) {
                VAR_17 = VAR_22->value;
                FUNC_6(VAR_8, VAR_17);
            }
        } else {
            return VAR_0;
        }
    } else {

        const h2o_token_t *VAR_23;
        if ((VAR_16 = FUNC_0(VAR_8, VAR_12, VAR_13, 1, VAR_14)) == ((void*)0)) {
            if (*VAR_14 == VAR_6)
                return VAR_2;
            return VAR_0;
        }
        if (*VAR_14 == ((void*)0)) {

            if ((VAR_23 = FUNC_4(VAR_16->base, VAR_16->len)) != ((void*)0))
                VAR_16 = (h2o_iovec_t *)&VAR_23->buf;
        }
    }


    if (!VAR_19) {
        if ((VAR_17 = FUNC_0(VAR_8, VAR_12, VAR_13, 0, VAR_14)) == ((void*)0))
            return VAR_0;
    }


    if (VAR_20) {
        struct st_h2o_hpack_header_table_entry_t *VAR_24 =
            FUNC_7(VAR_15, VAR_16->len + VAR_17->len + VAR_3, VAR_5);
        if (VAR_24 != ((void*)0)) {
            VAR_24->err_desc = *VAR_14;
            VAR_24->name = VAR_16;
            if (!FUNC_3(VAR_24->name))
                FUNC_5(VAR_24->name);
            VAR_24->value = VAR_17;
            if (!FUNC_9(VAR_24->value))
                FUNC_5(VAR_24->value);
        }
    }

    *VAR_10 = VAR_16;
    *VAR_11 = *VAR_17;
    return *VAR_14 != ((void*)0) ? VAR_1 : 0;
}
