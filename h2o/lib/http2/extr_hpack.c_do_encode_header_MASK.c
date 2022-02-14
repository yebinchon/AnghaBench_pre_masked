
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
struct st_h2o_hpack_header_table_entry_t {TYPE_2__* value; TYPE_4__ const* name; } ;
struct TYPE_11__ {int http2_static_table_name_index; int dont_compress; } ;
struct TYPE_13__ {TYPE_1__ flags; } ;
typedef TYPE_3__ h2o_token_t ;
struct TYPE_14__ {char* base; int len; } ;
typedef TYPE_4__ const h2o_iovec_t ;
struct TYPE_15__ {size_t entry_start_index; size_t num_entries; size_t entry_capacity; struct st_h2o_hpack_header_table_entry_t* entries; } ;
typedef TYPE_5__ h2o_hpack_header_table_t ;
struct TYPE_12__ {char* base; size_t len; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 void* FUNC_0 (int *,int) ;
 int FUNC_1 (int*,char*,int) ;
 int* FUNC_2 (int*,int,int) ;
 int FUNC_3 (int*,char*,int) ;
 int FUNC_4 (TYPE_4__ const*) ;
 int FUNC_5 (char*,int,char*,size_t) ;
 struct st_h2o_hpack_header_table_entry_t* FUNC_6 (TYPE_5__*,int,int) ;
 int FUNC_7 (char*,char*,size_t) ;

__attribute__((used)) static uint8_t *FUNC_8(h2o_hpack_header_table_t *VAR_2, uint8_t *VAR_3, const h2o_iovec_t *VAR_4,
                                 const h2o_iovec_t *VAR_5, int VAR_6)
{
    int VAR_7 = FUNC_4(VAR_4);
    int VAR_8 = VAR_7 ? ((const h2o_token_t *)VAR_4)->flags.http2_static_table_name_index : 0;


    {
        size_t VAR_9 = VAR_2->entry_start_index, VAR_10;
        for (VAR_10 = VAR_2->num_entries; VAR_10 != 0; --VAR_10) {
            struct st_h2o_hpack_header_table_entry_t *VAR_11 = VAR_2->entries + VAR_9;
            if (VAR_7) {
                if (VAR_4 != VAR_11->name)
                    goto Next;
            } else {
                if (!FUNC_5(VAR_4->base, VAR_4->len, VAR_11->name->base, VAR_11->name->len))
                    goto Next;
                if (VAR_8 == 0)
                    VAR_8 = (int)(VAR_2->num_entries - VAR_10 + VAR_1);
            }

            if (!FUNC_5(VAR_5->base, VAR_5->len, VAR_11->value->base, VAR_11->value->len))
                goto Next;

            *VAR_3 = 0x80;
            VAR_3 = FUNC_2(VAR_3, VAR_2->num_entries - VAR_10 + VAR_1, 7);
            return VAR_3;
        Next:
            ++VAR_9;
            if (VAR_9 == VAR_2->entry_capacity)
                VAR_9 = 0;
        }
    }

    if (!VAR_6 && VAR_7)
        VAR_6 = ((const h2o_token_t *)VAR_4)->flags.dont_compress;
    if (VAR_6)
        VAR_6 = VAR_5->len < 20;

    if (VAR_8 != 0) {

        if (VAR_6 == 1) {

            *VAR_3 = 0x10;
            VAR_3 = FUNC_2(VAR_3, VAR_8, 4);
        } else {
            *VAR_3 = 0x40;
            VAR_3 = FUNC_2(VAR_3, VAR_8, 6);
        }
    } else {

        *VAR_3++ = 0x40;
        VAR_3 += FUNC_3(VAR_3, VAR_4->base, VAR_4->len);
    }
    if (VAR_6 == 1) {

        VAR_3 += FUNC_1(VAR_3, VAR_5->base, VAR_5->len);
    } else {



        VAR_3 += FUNC_3(VAR_3, VAR_5->base, VAR_5->len);
        struct st_h2o_hpack_header_table_entry_t *VAR_12 =
            FUNC_6(VAR_2, VAR_4->len + VAR_5->len + VAR_0, 32);
        if (VAR_12 != ((void*)0)) {
            if (VAR_7) {
                VAR_12->name = (h2o_iovec_t *)VAR_4;
            } else {
                VAR_12->name = FUNC_0(((void*)0), VAR_4->len);
                VAR_12->name->base[VAR_4->len] = '\0';
                FUNC_7(VAR_12->name->base, VAR_4->base, VAR_4->len);
            }
            VAR_12->value = FUNC_0(((void*)0), VAR_5->len);
            VAR_12->value->base[VAR_5->len] = '\0';
            FUNC_7(VAR_12->value->base, VAR_5->base, VAR_5->len);
        }
    }

    return VAR_3;
}
