
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_dma_channel {struct tegra_dma* tdma; } ;
struct tegra_dma {scalar_t__ global_pause_count; int global_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tegra_dma*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct tegra_dma_channel *VAR_2)
{
 struct tegra_dma *VAR_3 = VAR_2->tdma;

 FUNC_1(&VAR_3->global_lock);

 if (FUNC_0(VAR_2->tdma->global_pause_count == 0))
  goto out;

 if (--VAR_2->tdma->global_pause_count == 0)
  FUNC_3(VAR_3, VAR_0,
      VAR_1);

out:
 FUNC_2(&VAR_3->global_lock);
}
