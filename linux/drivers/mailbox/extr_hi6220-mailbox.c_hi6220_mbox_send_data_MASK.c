
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mbox_chan {struct hi6220_mbox_chan* con_priv; } ;
struct hi6220_mbox_chan {unsigned int slot; int dst_irq; int dir; struct hi6220_mbox* parent; } ;
struct hi6220_mbox {int ipc; scalar_t__ base; scalar_t__ tx_irq_mode; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct hi6220_mbox*,unsigned int,int ) ;
 int FUNC_4 (struct hi6220_mbox*,unsigned int,int ) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct mbox_chan *VAR_5, void *VAR_6)
{
 struct hi6220_mbox_chan *VAR_7 = VAR_5->con_priv;
 struct hi6220_mbox *VAR_8 = VAR_7->parent;
 unsigned int VAR_9 = VAR_7->slot;
 u32 *VAR_10 = VAR_6;
 int VAR_11;


 VAR_7->dir = VAR_4;

 FUNC_4(VAR_8, VAR_9, VAR_3);

 if (VAR_8->tx_irq_mode)
  FUNC_3(VAR_8, VAR_9, VAR_1);
 else
  FUNC_3(VAR_8, VAR_9, VAR_0);

 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++)
  FUNC_5(VAR_10[VAR_11], VAR_8->base + FUNC_2(VAR_9) + VAR_11 * 4);


 FUNC_5(FUNC_0(VAR_7->dst_irq), FUNC_1(VAR_8->ipc));
 return 0;
}
