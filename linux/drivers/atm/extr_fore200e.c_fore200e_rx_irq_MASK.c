
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct host_rxq_entry {int* status; TYPE_5__* cp_entry; int rpd_dma; TYPE_6__* rpd; } ;
struct host_rxq {size_t head; struct host_rxq_entry* host_entry; } ;
struct fore200e_vc_map {struct atm_vcc* vcc; } ;
struct fore200e {TYPE_4__* bus; TYPE_1__* atm_dev; struct host_rxq host_rxq; } ;
struct atm_vcc {TYPE_3__* stats; int flags; } ;
struct TYPE_9__ {int vci; int vpi; } ;
struct TYPE_13__ {TYPE_2__ atm_header; } ;
struct TYPE_12__ {int rpd_haddr; } ;
struct TYPE_11__ {int (* write ) (int ,int *) ;} ;
struct TYPE_10__ {int rx_err; } ;
struct TYPE_8__ {int number; } ;


 int FUNC_0 (struct atm_vcc*) ;
 int VAR_0 ;
 int FUNC_1 (int,char*,int ,int ,int ) ;
 int FUNC_2 (size_t,int ) ;
 struct fore200e_vc_map* FUNC_3 (struct fore200e*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct fore200e*,TYPE_6__*) ;
 int FUNC_6 (struct fore200e*,struct atm_vcc*,TYPE_6__*) ;
 int FUNC_7 (struct fore200e*) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static void
FUNC_10(struct fore200e* VAR_5)
{
    struct host_rxq* VAR_6 = &VAR_5->host_rxq;
    struct host_rxq_entry* VAR_7;
    struct atm_vcc* VAR_8;
    struct fore200e_vc_map* VAR_9;

    for (;;) {

 VAR_7 = &VAR_6->host_entry[ VAR_6->head ];


 if ((*VAR_7->status & VAR_2) == 0)
     break;

 VAR_9 = FUNC_3(VAR_5, VAR_7->rpd->atm_header.vpi, VAR_7->rpd->atm_header.vci);

 if ((VAR_9->vcc == ((void*)0)) ||
     (FUNC_9(VAR_0, &VAR_9->vcc->flags) == 0)) {

     FUNC_1(1, "no ready VC found for PDU received on %d.%d.%d\n",
      VAR_5->atm_dev->number,
      VAR_7->rpd->atm_header.vpi, VAR_7->rpd->atm_header.vci);
 }
 else {
     VAR_8 = VAR_9->vcc;
     FUNC_0(VAR_8);

     if ((*VAR_7->status & VAR_3) == 0) {

  FUNC_6(VAR_5, VAR_8, VAR_7->rpd);
     }
     else {
  FUNC_1(2, "damaged PDU on %d.%d.%d\n",
   VAR_5->atm_dev->number,
   VAR_7->rpd->atm_header.vpi, VAR_7->rpd->atm_header.vci);
  FUNC_4(&VAR_8->stats->rx_err);
     }
 }

 FUNC_2(VAR_6->head, VAR_1);

 FUNC_5(VAR_5, VAR_7->rpd);


 VAR_5->bus->write(VAR_7->rpd_dma, &VAR_7->cp_entry->rpd_haddr);
 *VAR_7->status = VAR_4;

 FUNC_7(VAR_5);
    }
}
