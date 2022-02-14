
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct st_h2o_qpack_header_table_t {scalar_t__ num_bytes; scalar_t__ max_size; int base_offset; TYPE_2__** first; TYPE_2__** last; } ;
struct TYPE_4__ {scalar_t__ value_len; TYPE_1__* name; } ;
struct TYPE_3__ {scalar_t__ len; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(struct st_h2o_qpack_header_table_t *VAR_1, size_t VAR_2)
{
    while (VAR_1->first != VAR_1->last) {
        if (VAR_1->num_bytes + VAR_2 <= VAR_1->max_size)
            return;
        VAR_1->num_bytes -= (*VAR_1->first)->name->len + (*VAR_1->first)->value_len + VAR_0;
        FUNC_1(*VAR_1->first);
        *VAR_1->first++ = ((void*)0);
        ++VAR_1->base_offset;
    }
    FUNC_0(VAR_1->num_bytes == 0);
}
