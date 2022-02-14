
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {int config_flags; struct dtl1_info* priv; int dev; } ;
struct dtl1_info {struct pcmcia_device* p_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dtl1_info* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (struct pcmcia_device*) ;

__attribute__((used)) static int FUNC_2(struct pcmcia_device *VAR_4)
{
 struct dtl1_info *VAR_5;


 VAR_5 = FUNC_0(&VAR_4->dev, sizeof(*VAR_5), VAR_3);
 if (!VAR_5)
  return -VAR_2;

 VAR_5->p_dev = VAR_4;
 VAR_4->priv = VAR_5;

 VAR_4->config_flags |= VAR_1 | VAR_0;

 return FUNC_1(VAR_4);
}
