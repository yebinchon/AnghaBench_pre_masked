
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct glc_softc {scalar_t__ sc_rxdmadesc_phys; TYPE_2__* sc_rxdmadesc; struct glc_rxsoft* sc_rxsoft; } ;
struct TYPE_3__ {int ds_len; int ds_addr; } ;
struct glc_rxsoft {int rxs_desc_slot; scalar_t__ rxs_desc; TYPE_1__ segment; } ;
struct glc_dmadesc {int dummy; } ;
struct TYPE_4__ {int cmd_stat; scalar_t__ next; int len; int paddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int) ;

__attribute__((used)) static int
FUNC_1(struct glc_softc *VAR_2, int VAR_3)
{
 struct glc_rxsoft *VAR_4 = &VAR_2->sc_rxsoft[VAR_3];

 FUNC_0(&VAR_2->sc_rxdmadesc[VAR_3], sizeof(VAR_2->sc_rxdmadesc[VAR_3]));
 VAR_2->sc_rxdmadesc[VAR_3].paddr = VAR_4->segment.ds_addr;
 VAR_2->sc_rxdmadesc[VAR_3].len = VAR_4->segment.ds_len;
 VAR_2->sc_rxdmadesc[VAR_3].next = VAR_2->sc_rxdmadesc_phys +
     ((VAR_3 + 1) % VAR_1)*sizeof(VAR_2->sc_rxdmadesc[VAR_3]);
 VAR_2->sc_rxdmadesc[VAR_3].cmd_stat = VAR_0;

 VAR_4->rxs_desc_slot = VAR_3;
 VAR_4->rxs_desc = VAR_2->sc_rxdmadesc_phys + VAR_3*sizeof(struct glc_dmadesc);

        return (0);
}
