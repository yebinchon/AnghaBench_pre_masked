
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_hsp_doorbell {int channel; } ;
struct mbox_chan {struct tegra_hsp_doorbell* con_priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ) ;

__attribute__((used)) static int FUNC_1(struct mbox_chan *VAR_1, void *VAR_2)
{
 struct tegra_hsp_doorbell *VAR_3 = VAR_1->con_priv;

 FUNC_0(&VAR_3->channel, 1, VAR_0);

 return 0;
}
