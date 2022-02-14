
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {struct bluecard_info* priv; } ;
struct bluecard_info {int timer; } ;


 int FUNC_0 (struct bluecard_info*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pcmcia_device*) ;

__attribute__((used)) static void FUNC_3(struct pcmcia_device *VAR_0)
{
 struct bluecard_info *VAR_1 = VAR_0->priv;

 FUNC_0(VAR_1);

 FUNC_1(&(VAR_1->timer));

 FUNC_2(VAR_0);
}
