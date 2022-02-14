
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_port {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* sched_eh ) (struct ata_port*) ;} ;


 int FUNC_0 (struct ata_port*) ;

void FUNC_1(struct ata_port *VAR_0)
{

 VAR_0->ops->sched_eh(VAR_0);
}
