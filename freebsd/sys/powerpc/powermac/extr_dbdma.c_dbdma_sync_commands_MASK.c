
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sc_dmamap; int sc_dmatag; } ;
typedef TYPE_1__ dbdma_channel_t ;
typedef int bus_dmasync_op_t ;


 int FUNC_0 (int ,int ,int ) ;

void
FUNC_1(dbdma_channel_t *VAR_0, bus_dmasync_op_t VAR_1)
{

 FUNC_0(VAR_0->sc_dmatag, VAR_0->sc_dmamap, VAR_1);
}
