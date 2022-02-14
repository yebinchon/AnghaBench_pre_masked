
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct TYPE_2__ {unsigned long long tcr; unsigned long long* mair; int * ttbr; } ;
struct io_pgtable_cfg {int quirks; int oas; unsigned long long ias; TYPE_1__ arm_lpae_s1_cfg; scalar_t__ coherent_walk; } ;
struct io_pgtable {int dummy; } ;
struct arm_lpae_io_pgtable {struct io_pgtable iop; int pgd; int pgd_size; } ;


 int FUNC_0 (struct arm_lpae_io_pgtable*) ;
 unsigned long long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long long VAR_5 ;
 unsigned long long VAR_6 ;
 unsigned long long FUNC_1 (int ) ;
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
 unsigned long long VAR_22 ;
 unsigned long long VAR_23 ;
 unsigned long long VAR_24 ;
 unsigned long long VAR_25 ;
 unsigned long long VAR_26 ;
 unsigned long long VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;



 int FUNC_2 (int ,int ,struct io_pgtable_cfg*) ;
 struct arm_lpae_io_pgtable* FUNC_3 (struct io_pgtable_cfg*) ;
 int FUNC_4 (struct arm_lpae_io_pgtable*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;

__attribute__((used)) static struct io_pgtable *
FUNC_7(struct io_pgtable_cfg *VAR_31, void *VAR_32)
{
 u64 VAR_33;
 struct arm_lpae_io_pgtable *VAR_34;

 if (VAR_31->quirks & ~(VAR_29 |
       VAR_30))
  return ((void*)0);

 VAR_34 = FUNC_3(VAR_31);
 if (!VAR_34)
  return ((void*)0);


 if (VAR_31->coherent_walk) {
  VAR_33 = (VAR_22 << VAR_21) |
        (VAR_20 << VAR_10) |
        (VAR_20 << VAR_11);
 } else {
  VAR_33 = (VAR_23 << VAR_21) |
        (VAR_19 << VAR_10) |
        (VAR_19 << VAR_11);
 }

 switch (FUNC_0(VAR_34)) {
 case 129:
  VAR_33 |= VAR_26;
  break;
 case 130:
  VAR_33 |= VAR_25;
  break;
 case 128:
  VAR_33 |= VAR_27;
  break;
 }

 switch (VAR_31->oas) {
 case 32:
  VAR_33 |= (VAR_12 << VAR_9);
  break;
 case 36:
  VAR_33 |= (VAR_13 << VAR_9);
  break;
 case 40:
  VAR_33 |= (VAR_14 << VAR_9);
  break;
 case 42:
  VAR_33 |= (VAR_15 << VAR_9);
  break;
 case 44:
  VAR_33 |= (VAR_16 << VAR_9);
  break;
 case 48:
  VAR_33 |= (VAR_17 << VAR_9);
  break;
 case 52:
  VAR_33 |= (VAR_18 << VAR_9);
  break;
 default:
  goto out_free_data;
 }

 VAR_33 |= (64ULL - VAR_31->ias) << VAR_24;


 VAR_33 |= VAR_8;
 VAR_31->arm_lpae_s1_cfg.tcr = VAR_33;


 VAR_33 = (VAR_6
        << FUNC_1(VAR_4)) |
       (VAR_7
        << FUNC_1(VAR_1)) |
       (VAR_0
        << FUNC_1(VAR_2)) |
       (VAR_5
        << FUNC_1(VAR_3));

 VAR_31->arm_lpae_s1_cfg.mair[0] = VAR_33;
 VAR_31->arm_lpae_s1_cfg.mair[1] = 0;


 VAR_34->pgd = FUNC_2(VAR_34->pgd_size, VAR_28, VAR_31);
 if (!VAR_34->pgd)
  goto out_free_data;


 FUNC_6();


 VAR_31->arm_lpae_s1_cfg.ttbr[0] = FUNC_5(VAR_34->pgd);
 VAR_31->arm_lpae_s1_cfg.ttbr[1] = 0;
 return &VAR_34->iop;

out_free_data:
 FUNC_4(VAR_34);
 return ((void*)0);
}
