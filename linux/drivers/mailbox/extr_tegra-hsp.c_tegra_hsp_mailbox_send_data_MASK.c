
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct tegra_hsp* hsp; } ;
struct tegra_hsp_mailbox {scalar_t__ index; TYPE_1__ channel; int producer; } ;
struct tegra_hsp {int lock; int shared_irq; int mask; } ;
struct mbox_chan {struct tegra_hsp_mailbox* con_priv; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;
 int FUNC_6 (struct tegra_hsp*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct mbox_chan *VAR_4, void *VAR_5)
{
 struct tegra_hsp_mailbox *VAR_6 = VAR_4->con_priv;
 struct tegra_hsp *VAR_7 = VAR_6->channel.hsp;
 unsigned long VAR_8;
 u32 VAR_9;

 if (FUNC_2(!VAR_6->producer))
  return -VAR_0;


 VAR_9 = (u32)(unsigned long)VAR_5;
 VAR_9 |= VAR_3;

 FUNC_5(&VAR_6->channel, VAR_9, VAR_2);


 FUNC_3(&VAR_7->lock, VAR_8);

 VAR_7->mask |= FUNC_0(VAR_1 + VAR_6->index);
 FUNC_6(VAR_7, VAR_7->mask, FUNC_1(VAR_7->shared_irq));

 FUNC_4(&VAR_7->lock, VAR_8);

 return 0;
}
