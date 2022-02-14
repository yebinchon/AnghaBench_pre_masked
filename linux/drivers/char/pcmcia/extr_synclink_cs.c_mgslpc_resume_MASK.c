
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {TYPE_1__* priv; } ;
struct TYPE_2__ {scalar_t__ stop; } ;
typedef TYPE_1__ MGSLPC_INFO ;



__attribute__((used)) static int FUNC_0(struct pcmcia_device *VAR_0)
{
 MGSLPC_INFO *VAR_1 = VAR_0->priv;

 VAR_1->stop = 0;

 return 0;
}
