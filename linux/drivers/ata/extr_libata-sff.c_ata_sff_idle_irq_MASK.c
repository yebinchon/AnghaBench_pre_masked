
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int idle_irq; } ;
struct ata_port {TYPE_2__* ops; TYPE_1__ stats; } ;
struct TYPE_4__ {int (* sff_irq_clear ) (struct ata_port*) ;int (* sff_check_status ) (struct ata_port*) ;} ;


 int FUNC_0 (struct ata_port*,char*) ;
 int FUNC_1 (struct ata_port*) ;
 int FUNC_2 (struct ata_port*) ;

__attribute__((used)) static unsigned int FUNC_3(struct ata_port *VAR_0)
{
 VAR_0->stats.idle_irq++;
 return 0;
}
