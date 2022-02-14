
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pcmcia_device {int dev; TYPE_2__* priv; } ;
struct ide_host {TYPE_3__** ports; } ;
struct TYPE_5__ {scalar_t__ ndev; struct ide_host* host; } ;
typedef TYPE_2__ ide_info_t ;
struct TYPE_4__ {unsigned long data_addr; unsigned long ctl_addr; } ;
struct TYPE_6__ {TYPE_1__ io_ports; } ;
typedef TYPE_3__ ide_hwif_t ;


 int FUNC_0 (int *,char*,struct pcmcia_device*) ;
 int FUNC_1 (struct ide_host*) ;
 int FUNC_2 (struct pcmcia_device*) ;
 int FUNC_3 (unsigned long,int) ;

__attribute__((used)) static void FUNC_4(struct pcmcia_device *VAR_0)
{
    ide_info_t *VAR_1 = VAR_0->priv;
    struct ide_host *VAR_2 = VAR_1->host;

    FUNC_0(&VAR_0->dev, "ide_release(0x%p)\n", VAR_0);

    if (VAR_1->ndev) {
 ide_hwif_t *VAR_3 = VAR_2->ports[0];
 unsigned long VAR_4, VAR_5;

 VAR_4 = VAR_3->io_ports.data_addr;
 VAR_5 = VAR_3->io_ports.ctl_addr;

 FUNC_1(VAR_2);
 VAR_1->ndev = 0;

 FUNC_3(VAR_5, 1);
 FUNC_3(VAR_4, 8);
    }

    FUNC_2(VAR_0);
}
