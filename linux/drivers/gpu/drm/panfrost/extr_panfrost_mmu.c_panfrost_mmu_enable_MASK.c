
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int transtab; int memattr; } ;
struct io_pgtable_cfg {TYPE_1__ arm_mali_lpae_cfg; } ;
struct panfrost_mmu {int as; struct io_pgtable_cfg pgtbl_cfg; } ;
struct panfrost_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct panfrost_device*,int,int ,unsigned long,int ) ;
 int FUNC_5 (struct panfrost_device*,int ,int) ;
 int FUNC_6 (struct panfrost_device*,int,int ) ;

__attribute__((used)) static void FUNC_7(struct panfrost_device *VAR_2, struct panfrost_mmu *VAR_3)
{
 int VAR_4 = VAR_3->as;
 struct io_pgtable_cfg *VAR_5 = &VAR_3->pgtbl_cfg;
 u64 VAR_6 = VAR_5->arm_mali_lpae_cfg.transtab;
 u64 VAR_7 = VAR_5->arm_mali_lpae_cfg.memattr;

 FUNC_4(VAR_2, VAR_4, 0, ~0UL, VAR_0);

 FUNC_5(VAR_2, FUNC_3(VAR_4), VAR_6 & 0xffffffffUL);
 FUNC_5(VAR_2, FUNC_2(VAR_4), VAR_6 >> 32);




 FUNC_5(VAR_2, FUNC_1(VAR_4), VAR_7 & 0xffffffffUL);
 FUNC_5(VAR_2, FUNC_0(VAR_4), VAR_7 >> 32);

 FUNC_6(VAR_2, VAR_4, VAR_1);
}
