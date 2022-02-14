
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_port {int flags; TYPE_1__* ops; } ;
struct ata_link {struct ata_port* ap; } ;
struct TYPE_2__ {scalar_t__ scr_read; } ;


 int VAR_0 ;

int FUNC_0(struct ata_link *VAR_1)
{
 struct ata_port *VAR_2 = VAR_1->ap;

 return (VAR_2->flags & VAR_0) && VAR_2->ops->scr_read;
}
