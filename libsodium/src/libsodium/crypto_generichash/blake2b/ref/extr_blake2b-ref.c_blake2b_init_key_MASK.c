
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int blake2b_state ;
struct TYPE_3__ {scalar_t__ digest_length; scalar_t__ key_length; int fanout; int depth; scalar_t__* reserved; scalar_t__* salt; scalar_t__* personal; scalar_t__ inner_length; scalar_t__ node_depth; int node_offset; int leaf_length; } ;
typedef TYPE_1__ blake2b_param ;


 int VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ const VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,scalar_t__*,int) ;
 int FUNC_4 (scalar_t__*,void const*,scalar_t__ const) ;
 int FUNC_5 (scalar_t__*,int ,int) ;
 int FUNC_6 (scalar_t__*,int) ;
 int FUNC_7 () ;

int
FUNC_8(blake2b_state *VAR_3, const uint8_t VAR_4, const void *VAR_5,
                 const uint8_t VAR_6)
{
    blake2b_param VAR_7[1];

    if ((!VAR_4) || (VAR_4 > VAR_2)) {
        FUNC_7();
    }
    if (!VAR_5 || !VAR_6 || VAR_6 > VAR_1) {
        FUNC_7();
    }
    VAR_7->digest_length = VAR_4;
    VAR_7->key_length = VAR_6;
    VAR_7->fanout = 1;
    VAR_7->depth = 1;
    FUNC_0(VAR_7->leaf_length, 0);
    FUNC_1(VAR_7->node_offset, 0);
    VAR_7->node_depth = 0;
    VAR_7->inner_length = 0;
    FUNC_5(VAR_7->reserved, 0, sizeof(VAR_7->reserved));
    FUNC_5(VAR_7->salt, 0, sizeof(VAR_7->salt));
    FUNC_5(VAR_7->personal, 0, sizeof(VAR_7->personal));

    if (FUNC_2(VAR_3, VAR_7) < 0) {
        FUNC_7();
    }
    {
        uint8_t VAR_8[VAR_0];
        FUNC_5(VAR_8, 0, VAR_0);
        FUNC_4(VAR_8, VAR_5, VAR_6);
        FUNC_3(VAR_3, VAR_8, VAR_0);
        FUNC_6(VAR_8, VAR_0);
    }
    return 0;
}
