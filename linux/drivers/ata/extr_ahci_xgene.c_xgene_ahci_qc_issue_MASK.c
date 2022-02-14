
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct xgene_ahci_context {scalar_t__* class; scalar_t__* last_cmd; } ;
struct TYPE_8__ {scalar_t__ command; } ;
struct ata_queued_cmd {TYPE_4__ tf; TYPE_3__* dev; struct ata_port* ap; } ;
struct ata_port {size_t port_no; TYPE_1__* host; } ;
struct ahci_host_priv {struct xgene_ahci_context* plat_data; } ;
struct TYPE_7__ {TYPE_2__* link; } ;
struct TYPE_6__ {int pmp; } ;
struct TYPE_5__ {struct ahci_host_priv* private_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (struct ata_port*) ;
 int FUNC_1 (struct ata_queued_cmd*) ;
 int FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int,void*) ;
 int FUNC_5 (struct ata_port*) ;

__attribute__((used)) static unsigned int FUNC_6(struct ata_queued_cmd *VAR_7)
{
 struct ata_port *VAR_8 = VAR_7->ap;
 struct ahci_host_priv *VAR_9 = VAR_8->host->private_data;
 struct xgene_ahci_context *VAR_10 = VAR_9->plat_data;
 int VAR_11 = 0;
 u32 VAR_12;
 void *VAR_13 = FUNC_0(VAR_8);





 if (VAR_10->class[VAR_8->port_no] == VAR_3) {
  VAR_12 = FUNC_2(VAR_13 + VAR_4);
  VAR_12 &= ~VAR_5;
  VAR_12 |= VAR_7->dev->link->pmp << VAR_6;
  FUNC_4(VAR_12, VAR_13 + VAR_4);
 }

 if (FUNC_3((VAR_10->last_cmd[VAR_8->port_no] == VAR_0) ||
     (VAR_10->last_cmd[VAR_8->port_no] == VAR_1) ||
     (VAR_10->last_cmd[VAR_8->port_no] == VAR_2)))
  FUNC_5(VAR_8);

 VAR_11 = FUNC_1(VAR_7);


 VAR_10->last_cmd[VAR_8->port_no] = VAR_7->tf.command;

 return VAR_11;
}
