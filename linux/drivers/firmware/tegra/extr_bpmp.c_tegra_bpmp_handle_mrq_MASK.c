
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zero ;
typedef int u32 ;
struct tegra_bpmp_mrq {int data; int (* handler ) (unsigned int,struct tegra_bpmp_channel*,int ) ;} ;
struct tegra_bpmp_channel {int dummy; } ;
struct tegra_bpmp {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned int,struct tegra_bpmp_channel*,int ) ;
 struct tegra_bpmp_mrq* FUNC_3 (struct tegra_bpmp*,unsigned int) ;
 int FUNC_4 (struct tegra_bpmp_channel*,int ,int *,int) ;

__attribute__((used)) static void FUNC_5(struct tegra_bpmp *VAR_1,
      unsigned int VAR_2,
      struct tegra_bpmp_channel *VAR_3)
{
 struct tegra_bpmp_mrq *VAR_4;
 u32 VAR_5 = 0;

 FUNC_0(&VAR_1->lock);

 VAR_4 = FUNC_3(VAR_1, VAR_2);
 if (!VAR_4) {
  FUNC_1(&VAR_1->lock);
  FUNC_4(VAR_3, -VAR_0, &VAR_5, sizeof(VAR_5));
  return;
 }

 VAR_4->handler(VAR_2, VAR_3, VAR_4->data);

 FUNC_1(&VAR_1->lock);
}
