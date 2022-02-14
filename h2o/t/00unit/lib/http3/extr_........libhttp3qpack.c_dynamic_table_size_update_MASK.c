
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_5__ {scalar_t__ max_size; } ;
struct TYPE_4__ {scalar_t__ header_table_size; TYPE_2__ table; } ;
typedef TYPE_1__ h2o_qpack_decoder_t ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_1(h2o_qpack_decoder_t *VAR_2, int64_t VAR_3, const char **VAR_4)
{
    if (VAR_3 > VAR_2->header_table_size) {
        *VAR_4 = VAR_1;
        return VAR_0;
    }

    VAR_2->table.max_size = VAR_3;
    FUNC_0(&VAR_2->table, 0);
    return 0;
}
