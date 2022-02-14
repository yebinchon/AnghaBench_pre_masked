
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {struct tegra_hsp* hsp; } ;
struct tegra_hsp_doorbell {scalar_t__ master; TYPE_2__ channel; } ;
struct tegra_hsp {int lock; } ;
struct mbox_chan {TYPE_1__* mbox; struct tegra_hsp_doorbell* con_priv; } ;
struct TYPE_4__ {scalar_t__ num_chans; int dev; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,int ,int ) ;
 int FUNC_6 (struct tegra_hsp_doorbell*) ;
 struct tegra_hsp_doorbell* FUNC_7 (struct tegra_hsp*,int ) ;

__attribute__((used)) static int FUNC_8(struct mbox_chan *VAR_4)
{
 struct tegra_hsp_doorbell *VAR_5 = VAR_4->con_priv;
 struct tegra_hsp *VAR_6 = VAR_5->channel.hsp;
 struct tegra_hsp_doorbell *VAR_7;
 unsigned long VAR_8;
 u32 VAR_9;

 if (VAR_5->master >= VAR_4->mbox->num_chans) {
  FUNC_1(VAR_4->mbox->dev,
   "invalid master ID %u for HSP channel\n",
   VAR_5->master);
  return -VAR_0;
 }

 VAR_7 = FUNC_7(VAR_6, VAR_3);
 if (!VAR_7)
  return -VAR_1;

 if (!FUNC_6(VAR_5))
  return -VAR_1;

 FUNC_2(&VAR_6->lock, VAR_8);

 VAR_9 = FUNC_4(&VAR_7->channel, VAR_2);
 VAR_9 |= FUNC_0(VAR_5->master);
 FUNC_5(&VAR_7->channel, VAR_9, VAR_2);

 FUNC_3(&VAR_6->lock, VAR_8);

 return 0;
}
