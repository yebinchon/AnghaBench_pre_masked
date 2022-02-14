
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct etnaviv_pm_signal {int data; } ;
struct etnaviv_pm_domain {int profile_read; int profile_config; } ;
struct etnaviv_gpu {int dummy; } ;


 int FUNC_0 (struct etnaviv_gpu*,int ) ;
 int FUNC_1 (struct etnaviv_gpu*,int ,int ) ;

__attribute__((used)) static u32 FUNC_2(struct etnaviv_gpu *VAR_0,
 const struct etnaviv_pm_domain *VAR_1,
 const struct etnaviv_pm_signal *VAR_2)
{
 FUNC_1(VAR_0, VAR_1->profile_config, VAR_2->data);

 return FUNC_0(VAR_0, VAR_1->profile_read);
}
