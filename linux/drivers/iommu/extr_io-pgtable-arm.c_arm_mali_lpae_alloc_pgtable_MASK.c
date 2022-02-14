
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int memattr; int transtab; } ;
struct io_pgtable_cfg {int ias; int oas; int pgsize_bitmap; TYPE_1__ arm_mali_lpae_cfg; scalar_t__ quirks; } ;
struct io_pgtable {int dummy; } ;
struct arm_lpae_io_pgtable {scalar_t__ levels; int pgd_size; struct io_pgtable iop; int pgd; } ;
typedef int arm_lpae_iopte ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int,int ,struct io_pgtable_cfg*) ;
 struct arm_lpae_io_pgtable* FUNC_2 (struct io_pgtable_cfg*) ;
 int FUNC_3 (struct arm_lpae_io_pgtable*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;

__attribute__((used)) static struct io_pgtable *
FUNC_6(struct io_pgtable_cfg *VAR_12, void *VAR_13)
{
 struct arm_lpae_io_pgtable *VAR_14;


 if (VAR_12->quirks)
  return ((void*)0);

 if (VAR_12->ias > 48 || VAR_12->oas > 40)
  return ((void*)0);

 VAR_12->pgsize_bitmap &= (VAR_11 | VAR_10 | VAR_9);

 VAR_14 = FUNC_2(VAR_12);
 if (!VAR_14)
  return ((void*)0);


 if (VAR_14->levels < VAR_3) {
  VAR_14->levels = VAR_3;
  VAR_14->pgd_size = sizeof(arm_lpae_iopte);
 }







 VAR_12->arm_mali_lpae_cfg.memattr =
  (VAR_4
   << FUNC_0(VAR_2)) |
  (VAR_5
   << FUNC_0(VAR_0)) |
  (VAR_4
   << FUNC_0(VAR_1));

 VAR_14->pgd = FUNC_1(VAR_14->pgd_size, VAR_8, VAR_12);
 if (!VAR_14->pgd)
  goto out_free_data;


 FUNC_5();

 VAR_12->arm_mali_lpae_cfg.transtab = FUNC_4(VAR_14->pgd) |
       VAR_7 |
       VAR_6;
 return &VAR_14->iop;

out_free_data:
 FUNC_3(VAR_14);
 return ((void*)0);
}
