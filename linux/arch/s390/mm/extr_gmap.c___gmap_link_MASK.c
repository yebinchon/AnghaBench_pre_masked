
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u64 ;
struct TYPE_2__ {int allow_gmap_hpage_1m; } ;
struct mm_struct {TYPE_1__ context; } ;
struct gmap {unsigned long* table; int asce; int guest_table_lock; int host_to_guest; struct mm_struct* mm; } ;
typedef int spinlock_t ;
typedef int pud_t ;
typedef int pmd_t ;
typedef int pgd_t ;
typedef int p4d_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 unsigned long VAR_16 ;
 unsigned long VAR_17 ;
 unsigned long VAR_18 ;
 unsigned long VAR_19 ;
 unsigned long VAR_20 ;
 unsigned long VAR_21 ;
 unsigned long VAR_22 ;
 unsigned long VAR_23 ;
 unsigned long VAR_24 ;
 unsigned long VAR_25 ;
 unsigned long VAR_26 ;
 unsigned long VAR_27 ;
 int FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (struct gmap*,unsigned long*,unsigned long,unsigned long) ;
 int FUNC_4 (struct gmap*) ;
 int FUNC_5 (struct gmap*,int *,int ,unsigned long) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int ) ;
 int * FUNC_9 (struct mm_struct*,unsigned long) ;
 scalar_t__ FUNC_10 (int ) ;
 int * FUNC_11 (struct mm_struct*,int *) ;
 int FUNC_12 (int ) ;
 int * FUNC_13 (int *,unsigned long) ;
 unsigned long FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int * FUNC_17 (int *,unsigned long) ;
 int FUNC_18 (int *,unsigned long,unsigned long*) ;
 int FUNC_19 (int ) ;
 int FUNC_20 () ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;

int FUNC_23(struct gmap *VAR_28, unsigned long VAR_29, unsigned long VAR_30)
{
 struct mm_struct *VAR_31;
 unsigned long *VAR_32;
 spinlock_t *VAR_33;
 pgd_t *VAR_34;
 p4d_t *VAR_35;
 pud_t *VAR_36;
 pmd_t *VAR_37;
 u64 VAR_38;
 int VAR_39;

 FUNC_0(FUNC_4(VAR_28));

 VAR_32 = VAR_28->table;
 if ((VAR_28->asce & VAR_4) >= VAR_5) {
  VAR_32 += (VAR_29 & VAR_8) >> VAR_10;
  if ((*VAR_32 & VAR_19) &&
      FUNC_3(VAR_28, VAR_32, VAR_11,
         VAR_29 & VAR_9))
   return -VAR_1;
  VAR_32 = (unsigned long *)(*VAR_32 & VAR_20);
 }
 if ((VAR_28->asce & VAR_4) >= VAR_6) {
  VAR_32 += (VAR_29 & VAR_12) >> VAR_14;
  if ((*VAR_32 & VAR_19) &&
      FUNC_3(VAR_28, VAR_32, VAR_15,
         VAR_29 & VAR_13))
   return -VAR_1;
  VAR_32 = (unsigned long *)(*VAR_32 & VAR_20);
 }
 if ((VAR_28->asce & VAR_4) >= VAR_7) {
  VAR_32 += (VAR_29 & VAR_16) >> VAR_18;
  if ((*VAR_32 & VAR_19) &&
      FUNC_3(VAR_28, VAR_32, VAR_21,
         VAR_29 & VAR_17))
   return -VAR_1;
  VAR_32 = (unsigned long *)(*VAR_32 & VAR_20);
 }
 VAR_32 += (VAR_29 & VAR_26) >> VAR_27;

 VAR_31 = VAR_28->mm;
 VAR_34 = FUNC_9(VAR_31, VAR_30);
 FUNC_1(FUNC_8(*VAR_34));
 VAR_35 = FUNC_7(VAR_34, VAR_30);
 FUNC_1(FUNC_6(*VAR_35));
 VAR_36 = FUNC_17(VAR_35, VAR_30);
 FUNC_1(FUNC_16(*VAR_36));

 if (FUNC_15(*VAR_36))
  return -VAR_0;
 VAR_37 = FUNC_13(VAR_36, VAR_30);
 FUNC_1(FUNC_12(*VAR_37));

 if (FUNC_10(*VAR_37) && !VAR_28->mm->context.allow_gmap_hpage_1m)
  return -VAR_0;

 VAR_39 = FUNC_19(VAR_2);
 if (VAR_39)
  return VAR_39;
 VAR_33 = FUNC_11(VAR_31, VAR_37);
 FUNC_21(&VAR_28->guest_table_lock);
 if (*VAR_32 == VAR_21) {
  VAR_39 = FUNC_18(&VAR_28->host_to_guest,
           VAR_30 >> VAR_3, VAR_32);
  if (!VAR_39) {
   if (FUNC_10(*VAR_37)) {
    *VAR_32 = (FUNC_14(*VAR_37) &
       VAR_24)
     | VAR_22;
   } else
    *VAR_32 = FUNC_14(*VAR_37) &
     VAR_23;
  }
 } else if (*VAR_32 & VAR_25 &&
     !(FUNC_14(*VAR_37) & VAR_25)) {
  VAR_38 = (u64)*VAR_32;
  VAR_38 &= ~VAR_25;
  VAR_38 |= VAR_22;
  FUNC_5(VAR_28, (pmd_t *)VAR_32, FUNC_2(VAR_38), VAR_29);
 }
 FUNC_22(&VAR_28->guest_table_lock);
 FUNC_22(VAR_33);
 FUNC_20();
 return VAR_39;
}
