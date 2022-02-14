
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct st_h2o_hpack_header_table_entry_t {int dummy; } ;
struct TYPE_4__ {scalar_t__ num_entries; scalar_t__ hpack_size; scalar_t__ hpack_capacity; size_t entry_capacity; size_t entry_start_index; struct st_h2o_hpack_header_table_entry_t* entries; } ;
typedef TYPE_1__ h2o_hpack_header_table_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct st_h2o_hpack_header_table_entry_t*) ;
 struct st_h2o_hpack_header_table_entry_t* FUNC_2 (size_t) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct st_h2o_hpack_header_table_entry_t*,int ,int) ;

__attribute__((used)) static struct st_h2o_hpack_header_table_entry_t *FUNC_5(h2o_hpack_header_table_t *VAR_0, size_t VAR_1,
                                                                  size_t VAR_2)
{

    while (VAR_0->num_entries != 0 && VAR_0->hpack_size + VAR_1 > VAR_0->hpack_capacity)
        FUNC_3(VAR_0);
    while (VAR_2 <= VAR_0->num_entries)
        FUNC_3(VAR_0);
    if (VAR_0->num_entries == 0) {
        FUNC_0(VAR_0->hpack_size == 0);
        if (VAR_1 > VAR_0->hpack_capacity)
            return ((void*)0);
    }
    VAR_0->hpack_size += VAR_1;


    if (VAR_0->num_entries == VAR_0->entry_capacity) {
        size_t VAR_3 = VAR_0->num_entries * 2;
        if (VAR_3 < 16)
            VAR_3 = 16;
        struct st_h2o_hpack_header_table_entry_t *VAR_4 =
            FUNC_2(VAR_3 * sizeof(struct st_h2o_hpack_header_table_entry_t));
        if (VAR_0->num_entries != 0) {
            size_t VAR_5 = VAR_0->entry_start_index, VAR_6 = 0;
            do {
                VAR_4[VAR_6] = VAR_0->entries[VAR_5];
                ++VAR_6;
                VAR_5 = (VAR_5 + 1) % VAR_0->entry_capacity;
            } while (VAR_6 != VAR_0->num_entries);
        }
        FUNC_4(VAR_4 + VAR_0->num_entries, 0, sizeof(*VAR_4) * (VAR_3 - VAR_0->num_entries));
        FUNC_1(VAR_0->entries);
        VAR_0->entries = VAR_4;
        VAR_0->entry_capacity = VAR_3;
        VAR_0->entry_start_index = 0;
    }

    ++VAR_0->num_entries;
    VAR_0->entry_start_index = (VAR_0->entry_start_index + VAR_0->entry_capacity - 1) % VAR_0->entry_capacity;
    return VAR_0->entries + VAR_0->entry_start_index;
}
