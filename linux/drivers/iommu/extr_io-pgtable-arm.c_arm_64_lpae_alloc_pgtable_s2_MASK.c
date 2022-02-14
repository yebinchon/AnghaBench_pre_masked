
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct TYPE_2__ {unsigned long long vtcr; int vttbr; } ;
struct io_pgtable_cfg {int quirks; int oas; unsigned long long ias; TYPE_1__ arm_lpae_s2_cfg; } ;
struct io_pgtable {int dummy; } ;
struct arm_lpae_io_pgtable {scalar_t__ levels; unsigned long pgd_size; unsigned long pg_shift; struct io_pgtable iop; int pgd; } ;
typedef int arm_lpae_iopte ;


 unsigned long long VAR_0 ;
 int FUNC_0 (struct arm_lpae_io_pgtable*) ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long long FUNC_1 (struct arm_lpae_io_pgtable*) ;
 unsigned long long VAR_3 ;
 unsigned long long VAR_4 ;
 unsigned long long VAR_5 ;
 unsigned long long VAR_6 ;
 unsigned long long VAR_7 ;
 unsigned long long VAR_8 ;
 unsigned long long VAR_9 ;
 unsigned long long VAR_10 ;
 unsigned long long VAR_11 ;
 unsigned long long VAR_12 ;
 unsigned long long VAR_13 ;
 unsigned long long VAR_14 ;
 unsigned long long VAR_15 ;
 unsigned long long VAR_16 ;
 unsigned long long VAR_17 ;
 unsigned long long VAR_18 ;
 unsigned long long VAR_19 ;
 unsigned long long VAR_20 ;
 unsigned long long VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;



 int FUNC_2 (unsigned long,int ,struct io_pgtable_cfg*) ;
 struct arm_lpae_io_pgtable* FUNC_3 (struct io_pgtable_cfg*) ;
 unsigned long FUNC_4 (int) ;
 int FUNC_5 (struct arm_lpae_io_pgtable*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;

__attribute__((used)) static struct io_pgtable *
FUNC_8(struct io_pgtable_cfg *VAR_24, void *VAR_25)
{
 u64 VAR_26, VAR_27;
 struct arm_lpae_io_pgtable *VAR_28;


 if (VAR_24->quirks & ~(VAR_23))
  return ((void*)0);

 VAR_28 = FUNC_3(VAR_24);
 if (!VAR_28)
  return ((void*)0);





 if (VAR_28->levels == VAR_1) {
  unsigned long VAR_29;

  VAR_29 = VAR_28->pgd_size >> FUNC_4(sizeof(arm_lpae_iopte));
  if (VAR_29 <= VAR_2) {
   VAR_28->pgd_size = VAR_29 << VAR_28->pg_shift;
   VAR_28->levels--;
  }
 }


 VAR_26 = VAR_0 |
      (VAR_15 << VAR_14) |
      (VAR_13 << VAR_3) |
      (VAR_13 << VAR_4);

 VAR_27 = FUNC_1(VAR_28);

 switch (FUNC_0(VAR_28)) {
 case 129:
  VAR_26 |= VAR_20;
  VAR_27++;
  break;
 case 130:
  VAR_26 |= VAR_19;
  break;
 case 128:
  VAR_26 |= VAR_21;
  break;
 }

 switch (VAR_24->oas) {
 case 32:
  VAR_26 |= (VAR_5 << VAR_12);
  break;
 case 36:
  VAR_26 |= (VAR_6 << VAR_12);
  break;
 case 40:
  VAR_26 |= (VAR_7 << VAR_12);
  break;
 case 42:
  VAR_26 |= (VAR_8 << VAR_12);
  break;
 case 44:
  VAR_26 |= (VAR_9 << VAR_12);
  break;
 case 48:
  VAR_26 |= (VAR_10 << VAR_12);
  break;
 case 52:
  VAR_26 |= (VAR_11 << VAR_12);
  break;
 default:
  goto out_free_data;
 }

 VAR_26 |= (64ULL - VAR_24->ias) << VAR_18;
 VAR_26 |= (~VAR_27 & VAR_16) << VAR_17;
 VAR_24->arm_lpae_s2_cfg.vtcr = VAR_26;


 VAR_28->pgd = FUNC_2(VAR_28->pgd_size, VAR_22, VAR_24);
 if (!VAR_28->pgd)
  goto out_free_data;


 FUNC_7();


 VAR_24->arm_lpae_s2_cfg.vttbr = FUNC_6(VAR_28->pgd);
 return &VAR_28->iop;

out_free_data:
 FUNC_5(VAR_28);
 return ((void*)0);
}
