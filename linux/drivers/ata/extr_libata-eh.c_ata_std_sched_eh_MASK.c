
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_port {int pflags; int scsi_host; TYPE_1__* ops; } ;
struct TYPE_2__ {int error_handler; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ata_port*,int) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct ata_port *VAR_1)
{
 FUNC_1(!VAR_1->ops->error_handler);

 if (VAR_1->pflags & VAR_0)
  return;

 FUNC_2(VAR_1, 1);
 FUNC_3(VAR_1->scsi_host);

 FUNC_0("port EH scheduled\n");
}
