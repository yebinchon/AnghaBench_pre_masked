
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mbox_chan {struct a37xx_mbox* con_priv; } ;
struct a37xx_mbox {scalar_t__ base; int dev; int irq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int ,int ,int ,struct mbox_chan*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct mbox_chan *VAR_6)
{
 struct a37xx_mbox *VAR_7 = VAR_6->con_priv;
 u32 VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_7->dev, VAR_7->irq, VAR_5, 0,
          VAR_0, VAR_6);
 if (VAR_9 < 0) {
  FUNC_0(VAR_7->dev, "Cannot request irq\n");
  return VAR_9;
 }


 VAR_8 = FUNC_2(VAR_7->base + VAR_1);
 VAR_8 &= ~(VAR_2 | VAR_4 | VAR_3);
 FUNC_3(VAR_8, VAR_7->base + VAR_1);

 return 0;
}
