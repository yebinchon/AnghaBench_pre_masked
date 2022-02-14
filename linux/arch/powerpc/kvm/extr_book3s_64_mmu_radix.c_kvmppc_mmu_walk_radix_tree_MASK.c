
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct kvmppc_pte {int page_size; unsigned long page_shift; unsigned long eaddr; int raddr; int may_read; int may_write; int may_execute; int rc; } ;
struct kvm_vcpu {struct kvm* kvm; } ;
struct kvm {int dummy; } ;
typedef int rpte ;
typedef unsigned long gva_t ;
typedef int __be64 ;
struct TYPE_2__ {unsigned long shift; } ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (struct kvm*,int,int *,int) ;
 TYPE_1__* VAR_17 ;
 unsigned long* VAR_18 ;

int FUNC_2(struct kvm_vcpu *VAR_19, gva_t VAR_20,
          struct kvmppc_pte *VAR_21, u64 VAR_22,
          u64 *VAR_23)
{
 struct kvm *VAR_24 = VAR_19->kvm;
 int VAR_25, VAR_26, VAR_27;
 unsigned long VAR_28, VAR_29, VAR_30, VAR_31;
 u64 VAR_32, VAR_33, VAR_34;
 __be64 VAR_35;

 VAR_28 = ((VAR_22 & VAR_6) >> (VAR_7 - 3)) |
  ((VAR_22 & VAR_8) >> VAR_9);
 VAR_29 = VAR_22 & VAR_5;
 VAR_33 = VAR_22 & VAR_4;

 VAR_30 = VAR_28 + 31;


 if (VAR_30 != 52)
  return -VAR_0;


 for (VAR_26 = 3; VAR_26 >= 0; --VAR_26) {
  u64 VAR_36;

  if (VAR_26 && VAR_29 != VAR_18[VAR_26])
   return -VAR_0;
  if (VAR_26 == 0 && !(VAR_29 == 5 || VAR_29 == 9))
   return -VAR_0;
  VAR_30 -= VAR_29;
  VAR_31 = (VAR_20 >> VAR_30) & ((1UL << VAR_29) - 1);

  if (VAR_33 & ((1UL << (VAR_29 + 3)) - 1))
   return -VAR_0;

  VAR_36 = VAR_33 + (VAR_31 * sizeof(VAR_35));
  VAR_25 = FUNC_1(VAR_24, VAR_36, &VAR_35, sizeof(VAR_35));
  if (VAR_25) {
   if (VAR_23)
    *VAR_23 = VAR_36;
   return VAR_25;
  }
  VAR_32 = FUNC_0(VAR_35);
  if (!(VAR_32 & VAR_13))
   return -VAR_1;

  if (VAR_32 & VAR_14)
   break;

  VAR_33 = VAR_32 & VAR_4;
  VAR_29 = VAR_32 & VAR_5;
 }


 if (VAR_26 < 0 || VAR_26 == 3)
  return -VAR_0;



 VAR_34 = VAR_32 & 0x01fffffffffff000ul;
 if (VAR_34 & ((1ul << VAR_30) - 1))
  return -VAR_0;
 VAR_34 |= VAR_20 & ((1ul << VAR_30) - 1);
 for (VAR_27 = VAR_2; VAR_27 < VAR_3; ++VAR_27)
  if (VAR_30 == VAR_17[VAR_27].shift)
   break;
 VAR_21->page_size = VAR_27;
 VAR_21->page_shift = VAR_30;

 VAR_21->eaddr = VAR_20;
 VAR_21->raddr = VAR_34;


 VAR_21->may_read = !!(VAR_32 & VAR_15);
 VAR_21->may_write = !!(VAR_32 & VAR_16);
 VAR_21->may_execute = !!(VAR_32 & VAR_12);

 VAR_21->rc = VAR_32 & (VAR_10 | VAR_11);

 if (VAR_23)
  *VAR_23 = VAR_32;

 return 0;
}
