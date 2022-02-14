
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ep93xx_pata_data {int dummy; } ;
struct ata_queued_cmd {scalar_t__ dma_dir; struct ata_port* ap; } ;
struct ata_port {TYPE_2__* ops; TYPE_1__* host; } ;
struct TYPE_4__ {int (* sff_check_status ) (struct ata_port*) ;} ;
struct TYPE_3__ {struct ep93xx_pata_data* private_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ata_port*,char*,int) ;
 int FUNC_1 (struct ep93xx_pata_data*,int ) ;
 int FUNC_2 (struct ata_port*) ;

__attribute__((used)) static void FUNC_3(struct ata_queued_cmd *VAR_3)
{
 int VAR_4;
 struct ata_port *VAR_5;
 struct ep93xx_pata_data *VAR_6;


 if (VAR_3 == ((void*)0) || VAR_3->dma_dir == VAR_1)
  return;

 VAR_5 = VAR_3->ap;
 VAR_6 = VAR_5->host->private_data;

 for (VAR_4 = 0; (VAR_5->ops->sff_check_status(VAR_5) & VAR_0)
       && VAR_4 < 65536; VAR_4 += 2)
  FUNC_1(VAR_6, VAR_2);


 if (VAR_4)
  FUNC_0(VAR_5, "drained %d bytes to clear DRQ.\n", VAR_4);

}
