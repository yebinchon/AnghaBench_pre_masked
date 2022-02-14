
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etnaviv_pm_domain_meta {scalar_t__ nr_domains; struct etnaviv_pm_domain* domains; } ;
struct etnaviv_pm_domain {int name; int nr_signals; } ;
struct etnaviv_gpu {int dummy; } ;
struct drm_etnaviv_pm_domain {size_t pipe; scalar_t__ iter; int id; int name; int nr_signals; } ;


 int VAR_0 ;
 struct etnaviv_pm_domain_meta* VAR_1 ;
 int FUNC_0 (int ,int ,int) ;

int FUNC_1(struct etnaviv_gpu *VAR_2,
 struct drm_etnaviv_pm_domain *VAR_3)
{
 const struct etnaviv_pm_domain_meta *VAR_4 = &VAR_1[VAR_3->pipe];
 const struct etnaviv_pm_domain *VAR_5;

 if (VAR_3->iter >= VAR_4->nr_domains)
  return -VAR_0;

 VAR_5 = VAR_4->domains + VAR_3->iter;

 VAR_3->id = VAR_3->iter;
 VAR_3->nr_signals = VAR_5->nr_signals;
 FUNC_0(VAR_3->name, VAR_5->name, sizeof(VAR_3->name));

 VAR_3->iter++;
 if (VAR_3->iter == VAR_4->nr_domains)
  VAR_3->iter = 0xff;

 return 0;
}
