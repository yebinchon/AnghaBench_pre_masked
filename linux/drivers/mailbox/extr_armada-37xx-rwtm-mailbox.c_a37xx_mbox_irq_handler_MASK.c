
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mbox_chan {struct a37xx_mbox* con_priv; } ;
struct a37xx_mbox {scalar_t__ base; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mbox_chan*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct mbox_chan*,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_6, void *VAR_7)
{
 struct mbox_chan *VAR_8 = VAR_7;
 struct a37xx_mbox *VAR_9 = VAR_8->con_priv;
 u32 VAR_10;

 VAR_10 = FUNC_3(VAR_9->base + VAR_2);

 if (VAR_10 & VAR_3)
  FUNC_0(VAR_8);

 if (VAR_10 & (VAR_5 | VAR_4))
  FUNC_1(VAR_9->dev, "Secure processor command queue full\n");

 FUNC_4(VAR_10, VAR_9->base + VAR_2);
 if (VAR_10)
  FUNC_2(VAR_8, 0);

 return VAR_10 ? VAR_0 : VAR_1;
}
