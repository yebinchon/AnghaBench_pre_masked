
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {int dev; int * priv; } ;
typedef int ide_info_t ;


 int FUNC_0 (int *,char*,struct pcmcia_device*) ;
 int FUNC_1 (struct pcmcia_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct pcmcia_device *VAR_0)
{
    ide_info_t *VAR_1 = VAR_0->priv;

    FUNC_0(&VAR_0->dev, "ide_detach(0x%p)\n", VAR_0);

    FUNC_1(VAR_0);

    FUNC_2(VAR_1);
}
