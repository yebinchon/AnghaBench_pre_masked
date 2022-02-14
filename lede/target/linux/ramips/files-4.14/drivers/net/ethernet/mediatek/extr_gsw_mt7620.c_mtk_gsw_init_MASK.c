
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct mt7620_gsw {scalar_t__ irq; } ;
struct fe_priv {TYPE_1__* dev; TYPE_2__* soc; struct device_node* switch_np; } ;
struct device_node {int dummy; } ;
struct TYPE_6__ {int compatible; } ;
struct TYPE_5__ {struct mt7620_gsw* swpriv; } ;
struct TYPE_4__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;
 int FUNC_0 (struct mt7620_gsw*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mt7620_gsw*,int ,int ) ;
 int FUNC_3 (struct device_node*,int ) ;
 struct platform_device* FUNC_4 (struct device_node*) ;
 struct mt7620_gsw* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (scalar_t__,int ,int ,char*,struct fe_priv*) ;

int FUNC_7(struct fe_priv *VAR_6)
{
 struct device_node *VAR_7 = VAR_6->switch_np;
 struct platform_device *VAR_8 = FUNC_4(VAR_7);
 struct mt7620_gsw *VAR_9;

 if (!VAR_8)
  return -VAR_1;

 if (!FUNC_3(VAR_7, VAR_5->compatible))
  return -VAR_0;

 VAR_9 = FUNC_5(VAR_8);
 VAR_6->soc->swpriv = VAR_9;

 FUNC_0(VAR_9, FUNC_1(VAR_6->dev->of_node));

 if (VAR_9->irq) {
  FUNC_6(VAR_9->irq, VAR_4, 0,
       "gsw", VAR_6);
  FUNC_2(VAR_9, ~VAR_3, VAR_2);
 }

 return 0;
}
