
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_4__ {int inflight; scalar_t__ num_blocked; int max_blocked; scalar_t__ largest_known_received; int table; } ;
typedef TYPE_1__ h2o_qpack_encoder_t ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int) ;

h2o_qpack_encoder_t *FUNC_3(uint32_t VAR_0, uint16_t VAR_1)
{
    h2o_qpack_encoder_t *VAR_2 = FUNC_0(sizeof(*VAR_2));
    FUNC_1(&VAR_2->table, VAR_0);
    VAR_2->largest_known_received = 0;
    VAR_2->max_blocked = VAR_1;
    VAR_2->num_blocked = 0;
    FUNC_2(&VAR_2->inflight, 0, sizeof(VAR_2->inflight));
    return VAR_2;
}
