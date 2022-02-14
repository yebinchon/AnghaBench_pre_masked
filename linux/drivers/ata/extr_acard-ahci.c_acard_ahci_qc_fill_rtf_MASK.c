
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_10__ {int command; } ;
struct TYPE_8__ {scalar_t__ protocol; } ;
struct ata_queued_cmd {scalar_t__ dma_dir; int flags; TYPE_5__ result_tf; TYPE_3__ tf; TYPE_2__* dev; TYPE_4__* ap; } ;
struct ahci_port_priv {scalar_t__ fbs_enabled; int * rx_fis; } ;
struct TYPE_9__ {struct ahci_port_priv* private_data; } ;
struct TYPE_7__ {TYPE_1__* link; } ;
struct TYPE_6__ {int pmp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,TYPE_5__*) ;

__attribute__((used)) static bool FUNC_1(struct ata_queued_cmd *VAR_6)
{
 struct ahci_port_priv *VAR_7 = VAR_6->ap->private_data;
 u8 *VAR_8 = VAR_7->rx_fis;

 if (VAR_7->fbs_enabled)
  VAR_8 += VAR_6->dev->link->pmp * VAR_0;







 if (VAR_6->tf.protocol == VAR_1 && VAR_6->dma_dir == VAR_3 &&
     !(VAR_6->flags & VAR_2)) {
  FUNC_0(VAR_8 + VAR_5, &VAR_6->result_tf);
  VAR_6->result_tf.command = (VAR_8 + VAR_5)[15];
 } else
  FUNC_0(VAR_8 + VAR_4, &VAR_6->result_tf);

 return 1;
}
