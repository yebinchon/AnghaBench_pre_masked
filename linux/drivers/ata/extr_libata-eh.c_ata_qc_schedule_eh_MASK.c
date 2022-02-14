
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ata_queued_cmd {TYPE_2__* scsicmd; int flags; struct ata_port* ap; } ;
struct ata_port {TYPE_1__* ops; } ;
struct TYPE_4__ {int request; } ;
struct TYPE_3__ {int error_handler; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ata_port*,int) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct ata_queued_cmd *VAR_1)
{
 struct ata_port *VAR_2 = VAR_1->ap;

 FUNC_0(!VAR_2->ops->error_handler);

 VAR_1->flags |= VAR_0;
 FUNC_1(VAR_2, 1);






 FUNC_2(VAR_1->scsicmd->request);
}
