
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pdc_host_priv {unsigned int hdma_cons; unsigned int hdma_prod; TYPE_1__* hdma; scalar_t__ doing_hdma; } ;
struct ata_queued_cmd {struct ata_port* ap; } ;
struct ata_port {TYPE_2__* host; } ;
struct TYPE_4__ {struct pdc_host_priv* private_data; } ;
struct TYPE_3__ {int pkt_ofs; int seq; int qc; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct ata_queued_cmd *VAR_1)
{
 struct ata_port *VAR_2 = VAR_1->ap;
 struct pdc_host_priv *VAR_3 = VAR_2->host->private_data;
 unsigned int VAR_4 = VAR_3->hdma_cons & VAR_0;


 if (VAR_3->hdma_prod == VAR_3->hdma_cons) {
  VAR_3->doing_hdma = 0;
  return;
 }

 FUNC_0(VAR_3->hdma[VAR_4].qc, VAR_3->hdma[VAR_4].seq,
        VAR_3->hdma[VAR_4].pkt_ofs);
 VAR_3->hdma_cons++;
}
