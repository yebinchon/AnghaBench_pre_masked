
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_bpmp_mrq {int list; } ;
struct tegra_bpmp {int lock; int dev; } ;


 int FUNC_0 (int ,struct tegra_bpmp_mrq*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct tegra_bpmp_mrq* FUNC_4 (struct tegra_bpmp*,unsigned int) ;

void FUNC_5(struct tegra_bpmp *VAR_0, unsigned int VAR_1, void *VAR_2)
{
 struct tegra_bpmp_mrq *VAR_3;
 unsigned long VAR_4;

 FUNC_2(&VAR_0->lock, VAR_4);

 VAR_3 = FUNC_4(VAR_0, VAR_1);
 if (!VAR_3)
  goto unlock;

 FUNC_1(&VAR_3->list);
 FUNC_0(VAR_0->dev, VAR_3);

unlock:
 FUNC_3(&VAR_0->lock, VAR_4);
}
