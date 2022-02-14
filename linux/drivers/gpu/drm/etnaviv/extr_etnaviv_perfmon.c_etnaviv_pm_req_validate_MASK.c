
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct etnaviv_pm_domain_meta {scalar_t__ nr_domains; struct etnaviv_pm_domain* domains; } ;
struct etnaviv_pm_domain {scalar_t__ nr_signals; } ;
struct drm_etnaviv_gem_submit_pmr {scalar_t__ domain; scalar_t__ signal; } ;


 int VAR_0 ;
 struct etnaviv_pm_domain_meta* VAR_1 ;

int FUNC_0(const struct drm_etnaviv_gem_submit_pmr *VAR_2,
 u32 VAR_3)
{
 const struct etnaviv_pm_domain_meta *VAR_4 = &VAR_1[VAR_3];
 const struct etnaviv_pm_domain *VAR_5;

 if (VAR_2->domain >= VAR_4->nr_domains)
  return -VAR_0;

 VAR_5 = VAR_4->domains + VAR_2->domain;

 if (VAR_2->signal >= VAR_5->nr_signals)
  return -VAR_0;

 return 0;
}
