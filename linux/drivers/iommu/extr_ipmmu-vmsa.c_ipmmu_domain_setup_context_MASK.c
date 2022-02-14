
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_5__ {int* ttbr; int* mair; } ;
struct TYPE_6__ {TYPE_1__ arm_lpae_s1_cfg; } ;
struct ipmmu_vmsa_domain {TYPE_4__* mmu; TYPE_2__ cfg; } ;
struct TYPE_8__ {TYPE_3__* features; } ;
struct TYPE_7__ {scalar_t__ setup_imbuscr; scalar_t__ cache_snoop; scalar_t__ twobit_imttbcr_sl0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct ipmmu_vmsa_domain*,int ) ;
 int FUNC_1 (struct ipmmu_vmsa_domain*,int ,int) ;
 int FUNC_2 (struct ipmmu_vmsa_domain*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct ipmmu_vmsa_domain *VAR_18)
{
 u64 VAR_19;
 u32 VAR_20;


 VAR_19 = VAR_18->cfg.arm_lpae_s1_cfg.ttbr[0];
 FUNC_2(VAR_18, VAR_16, VAR_19);
 FUNC_2(VAR_18, VAR_17, VAR_19 >> 32);






 if (VAR_18->mmu->features->twobit_imttbcr_sl0)
  VAR_20 = VAR_15;
 else
  VAR_20 = VAR_14;

 if (VAR_18->mmu->features->cache_snoop)
  VAR_20 |= VAR_13 | VAR_12 |
         VAR_11;

 FUNC_2(VAR_18, VAR_9, VAR_10 | VAR_20);


 FUNC_2(VAR_18, VAR_7,
        VAR_18->cfg.arm_lpae_s1_cfg.mair[0]);


 if (VAR_18->mmu->features->setup_imbuscr)
  FUNC_2(VAR_18, VAR_0,
         FUNC_0(VAR_18, VAR_0) &
         ~(VAR_2 | VAR_1));





 FUNC_2(VAR_18, VAR_8, FUNC_0(VAR_18, VAR_8));
 FUNC_1(VAR_18, VAR_3,
       VAR_5 | VAR_4 | VAR_6);
}
