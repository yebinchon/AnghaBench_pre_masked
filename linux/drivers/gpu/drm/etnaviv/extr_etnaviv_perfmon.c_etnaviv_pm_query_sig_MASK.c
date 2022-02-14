
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etnaviv_pm_signal {int name; } ;
struct etnaviv_pm_domain_meta {scalar_t__ nr_domains; struct etnaviv_pm_domain* domains; } ;
struct etnaviv_pm_domain {size_t nr_signals; struct etnaviv_pm_signal* signal; } ;
struct etnaviv_gpu {int dummy; } ;
struct drm_etnaviv_pm_signal {size_t pipe; scalar_t__ domain; size_t iter; size_t id; int name; } ;


 int VAR_0 ;
 struct etnaviv_pm_domain_meta* VAR_1 ;
 int FUNC_0 (int ,int ,int) ;

int FUNC_1(struct etnaviv_gpu *VAR_2,
 struct drm_etnaviv_pm_signal *VAR_3)
{
 const struct etnaviv_pm_domain_meta *VAR_4 = &VAR_1[VAR_3->pipe];
 const struct etnaviv_pm_domain *VAR_5;
 const struct etnaviv_pm_signal *VAR_6;

 if (VAR_3->domain >= VAR_4->nr_domains)
  return -VAR_0;

 VAR_5 = VAR_4->domains + VAR_3->domain;

 if (VAR_3->iter >= VAR_5->nr_signals)
  return -VAR_0;

 VAR_6 = &VAR_5->signal[VAR_3->iter];

 VAR_3->id = VAR_3->iter;
 FUNC_0(VAR_3->name, VAR_6->name, sizeof(VAR_3->name));

 VAR_3->iter++;
 if (VAR_3->iter == VAR_5->nr_signals)
  VAR_3->iter = 0xffff;

 return 0;
}
