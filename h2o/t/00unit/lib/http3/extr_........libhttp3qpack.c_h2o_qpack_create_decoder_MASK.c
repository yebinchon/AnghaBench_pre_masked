
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_4__ {int header_table_size; int max_entries; int blocked_streams; int table; int max_blocked; scalar_t__ total_inserts; scalar_t__ insert_count; } ;
typedef TYPE_1__ h2o_qpack_decoder_t ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int) ;

h2o_qpack_decoder_t *FUNC_3(uint32_t VAR_0, uint16_t VAR_1)
{
    h2o_qpack_decoder_t *VAR_2 = FUNC_0(sizeof(*VAR_2));

    VAR_2->insert_count = 0;
    VAR_2->header_table_size = VAR_0;
    VAR_2->max_entries = VAR_0 / 32;
    VAR_2->total_inserts = 0;
    VAR_2->max_blocked = VAR_1;
    FUNC_1(&VAR_2->table, VAR_2->header_table_size);
    FUNC_2(&VAR_2->blocked_streams, 0, sizeof(VAR_2->blocked_streams));

    return VAR_2;
}
