
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {int config_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pcmcia_device*) ;
 scalar_t__ FUNC_1 (struct pcmcia_device*) ;
 scalar_t__ FUNC_2 (struct pcmcia_device*,int ,int *) ;

__attribute__((used)) static int FUNC_3(struct pcmcia_device * VAR_3, int VAR_4)
{
 VAR_3->config_flags |= VAR_0;


 if (FUNC_2(VAR_3, VAR_2, ((void*)0)))
  goto cs_release;

 if (FUNC_1(VAR_3))
  goto cs_release;

 return 0;

cs_release:
 FUNC_0(VAR_3);
 return -VAR_1;
}
