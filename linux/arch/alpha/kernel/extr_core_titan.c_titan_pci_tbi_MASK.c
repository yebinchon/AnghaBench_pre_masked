
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {unsigned long csr; } ;
struct TYPE_9__ {unsigned long csr; } ;
struct TYPE_11__ {TYPE_2__ gtlbiv; TYPE_1__ gtlbia; } ;
struct TYPE_12__ {TYPE_3__ g; } ;
struct TYPE_13__ {TYPE_4__ port_specific; } ;
typedef TYPE_5__ titan_pachip_port ;
struct TYPE_14__ {TYPE_5__ a_port; TYPE_5__ g_port; } ;
typedef TYPE_6__ titan_pachip ;
struct pci_controller {int index; } ;
typedef int dma_addr_t ;


 TYPE_6__* VAR_0 ;
 TYPE_6__* VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

void
FUNC_2(struct pci_controller *VAR_2, dma_addr_t VAR_3, dma_addr_t VAR_4)
{
 titan_pachip *VAR_5 =
   (VAR_2->index & 1) ? VAR_1 : VAR_0;
 titan_pachip_port *VAR_6;
 volatile unsigned long *VAR_7;
 unsigned long VAR_8;


 VAR_6 = &VAR_5->g_port;
 if (VAR_2->index & 2)
  VAR_6 = &VAR_5->a_port;






 VAR_7 = &VAR_6->port_specific.g.gtlbia.csr;
 if (((VAR_3 ^ VAR_4) & 0xffff0000) == 0)
  VAR_7 = &VAR_6->port_specific.g.gtlbiv.csr;



 VAR_8 = (VAR_3 & 0xffff0000) >> 12;

 FUNC_1();
 *VAR_7 = VAR_8;
 FUNC_0();
 *VAR_7;
}
