
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {TYPE_1__* sc_slots; int sc_dmamap; int sc_dmatag; } ;
typedef TYPE_2__ dbdma_channel_t ;
struct TYPE_4__ {int resCount; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;

uint16_t
FUNC_2(dbdma_channel_t *VAR_1, int VAR_2)
{

 FUNC_0(VAR_1->sc_dmatag, VAR_1->sc_dmamap, VAR_0);





 return (FUNC_1(VAR_1->sc_slots[VAR_2].resCount));
}
