
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_hsp_channel {struct tegra_hsp* hsp; scalar_t__ regs; } ;
struct tegra_hsp_doorbell {unsigned int master; unsigned int index; struct tegra_hsp_channel channel; int list; int name; } ;
struct tegra_hsp {int num_sm; int num_ss; int num_as; int lock; int doorbells; int dev; scalar_t__ regs; } ;


 int VAR_0 ;
 struct tegra_hsp_channel* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char const*,int ) ;
 struct tegra_hsp_doorbell* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static struct tegra_hsp_channel *
FUNC_6(struct tegra_hsp *VAR_3, const char *VAR_4,
     unsigned int VAR_5, unsigned int VAR_6)
{
 struct tegra_hsp_doorbell *VAR_7;
 unsigned int VAR_8;
 unsigned long VAR_9;

 VAR_7 = FUNC_2(VAR_3->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 VAR_8 = (1 + (VAR_3->num_sm / 2) + VAR_3->num_ss + VAR_3->num_as) * VAR_2;
 VAR_8 += VAR_6 * 0x100;

 VAR_7->channel.regs = VAR_3->regs + VAR_8;
 VAR_7->channel.hsp = VAR_3;

 VAR_7->name = FUNC_1(VAR_3->dev, VAR_4, VAR_1);
 VAR_7->master = VAR_5;
 VAR_7->index = VAR_6;

 FUNC_4(&VAR_3->lock, VAR_9);
 FUNC_3(&VAR_7->list, &VAR_3->doorbells);
 FUNC_5(&VAR_3->lock, VAR_9);

 return &VAR_7->channel;
}
