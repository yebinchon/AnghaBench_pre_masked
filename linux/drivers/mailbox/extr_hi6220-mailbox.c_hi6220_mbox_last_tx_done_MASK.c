
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mbox_chan {struct hi6220_mbox_chan* con_priv; } ;
struct hi6220_mbox_chan {int slot; struct hi6220_mbox* parent; } ;
struct hi6220_mbox {scalar_t__ base; int tx_irq_mode; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static bool FUNC_3(struct mbox_chan *VAR_2)
{
 struct hi6220_mbox_chan *VAR_3 = VAR_2->con_priv;
 struct hi6220_mbox *VAR_4 = VAR_3->parent;
 u32 VAR_5;


 FUNC_0(VAR_4->tx_irq_mode);

 VAR_5 = FUNC_2(VAR_4->base + FUNC_1(VAR_3->slot));
 return ((VAR_5 & VAR_1) == VAR_0);
}
