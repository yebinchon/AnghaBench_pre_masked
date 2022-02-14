
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct st_h2o_hpack_header_table_entry_t {TYPE_2__* value; TYPE_2__* name; } ;
struct TYPE_7__ {scalar_t__ num_entries; int hpack_size; } ;
typedef TYPE_1__ h2o_hpack_header_table_t ;
struct TYPE_8__ {scalar_t__ len; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 struct st_h2o_hpack_header_table_entry_t* FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct st_h2o_hpack_header_table_entry_t*,int ,int) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(h2o_hpack_header_table_t *VAR_1)
{
    struct st_h2o_hpack_header_table_entry_t *VAR_2;
    FUNC_0(VAR_1->num_entries != 0);

    VAR_2 = FUNC_1(VAR_1, --VAR_1->num_entries);
    VAR_1->hpack_size -= VAR_2->name->len + VAR_2->value->len + VAR_0;
    if (!FUNC_2(VAR_2->name))
        FUNC_3(VAR_2->name);
    if (!FUNC_5(VAR_2->value))
        FUNC_3(VAR_2->value);
    FUNC_4(VAR_2, 0, sizeof(*VAR_2));
}
