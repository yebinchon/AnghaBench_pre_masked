
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* chan; scalar_t__ regs; struct tegra_hsp* hsp; } ;
struct tegra_hsp_mailbox {int index; TYPE_3__ channel; } ;
struct TYPE_4__ {TYPE_2__* chans; } ;
struct tegra_hsp {int num_sm; TYPE_1__ mbox_sm; scalar_t__ regs; struct tegra_hsp_mailbox* mailboxes; } ;
struct device {int dummy; } ;
struct TYPE_5__ {struct tegra_hsp_mailbox* con_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct tegra_hsp_mailbox* FUNC_0 (struct device*,int,int,int ) ;

__attribute__((used)) static int FUNC_1(struct tegra_hsp *VAR_4, struct device *VAR_5)
{
 int VAR_6;

 VAR_4->mailboxes = FUNC_0(VAR_5, VAR_4->num_sm, sizeof(*VAR_4->mailboxes),
          VAR_1);
 if (!VAR_4->mailboxes)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_4->num_sm; VAR_6++) {
  struct tegra_hsp_mailbox *VAR_7 = &VAR_4->mailboxes[VAR_6];

  VAR_7->index = VAR_6;

  VAR_7->channel.hsp = VAR_4;
  VAR_7->channel.regs = VAR_4->regs + VAR_3 + VAR_6 * VAR_2;
  VAR_7->channel.chan = &VAR_4->mbox_sm.chans[VAR_6];
  VAR_7->channel.chan->con_priv = VAR_7;
 }

 return 0;
}
