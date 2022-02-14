
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* entries; } ;
struct TYPE_6__ {TYPE_1__ inflight; int table; } ;
typedef TYPE_2__ h2o_qpack_encoder_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;

void FUNC_2(h2o_qpack_encoder_t *VAR_0)
{
    FUNC_1(&VAR_0->table);
    FUNC_0(VAR_0->inflight.entries);
    FUNC_0(VAR_0);
}
