
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_hsp_channel {int dummy; } ;
struct tegra_hsp_mailbox {struct tegra_hsp_channel channel; } ;
struct mbox_chan {struct tegra_hsp_mailbox* con_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (struct mbox_chan*,int ) ;
 unsigned long FUNC_1 (unsigned long) ;
 int FUNC_2 (struct tegra_hsp_channel*,int ) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct mbox_chan *VAR_4,
       unsigned long VAR_5)
{
 struct tegra_hsp_mailbox *VAR_6 = VAR_4->con_priv;
 struct tegra_hsp_channel *VAR_7 = &VAR_6->channel;
 u32 VAR_8;

 VAR_5 = VAR_3 + FUNC_1(VAR_5);

 while (FUNC_3(VAR_3, VAR_5)) {
  VAR_8 = FUNC_2(VAR_7, VAR_1);
  if ((VAR_8 & VAR_2) == 0) {
   FUNC_0(VAR_4, 0);
   return 0;
  }

  FUNC_4(1);
 }

 return -VAR_0;
}
