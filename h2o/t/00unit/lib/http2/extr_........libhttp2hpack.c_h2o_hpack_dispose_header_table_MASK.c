
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct st_h2o_hpack_header_table_entry_t {int value; int name; } ;
struct TYPE_3__ {scalar_t__ num_entries; size_t entry_start_index; size_t entry_capacity; struct st_h2o_hpack_header_table_entry_t* entries; } ;
typedef TYPE_1__ h2o_hpack_header_table_t ;


 int FUNC_0 (struct st_h2o_hpack_header_table_entry_t*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(h2o_hpack_header_table_t *VAR_0)
{
    if (VAR_0->num_entries != 0) {
        size_t VAR_1 = VAR_0->entry_start_index;
        do {
            struct st_h2o_hpack_header_table_entry_t *VAR_2 = VAR_0->entries + VAR_1;
            if (!FUNC_1(VAR_2->name))
                FUNC_2(VAR_2->name);
            if (!FUNC_3(VAR_2->value))
                FUNC_2(VAR_2->value);
            VAR_1 = (VAR_1 + 1) % VAR_0->entry_capacity;
        } while (--VAR_0->num_entries != 0);
    }
    FUNC_0(VAR_0->entries);
}
