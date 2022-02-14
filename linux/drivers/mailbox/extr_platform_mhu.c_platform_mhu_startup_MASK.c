
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct platform_mhu_link {int irq; scalar_t__ tx_reg; } ;
struct mbox_chan {TYPE_1__* mbox; struct platform_mhu_link* con_priv; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,int ,char*,struct mbox_chan*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct mbox_chan *VAR_4)
{
 struct platform_mhu_link *VAR_5 = VAR_4->con_priv;
 u32 VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_5->tx_reg + VAR_1);
 FUNC_3(VAR_6, VAR_5->tx_reg + VAR_0);

 VAR_7 = FUNC_2(VAR_5->irq, VAR_3,
     VAR_2, "platform_mhu_link", VAR_4);
 if (VAR_7) {
  FUNC_0(VAR_4->mbox->dev,
   "Unable to acquire IRQ %d\n", VAR_5->irq);
  return VAR_7;
 }

 return 0;
}
