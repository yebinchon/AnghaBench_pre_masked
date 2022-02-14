
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;
typedef struct TYPE_15__ TYPE_13__ ;


struct TYPE_23__ {int apctl_v_agp_rate; int apctl_v_agp_en; int apctl_v_agp_sba_en; } ;
union TPAchipPCTL {TYPE_7__ pctl_r_bits; int pctl_q_whole; } ;
struct TYPE_20__ {int csr; } ;
struct TYPE_24__ {TYPE_4__ pctl; } ;
typedef TYPE_8__ titan_pachip_port ;
struct pci_controller {int index; int sg_pci; struct pci_controller* next; } ;
struct TYPE_21__ {int rate; int rq; int enable; int sba; } ;
struct TYPE_22__ {TYPE_5__ bits; scalar_t__ lw; } ;
struct TYPE_18__ {int rate; int sba; int rq; } ;
struct TYPE_19__ {TYPE_2__ bits; scalar_t__ lw; } ;
struct TYPE_17__ {int * sysdata; scalar_t__ size; scalar_t__ bus_base; } ;
struct TYPE_25__ {TYPE_6__ mode; TYPE_3__ capability; TYPE_1__ aperture; int * ops; TYPE_8__* private; struct pci_controller* hose; } ;
typedef TYPE_9__ alpha_agp_info ;
struct TYPE_16__ {TYPE_8__ a_port; } ;
struct TYPE_15__ {TYPE_8__ a_port; } ;


 int VAR_0 ;
 TYPE_14__* VAR_1 ;
 TYPE_13__* VAR_2 ;
 struct pci_controller* VAR_3 ;
 TYPE_9__* FUNC_0 (int,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_8__*) ;

alpha_agp_info *
FUNC_2(void)
{
 alpha_agp_info *VAR_6;
 struct pci_controller *VAR_7;
 titan_pachip_port *VAR_8;
 int VAR_9 = -1;
 union TPAchipPCTL VAR_10;




 VAR_8 = &VAR_1->a_port;
 if (FUNC_1(VAR_8))
  VAR_9 = 2;
 if (VAR_9 < 0 &&
     VAR_5 &&
     FUNC_1(VAR_8 = &VAR_2->a_port))
  VAR_9 = 3;




 for (VAR_7 = VAR_3; VAR_7; VAR_7 = VAR_7->next)
  if (VAR_7->index == VAR_9)
   break;

 if (!VAR_7 || !VAR_7->sg_pci)
  return ((void*)0);




 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return ((void*)0);




 VAR_6->hose = VAR_7;
 VAR_6->private = VAR_8;
 VAR_6->ops = &VAR_4;






 VAR_6->aperture.bus_base = 0;
 VAR_6->aperture.size = 0;
 VAR_6->aperture.sysdata = ((void*)0);




 VAR_6->capability.lw = 0;
 VAR_6->capability.bits.rate = 3;
 VAR_6->capability.bits.sba = 1;
 VAR_6->capability.bits.rq = 7;




 VAR_10.pctl_q_whole = VAR_8->pctl.csr;
 VAR_6->mode.lw = 0;
 VAR_6->mode.bits.rate = 1 << VAR_10.pctl_r_bits.apctl_v_agp_rate;
 VAR_6->mode.bits.sba = VAR_10.pctl_r_bits.apctl_v_agp_sba_en;
 VAR_6->mode.bits.rq = 7;
 VAR_6->mode.bits.enable = VAR_10.pctl_r_bits.apctl_v_agp_en;

 return VAR_6;
}
