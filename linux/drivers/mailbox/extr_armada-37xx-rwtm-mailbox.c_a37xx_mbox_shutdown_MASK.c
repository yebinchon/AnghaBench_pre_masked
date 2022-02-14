
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mbox_chan {struct a37xx_mbox* con_priv; } ;
struct a37xx_mbox {int irq; int dev; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,struct mbox_chan*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct mbox_chan *VAR_4)
{
 u32 VAR_5;
 struct a37xx_mbox *VAR_6 = VAR_4->con_priv;


 VAR_5 = FUNC_1(VAR_6->base + VAR_0);
 VAR_5 |= VAR_1 | VAR_3 | VAR_2;
 FUNC_2(VAR_5, VAR_6->base + VAR_0);

 FUNC_0(VAR_6->dev, VAR_6->irq, VAR_4);
}
