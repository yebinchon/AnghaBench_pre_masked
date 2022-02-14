
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {int config_flags; struct bt3c_info* priv; int dev; } ;
struct bt3c_info {struct pcmcia_device* p_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pcmcia_device*) ;
 struct bt3c_info* FUNC_1 (int *,int,int ) ;

__attribute__((used)) static int FUNC_2(struct pcmcia_device *VAR_5)
{
 struct bt3c_info *VAR_6;


 VAR_6 = FUNC_1(&VAR_5->dev, sizeof(*VAR_6), VAR_4);
 if (!VAR_6)
  return -VAR_3;

 VAR_6->p_dev = VAR_5;
 VAR_5->priv = VAR_6;

 VAR_5->config_flags |= VAR_2 | VAR_1 |
  VAR_0;

 return FUNC_0(VAR_5);
}
