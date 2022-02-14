
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct etnaviv_pm_signal {scalar_t__ data; } ;
struct etnaviv_pm_domain {int profile_read; int profile_config; } ;
struct TYPE_2__ {unsigned int pixel_pipes; } ;
struct etnaviv_gpu {TYPE_1__ identity; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct etnaviv_gpu*,int ) ;
 int FUNC_2 (struct etnaviv_gpu*,int ,scalar_t__) ;

__attribute__((used)) static u32 FUNC_3(struct etnaviv_gpu *VAR_2,
 const struct etnaviv_pm_domain *VAR_3,
 const struct etnaviv_pm_signal *VAR_4)
{
 u32 VAR_5 = FUNC_1(VAR_2, VAR_0);
 u32 VAR_6 = 0;
 unsigned VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_2->identity.pixel_pipes; VAR_7++) {
  VAR_5 &= ~(VAR_1);
  VAR_5 |= FUNC_0(VAR_7);
  FUNC_2(VAR_2, VAR_0, VAR_5);
  FUNC_2(VAR_2, VAR_3->profile_config, VAR_4->data);
  VAR_6 += FUNC_1(VAR_2, VAR_3->profile_read);
 }


 VAR_5 &= ~(VAR_1);
 VAR_5 |= FUNC_0(0);
 FUNC_2(VAR_2, VAR_0, VAR_5);

 return VAR_6;
}
