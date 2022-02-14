
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ata_queued_cmd {scalar_t__ dma_dir; struct ata_port* ap; } ;
struct TYPE_4__ {int data_addr; } ;
struct ata_port {TYPE_2__ ioaddr; TYPE_1__* ops; } ;
struct TYPE_3__ {int (* sff_check_status ) (struct ata_port*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ata_port*,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ata_port*) ;

void FUNC_3(struct ata_queued_cmd *VAR_2)
{
 int VAR_3;
 struct ata_port *VAR_4;


 if (VAR_2 == ((void*)0) || VAR_2->dma_dir == VAR_1)
  return;

 VAR_4 = VAR_2->ap;

 for (VAR_3 = 0; (VAR_4->ops->sff_check_status(VAR_4) & VAR_0)
      && VAR_3 < 65536; VAR_3 += 2)
  FUNC_1(VAR_4->ioaddr.data_addr);


 if (VAR_3)
  FUNC_0(VAR_4, "drained %d bytes to clear DRQ\n", VAR_3);

}
