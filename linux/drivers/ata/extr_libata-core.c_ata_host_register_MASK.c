
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_host_template {int can_queue; } ;
struct TYPE_4__ {int desc; } ;
struct TYPE_3__ {TYPE_2__ eh_info; } ;
struct ata_port {int local_port_no; scalar_t__ cbl; int flags; TYPE_1__ link; int udma_mask; int mwdma_mask; int pio_mask; TYPE_1__* slave_link; int print_id; } ;
struct ata_host {int flags; int n_ports; struct ata_port** ports; int dev; int n_tags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 (int ,struct ata_port*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (unsigned long) ;
 unsigned long FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct ata_port*,char*,...) ;
 int FUNC_6 (struct ata_port*) ;
 int VAR_7 ;
 int FUNC_7 (struct ata_host*,struct scsi_host_template*) ;
 int FUNC_8 (int ,struct ata_port*) ;
 int FUNC_9 (struct ata_port*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int,int ) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (struct ata_port*) ;
 int FUNC_14 (TYPE_1__*) ;

int FUNC_15(struct ata_host *VAR_8, struct scsi_host_template *VAR_9)
{
 int VAR_10, VAR_11;

 VAR_8->n_tags = FUNC_11(VAR_9->can_queue, 1, VAR_4);


 if (!(VAR_8->flags & VAR_3)) {
  FUNC_12(VAR_8->dev, "BUG: trying to register unstarted host\n");
  FUNC_0(1);
  return -VAR_5;
 }





 for (VAR_10 = VAR_8->n_ports; VAR_8->ports[VAR_10]; VAR_10++)
  FUNC_13(VAR_8->ports[VAR_10]);


 for (VAR_10 = 0; VAR_10 < VAR_8->n_ports; VAR_10++) {
  VAR_8->ports[VAR_10]->print_id = FUNC_10(&VAR_7);
  VAR_8->ports[VAR_10]->local_port_no = VAR_10 + 1;
 }


 for (VAR_10 = 0; VAR_10 < VAR_8->n_ports; VAR_10++) {
  VAR_11 = FUNC_8(VAR_8->dev,VAR_8->ports[VAR_10]);
  if (VAR_11) {
   goto err_tadd;
  }
 }

 VAR_11 = FUNC_7(VAR_8, VAR_9);
 if (VAR_11)
  goto err_tadd;


 for (VAR_10 = 0; VAR_10 < VAR_8->n_ports; VAR_10++) {
  struct ata_port *VAR_12 = VAR_8->ports[VAR_10];
  unsigned long VAR_13;


  if (VAR_12->cbl == VAR_0 && (VAR_12->flags & VAR_2))
   VAR_12->cbl = VAR_1;


  FUNC_14(&VAR_12->link);
  if (VAR_12->slave_link)
   FUNC_14(VAR_12->slave_link);


  VAR_13 = FUNC_4(VAR_12->pio_mask, VAR_12->mwdma_mask,
           VAR_12->udma_mask);

  if (!FUNC_6(VAR_12)) {
   FUNC_5(VAR_12, "%cATA max %s %s\n",
          (VAR_12->flags & VAR_2) ? 'S' : 'P',
          FUNC_3(VAR_13),
          VAR_12->link.eh_info.desc);
   FUNC_2(&VAR_12->link.eh_info);
  } else
   FUNC_5(VAR_12, "DUMMY\n");
 }


 for (VAR_10 = 0; VAR_10 < VAR_8->n_ports; VAR_10++) {
  struct ata_port *VAR_14 = VAR_8->ports[VAR_10];
  FUNC_1(VAR_6, VAR_14);
 }

 return 0;

 err_tadd:
 while (--VAR_10 >= 0) {
  FUNC_9(VAR_8->ports[VAR_10]);
 }
 return VAR_11;

}
