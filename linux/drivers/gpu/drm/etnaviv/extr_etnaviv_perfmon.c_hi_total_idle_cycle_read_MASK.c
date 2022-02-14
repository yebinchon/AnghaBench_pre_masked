
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct etnaviv_pm_signal {int dummy; } ;
struct etnaviv_pm_domain {int dummy; } ;
struct TYPE_2__ {scalar_t__ model; } ;
struct etnaviv_gpu {TYPE_1__ identity; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct etnaviv_gpu*,int ) ;

__attribute__((used)) static u32 FUNC_1(struct etnaviv_gpu *VAR_5,
 const struct etnaviv_pm_domain *VAR_6,
 const struct etnaviv_pm_signal *VAR_7)
{
 u32 VAR_8 = VAR_0;

 if (VAR_5->identity.model == VAR_4 ||
  VAR_5->identity.model == VAR_2 ||
  VAR_5->identity.model == VAR_3)
  VAR_8 = VAR_1;

 return FUNC_0(VAR_5, VAR_8);
}
