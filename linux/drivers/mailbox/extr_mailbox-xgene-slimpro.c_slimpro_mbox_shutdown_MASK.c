
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct slimpro_mbox_chan {int irq; int dev; scalar_t__ reg; } ;
struct mbox_chan {struct slimpro_mbox_chan* con_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,struct slimpro_mbox_chan*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct mbox_chan *VAR_3)
{
 struct slimpro_mbox_chan *VAR_4 = VAR_3->con_priv;
 u32 VAR_5;


 VAR_5 = FUNC_1(VAR_4->reg + VAR_2);
 VAR_5 |= (VAR_0 | VAR_1);
 FUNC_2(VAR_5, VAR_4->reg + VAR_2);

 FUNC_0(VAR_4->dev, VAR_4->irq, VAR_4);
}
