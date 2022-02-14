
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int flags; int protocol; } ;
struct ata_queued_cmd {int hw_tag; int flags; TYPE_3__ tf; TYPE_2__* dev; int cdb; struct ata_port* ap; } ;
struct ata_port {struct ahci_port_priv* private_data; } ;
struct ahci_port_priv {void* cmd_tbl; } ;
struct TYPE_5__ {TYPE_1__* link; int cdb_len; } ;
struct TYPE_4__ {int pmp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_0 (struct ata_queued_cmd*,void*) ;
 int FUNC_1 (struct ahci_port_priv*,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int,int,void*) ;
 int FUNC_4 (void*,int ,int ) ;
 int FUNC_5 (void*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct ata_queued_cmd *VAR_7)
{
 struct ata_port *VAR_8 = VAR_7->ap;
 struct ahci_port_priv *VAR_9 = VAR_8->private_data;
 int VAR_10 = FUNC_2(VAR_7->tf.protocol);
 void *VAR_11;
 u32 VAR_12;
 const u32 VAR_13 = 5;
 unsigned int VAR_14;





 VAR_11 = VAR_9->cmd_tbl + VAR_7->hw_tag * VAR_3;

 FUNC_3(&VAR_7->tf, VAR_7->dev->link->pmp, 1, VAR_11);
 if (VAR_10) {
  FUNC_5(VAR_11 + VAR_2, 0, 32);
  FUNC_4(VAR_11 + VAR_2, VAR_7->cdb, VAR_7->dev->cdb_len);
 }

 VAR_14 = 0;
 if (VAR_7->flags & VAR_5)
  VAR_14 = FUNC_0(VAR_7, VAR_11);






 VAR_12 = VAR_13 | (VAR_7->dev->link->pmp << 12);
 if (VAR_7->tf.flags & VAR_6)
  VAR_12 |= VAR_4;
 if (VAR_10)
  VAR_12 |= VAR_0 | VAR_1;

 FUNC_1(VAR_9, VAR_7->hw_tag, VAR_12);
}
