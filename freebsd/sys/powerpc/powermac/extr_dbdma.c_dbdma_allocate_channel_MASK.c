
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_int ;
struct resource {int dummy; } ;
struct dbdma_channel {int dummy; } ;
struct TYPE_7__ {int sc_nslots; int sc_slots; int sc_dmamap; int sc_dmatag; scalar_t__ sc_slots_pa; int sc_off; struct resource* sc_regs; } ;
typedef TYPE_1__ dbdma_channel_t ;
typedef int bus_dma_tag_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int ,int ,int ,int ,TYPE_1__*,int ) ;
 int FUNC_2 (int ,void**,int,int *) ;
 int VAR_9 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 TYPE_1__* FUNC_5 (int,int ,int) ;

int
FUNC_6(struct resource *VAR_10, u_int VAR_11,
    bus_dma_tag_t VAR_12, int VAR_13, dbdma_channel_t **VAR_14)
{
 int VAR_15 = 0;
 dbdma_channel_t *VAR_16;

 VAR_16 = *VAR_14 = FUNC_5(sizeof(struct dbdma_channel), VAR_5,
     VAR_6 | VAR_7);

 VAR_16->sc_regs = VAR_10;
 VAR_16->sc_off = VAR_11;
 FUNC_3(VAR_16);

 VAR_16->sc_slots_pa = 0;

 VAR_15 = FUNC_0(VAR_12, 16, 0, VAR_3,
     VAR_2, ((void*)0), ((void*)0), VAR_8, 1, VAR_8, 0, ((void*)0),
     ((void*)0), &(VAR_16->sc_dmatag));

 VAR_15 = FUNC_2(VAR_16->sc_dmatag,
     (void **)&VAR_16->sc_slots, VAR_0 | VAR_1,
     &VAR_16->sc_dmamap);

 VAR_15 = FUNC_1(VAR_16->sc_dmatag, VAR_16->sc_dmamap,
     VAR_16->sc_slots, VAR_8, VAR_9, VAR_16, 0);

 FUNC_4(VAR_16, VAR_4, 0);

 VAR_16->sc_nslots = VAR_13;

 return (VAR_15);
}
