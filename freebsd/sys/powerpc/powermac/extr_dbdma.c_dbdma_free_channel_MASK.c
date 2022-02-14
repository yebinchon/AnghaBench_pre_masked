
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sc_dmatag; int sc_dmamap; int sc_slots; } ;
typedef TYPE_1__ dbdma_channel_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;

int
FUNC_4(dbdma_channel_t *VAR_1)
{

 FUNC_2(VAR_1);

 FUNC_1(VAR_1->sc_dmatag, VAR_1->sc_slots, VAR_1->sc_dmamap);
 FUNC_0(VAR_1->sc_dmatag);

 FUNC_3(VAR_1, VAR_0);

 return (0);
}
