
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pcmcia_device {scalar_t__ manf_id; scalar_t__ card_id; int vpp; int dev; int irq; TYPE_3__** resource; int config_flags; TYPE_2__* priv; } ;
struct ide_host {TYPE_1__** ports; } ;
struct TYPE_5__ {int ndev; struct ide_host* host; } ;
typedef TYPE_2__ ide_info_t ;
struct TYPE_6__ {unsigned long start; scalar_t__ end; } ;
struct TYPE_4__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,char*,struct pcmcia_device*) ;
 int FUNC_1 (int *,char*,char,int,int) ;
 int FUNC_2 (struct pcmcia_device*) ;
 struct ide_host* FUNC_3 (unsigned long,unsigned long,int ,struct pcmcia_device*) ;
 int FUNC_4 (int,unsigned long) ;
 int VAR_5 ;
 int FUNC_5 (struct pcmcia_device*) ;
 scalar_t__ FUNC_6 (struct pcmcia_device*,int ,int*) ;
 int FUNC_7 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_8(struct pcmcia_device *VAR_6)
{
    ide_info_t *VAR_7 = VAR_6->priv;
    int VAR_8 = 0, VAR_9 = 0;
    unsigned long VAR_10, VAR_11;
    struct ide_host *VAR_12;

    FUNC_0(&VAR_6->dev, "ide_config(0x%p)\n", VAR_6);

    VAR_9 = ((VAR_6->manf_id == VAR_2) &&
       ((VAR_6->card_id == VAR_3) ||
        (VAR_6->card_id == VAR_4)));

    if (FUNC_6(VAR_6, VAR_5, &VAR_9)) {
     VAR_6->config_flags &= ~VAR_0;
     if (FUNC_6(VAR_6, VAR_5, &VAR_9))
      goto failed;
    }
    VAR_10 = VAR_6->resource[0]->start;
    if (VAR_6->resource[1]->end)
     VAR_11 = VAR_6->resource[1]->start;
    else
     VAR_11 = VAR_6->resource[0]->start + 0x0e;

    if (!VAR_6->irq)
     goto failed;

    VAR_8 = FUNC_5(VAR_6);
    if (VAR_8)
     goto failed;


    FUNC_4(0x02, VAR_11);


    if (VAR_9)
 FUNC_4(0x81, VAR_11+1);

     VAR_12 = FUNC_3(VAR_10, VAR_11, VAR_6->irq, VAR_6);
     if (VAR_12 == ((void*)0) && FUNC_7(VAR_6->resource[0]) == 0x20) {
     FUNC_4(0x02, VAR_11 + 0x10);
     VAR_12 = FUNC_3(VAR_10 + 0x10, VAR_11 + 0x10,
      VAR_6->irq, VAR_6);
    }

    if (VAR_12 == ((void*)0))
 goto failed;

    VAR_7->ndev = 1;
    VAR_7->host = VAR_12;
    FUNC_1(&VAR_6->dev, "ide-cs: hd%c: Vpp = %d.%d\n",
     'a' + VAR_12->ports[0]->index * 2,
     VAR_6->vpp / 10, VAR_6->vpp % 10);

    return 0;

failed:
    FUNC_2(VAR_6);
    return -VAR_1;
}
