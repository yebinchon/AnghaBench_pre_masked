
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {int config_flags; struct bluecard_info* priv; int dev; } ;
struct bluecard_info {struct pcmcia_device* p_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pcmcia_device*) ;
 struct bluecard_info* FUNC_1 (int *,int,int ) ;

__attribute__((used)) static int FUNC_2(struct pcmcia_device *VAR_3)
{
 struct bluecard_info *VAR_4;


 VAR_4 = FUNC_1(&VAR_3->dev, sizeof(*VAR_4), VAR_2);
 if (!VAR_4)
  return -VAR_1;

 VAR_4->p_dev = VAR_3;
 VAR_3->priv = VAR_4;

 VAR_3->config_flags |= VAR_0;

 return FUNC_0(VAR_3);
}
