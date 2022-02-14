
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct st_h2o_qpack_header_t {TYPE_8__* name; } ;
typedef scalar_t__ int64_t ;
typedef int h2o_token_t ;
struct TYPE_9__ {int * name; } ;
typedef TYPE_1__ h2o_qpack_static_table_entry_t ;
struct TYPE_11__ {scalar_t__ base_offset; scalar_t__ last; scalar_t__ first; } ;
struct TYPE_10__ {TYPE_4__ table; } ;
typedef TYPE_2__ h2o_qpack_decoder_t ;
struct TYPE_12__ {int len; int base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_8__*) ;
 char* VAR_2 ;
 char* VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ,int ,int,int const*,scalar_t__,char const**) ;
 int FUNC_2 (TYPE_2__*,int *,int,int const*,scalar_t__,char const**) ;
 struct st_h2o_qpack_header_t* FUNC_3 (TYPE_4__*,scalar_t__,char const**) ;
 TYPE_1__* FUNC_4 (scalar_t__,char const**) ;

__attribute__((used)) static int FUNC_5(h2o_qpack_decoder_t *VAR_4, int VAR_5, int64_t VAR_6, int VAR_7,
                                      const uint8_t *VAR_8, int64_t VAR_9, const char **VAR_10)
{
    if (VAR_9 >= VAR_1) {
        *VAR_10 = VAR_2;
        return VAR_0;
    }

    if (VAR_5) {
        const h2o_qpack_static_table_entry_t *VAR_11;
        if ((VAR_11 = FUNC_4(VAR_6, VAR_10)) == ((void*)0))
            return VAR_0;
        return FUNC_2(VAR_4, VAR_11->name, VAR_7, VAR_8, VAR_9, VAR_10);
    } else {
        struct st_h2o_qpack_header_t *VAR_12;
        int64_t VAR_13 = VAR_4->table.base_offset + (VAR_4->table.last - VAR_4->table.first) - 1;
        if (VAR_6 > VAR_13) {
            *VAR_10 = VAR_3;
            return VAR_0;
        }
        if ((VAR_12 = FUNC_3(&VAR_4->table, VAR_13 - VAR_6, VAR_10)) == ((void*)0))
            return VAR_0;
        if (FUNC_0(VAR_12->name)) {
            return FUNC_2(VAR_4, (h2o_token_t *)VAR_12->name, VAR_7, VAR_8, VAR_9, VAR_10);
        } else {
            return FUNC_1(VAR_4, VAR_12->name->base, VAR_12->name->len, VAR_7, VAR_8, VAR_9, VAR_10);
        }
    }
}
