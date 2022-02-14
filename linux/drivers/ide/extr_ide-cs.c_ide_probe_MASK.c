
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcmcia_device {int config_flags; TYPE_1__* priv; int dev; } ;
struct TYPE_3__ {struct pcmcia_device* p_dev; } ;
typedef TYPE_1__ ide_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct pcmcia_device*) ;
 TYPE_1__* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct pcmcia_device *VAR_6)
{
    ide_info_t *VAR_7;

    FUNC_0(&VAR_6->dev, "ide_attach()\n");


    VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_5);
    if (!VAR_7)
 return -VAR_4;

    VAR_7->p_dev = VAR_6;
    VAR_6->priv = VAR_7;

    VAR_6->config_flags |= VAR_3 | VAR_1 |
     VAR_2 | VAR_0;

    return FUNC_1(VAR_6);
}
