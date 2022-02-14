
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int blake2b_state ;
struct TYPE_5__ {scalar_t__ digest_length; int fanout; int depth; int personal; int salt; int reserved; scalar_t__ inner_length; scalar_t__ node_depth; int node_offset; int leaf_length; scalar_t__ key_length; } ;
typedef TYPE_1__ blake2b_param ;


 scalar_t__ const VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,scalar_t__ const*) ;
 int FUNC_4 (TYPE_1__*,scalar_t__ const*) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 () ;

int
FUNC_7(blake2b_state *VAR_1, const uint8_t VAR_2,
                           const void *VAR_3, const void *VAR_4)
{
    blake2b_param VAR_5[1];

    if ((!VAR_2) || (VAR_2 > VAR_0)) {
        FUNC_6();
    }
    VAR_5->digest_length = VAR_2;
    VAR_5->key_length = 0;
    VAR_5->fanout = 1;
    VAR_5->depth = 1;
    FUNC_0(VAR_5->leaf_length, 0);
    FUNC_1(VAR_5->node_offset, 0);
    VAR_5->node_depth = 0;
    VAR_5->inner_length = 0;
    FUNC_5(VAR_5->reserved, 0, sizeof(VAR_5->reserved));
    if (VAR_3 != ((void*)0)) {
        FUNC_4(VAR_5, (const uint8_t *) VAR_3);
    } else {
        FUNC_5(VAR_5->salt, 0, sizeof(VAR_5->salt));
    }
    if (VAR_4 != ((void*)0)) {
        FUNC_3(VAR_5, (const uint8_t *) VAR_4);
    } else {
        FUNC_5(VAR_5->personal, 0, sizeof(VAR_5->personal));
    }
    return FUNC_2(VAR_1, VAR_5);
}
