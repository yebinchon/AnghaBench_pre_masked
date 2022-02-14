
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pata_icside_state {int dma; TYPE_2__* port; int ioc_base; } ;
struct TYPE_10__ {unsigned int flags; } ;
struct ata_queued_cmd {TYPE_5__ tf; int n_elem; int sg; TYPE_3__* dev; struct ata_port* ap; } ;
struct ata_port {size_t port_no; TYPE_4__* ops; TYPE_1__* host; } ;
struct TYPE_9__ {int (* sff_exec_command ) (struct ata_port*,TYPE_5__*) ;} ;
struct TYPE_8__ {size_t devno; } ;
struct TYPE_7__ {int * speed; int port_sel; } ;
struct TYPE_6__ {struct pata_icside_state* private_data; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct ata_port*,TYPE_5__*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(struct ata_queued_cmd *VAR_3)
{
 struct ata_port *VAR_4 = VAR_3->ap;
 struct pata_icside_state *VAR_5 = VAR_4->host->private_data;
 unsigned int VAR_6 = VAR_3->tf.flags & VAR_0;





 FUNC_0(FUNC_1(VAR_5->dma));




 FUNC_6(VAR_5->port[VAR_4->port_no].port_sel, VAR_5->ioc_base);

 FUNC_4(VAR_5->dma, VAR_5->port[VAR_4->port_no].speed[VAR_3->dev->devno]);
 FUNC_3(VAR_5->dma, VAR_3->sg, VAR_3->n_elem);
 FUNC_2(VAR_5->dma, VAR_6 ? VAR_2 : VAR_1);


 VAR_4->ops->sff_exec_command(VAR_4, &VAR_3->tf);
}
