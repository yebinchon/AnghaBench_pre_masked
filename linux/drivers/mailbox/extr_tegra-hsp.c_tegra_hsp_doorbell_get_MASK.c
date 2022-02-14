
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_hsp_doorbell {int dummy; } ;
struct tegra_hsp {int lock; } ;


 struct tegra_hsp_doorbell* FUNC_0 (struct tegra_hsp*,unsigned int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static struct tegra_hsp_doorbell *
FUNC_3(struct tegra_hsp *VAR_0, unsigned int VAR_1)
{
 struct tegra_hsp_doorbell *VAR_2;
 unsigned long VAR_3;

 FUNC_1(&VAR_0->lock, VAR_3);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->lock, VAR_3);

 return VAR_2;
}
