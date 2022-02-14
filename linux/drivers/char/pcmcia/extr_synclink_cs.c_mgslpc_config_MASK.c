
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct pcmcia_device {int config_flags; int config_index; int irq; TYPE_1__** resource; int config_regs; TYPE_2__* priv; } ;
struct TYPE_4__ {int irq_level; int io_base; } ;
struct TYPE_3__ {int start; } ;
typedef TYPE_2__ MGSLPC_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pcmcia_device*) ;
 int FUNC_2 (struct pcmcia_device*,int ,int *) ;
 int FUNC_3 (struct pcmcia_device*,int ) ;
 int FUNC_4 (char*,struct pcmcia_device*) ;

__attribute__((used)) static int FUNC_5(struct pcmcia_device *VAR_8)
{
 MGSLPC_INFO *VAR_9 = VAR_8->priv;
 int VAR_10;

 if (VAR_5 >= VAR_2)
  FUNC_4("mgslpc_config(0x%p)\n", VAR_8);

 VAR_8->config_flags |= VAR_1 | VAR_0;

 VAR_10 = FUNC_2(VAR_8, VAR_6, ((void*)0));
 if (VAR_10 != 0)
  goto failed;

 VAR_8->config_index = 8;
 VAR_8->config_regs = VAR_4;

 VAR_10 = FUNC_3(VAR_8, VAR_7);
 if (VAR_10)
  goto failed;
 VAR_10 = FUNC_1(VAR_8);
 if (VAR_10)
  goto failed;

 VAR_9->io_base = VAR_8->resource[0]->start;
 VAR_9->irq_level = VAR_8->irq;
 return 0;

failed:
 FUNC_0((u_long)VAR_8);
 return -VAR_3;
}
