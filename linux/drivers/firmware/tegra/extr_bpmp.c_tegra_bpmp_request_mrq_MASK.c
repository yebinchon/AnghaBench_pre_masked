
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tegra_bpmp_mrq_handler_t ;
struct tegra_bpmp_mrq {unsigned int mrq; int list; void* data; scalar_t__ handler; } ;
struct tegra_bpmp {int lock; int mrqs; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tegra_bpmp_mrq* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct tegra_bpmp *VAR_3, unsigned int VAR_4,
      tegra_bpmp_mrq_handler_t VAR_5, void *VAR_6)
{
 struct tegra_bpmp_mrq *VAR_7;
 unsigned long VAR_8;

 if (!VAR_5)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_3->dev, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 FUNC_2(&VAR_3->lock, VAR_8);

 VAR_7->mrq = VAR_4;
 VAR_7->handler = VAR_5;
 VAR_7->data = VAR_6;
 FUNC_1(&VAR_7->list, &VAR_3->mrqs);

 FUNC_3(&VAR_3->lock, VAR_8);

 return 0;
}
