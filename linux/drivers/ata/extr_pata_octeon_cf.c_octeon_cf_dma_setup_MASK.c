
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct octeon_cf_port {scalar_t__ dma_finished; } ;
struct ata_queued_cmd {int tf; int sg; int cursg; struct ata_port* ap; } ;
struct ata_port {TYPE_1__* ops; struct octeon_cf_port* private_data; } ;
struct TYPE_2__ {int (* sff_exec_command ) (struct ata_port*,int *) ;} ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct ata_port*,int *) ;

__attribute__((used)) static void FUNC_2(struct ata_queued_cmd *VAR_0)
{
 struct ata_port *VAR_1 = VAR_0->ap;
 struct octeon_cf_port *VAR_2;

 VAR_2 = VAR_1->private_data;
 FUNC_0("ENTER\n");

 VAR_0->cursg = VAR_0->sg;
 VAR_2->dma_finished = 0;
 VAR_1->ops->sff_exec_command(VAR_1, &VAR_0->tf);
 FUNC_0("EXIT\n");
}
