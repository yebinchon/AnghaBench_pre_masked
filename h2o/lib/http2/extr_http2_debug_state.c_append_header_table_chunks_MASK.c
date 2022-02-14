
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int h2o_mem_pool_t ;
struct TYPE_15__ {int size; TYPE_3__* entries; } ;
typedef TYPE_4__ h2o_iovec_vector_t ;
struct TYPE_16__ {int num_entries; } ;
typedef TYPE_5__ h2o_hpack_header_table_t ;
struct TYPE_17__ {TYPE_2__* value; TYPE_1__* name; } ;
typedef TYPE_6__ h2o_hpack_header_table_entry_t ;
struct TYPE_14__ {int len; } ;
struct TYPE_13__ {int base; scalar_t__ len; } ;
struct TYPE_12__ {int base; scalar_t__ len; } ;


 int FUNC_0 (int *,TYPE_4__*,char*,int,int ,int,int ) ;
 TYPE_6__* FUNC_1 (TYPE_5__*,int) ;

__attribute__((used)) static void FUNC_2(h2o_mem_pool_t *VAR_0, h2o_iovec_vector_t *VAR_1, h2o_hpack_header_table_t *VAR_2)
{
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_2->num_entries; VAR_3++) {
        h2o_hpack_header_table_entry_t *VAR_4 = FUNC_1(VAR_2, VAR_3);
        FUNC_0(VAR_0, VAR_1,
                     "\n"
                     "      [ \"%.*s\", \"%.*s\" ],",
                     (int)VAR_4->name->len, VAR_4->name->base, (int)VAR_4->value->len, VAR_4->value->base);
    }

    if (VAR_3 > 0) {

        --VAR_1->entries[VAR_1->size - 1].len;
    }
}
