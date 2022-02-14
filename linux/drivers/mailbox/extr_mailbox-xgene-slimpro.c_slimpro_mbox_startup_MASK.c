
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct slimpro_mbox_chan {scalar_t__ reg; int irq; int dev; } ;
struct mbox_chan {struct slimpro_mbox_chan* con_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,struct slimpro_mbox_chan*) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct mbox_chan *VAR_6)
{
 struct slimpro_mbox_chan *VAR_7 = VAR_6->con_priv;
 int VAR_8;
 u32 VAR_9;

 VAR_8 = FUNC_1(VAR_7->dev, VAR_7->irq, VAR_5, 0,
         VAR_0, VAR_7);
 if (FUNC_3(VAR_8)) {
  FUNC_0(VAR_7->dev, "failed to register mailbox interrupt %d\n",
   VAR_7->irq);
  return VAR_8;
 }


 FUNC_4(VAR_1 | VAR_2,
        VAR_7->reg + VAR_3);

 VAR_9 = FUNC_2(VAR_7->reg + VAR_4);
 VAR_9 &= ~(VAR_1 | VAR_2);
 FUNC_4(VAR_9, VAR_7->reg + VAR_4);

 return 0;
}
