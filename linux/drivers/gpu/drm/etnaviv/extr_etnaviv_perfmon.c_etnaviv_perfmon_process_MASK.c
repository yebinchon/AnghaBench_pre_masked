
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct etnaviv_pm_signal {size_t (* sample ) (struct etnaviv_gpu*,struct etnaviv_pm_domain const*,struct etnaviv_pm_signal const*) ;} ;
struct etnaviv_pm_domain_meta {struct etnaviv_pm_domain* domains; } ;
struct etnaviv_pm_domain {struct etnaviv_pm_signal* signal; } ;
struct etnaviv_perfmon_request {size_t* bo_vma; int domain; size_t signal; int offset; } ;
struct etnaviv_gpu {int dummy; } ;


 struct etnaviv_pm_domain_meta* VAR_0 ;
 size_t FUNC_0 (struct etnaviv_gpu*,struct etnaviv_pm_domain const*,struct etnaviv_pm_signal const*) ;

void FUNC_1(struct etnaviv_gpu *VAR_1,
 const struct etnaviv_perfmon_request *VAR_2, u32 VAR_3)
{
 const struct etnaviv_pm_domain_meta *VAR_4 = &VAR_0[VAR_3];
 const struct etnaviv_pm_domain *VAR_5;
 const struct etnaviv_pm_signal *VAR_6;
 u32 *VAR_7 = VAR_2->bo_vma;
 u32 VAR_8;

 VAR_5 = VAR_4->domains + VAR_2->domain;
 VAR_6 = &VAR_5->signal[VAR_2->signal];
 VAR_8 = VAR_6->sample(VAR_1, VAR_5, VAR_6);

 *(VAR_7 + VAR_2->offset) = VAR_8;
}
