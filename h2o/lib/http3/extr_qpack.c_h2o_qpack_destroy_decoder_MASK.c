
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* entries; } ;
struct TYPE_7__ {TYPE_1__ list; } ;
struct TYPE_8__ {TYPE_2__ blocked_streams; int table; } ;
typedef TYPE_3__ h2o_qpack_decoder_t ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;

void FUNC_2(h2o_qpack_decoder_t *VAR_0)
{
    FUNC_1(&VAR_0->table);
    FUNC_0(VAR_0->blocked_streams.list.entries);
    FUNC_0(VAR_0);
}
