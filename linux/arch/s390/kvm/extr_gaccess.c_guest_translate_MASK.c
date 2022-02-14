
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


union vaddress {unsigned long addr; int rfx; int rsx; int rtx; int sx; int px; int sx01; int rtx01; int rsx01; int rfx01; } ;
struct TYPE_12__ {int p; int pto; } ;
struct TYPE_11__ {int p; int iep; int sfaa; } ;
union segment_table_entry {TYPE_6__ fc0; TYPE_5__ fc1; int fc; int cs; int tt; int i; int val; } ;
struct TYPE_10__ {int p; int sto; int tl; int tf; } ;
struct TYPE_9__ {int p; int iep; int rfaa; } ;
union region3_table_entry {TYPE_4__ fc0; TYPE_3__ fc1; int fc; int cr; int tt; int i; int val; } ;
union region2_table_entry {int p; int rto; int tl; int tf; int tt; int i; int val; } ;
union region1_table_entry {int p; int rto; int tl; int tf; int tt; int i; int val; } ;
union raddress {unsigned long addr; int pfra; int sfaa; int rfaa; } ;
union page_table_entry {int p; int iep; int pfra; scalar_t__ z; scalar_t__ i; int val; } ;
union ctlreg0 {int iep; scalar_t__ edat; int val; } ;
union asce {int origin; int dt; int p; int tl; scalar_t__ r; } ;
struct TYPE_8__ {TYPE_1__* sie_block; } ;
struct kvm_vcpu {int kvm; TYPE_2__ arch; } ;
typedef enum prot_type { ____Placeholder_prot_type } prot_type ;
typedef enum gacc_mode { ____Placeholder_gacc_mode } gacc_mode ;
struct TYPE_7__ {int * gcr; } ;






 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_0 (int ,unsigned long,int *) ;
 scalar_t__ FUNC_1 (int ,unsigned long) ;
 unsigned long FUNC_2 (struct kvm_vcpu*,unsigned long) ;
 scalar_t__ FUNC_3 (int ,int) ;

__attribute__((used)) static unsigned long FUNC_4(struct kvm_vcpu *VAR_19, unsigned long VAR_20,
         unsigned long *VAR_21, const union asce VAR_22,
         enum gacc_mode VAR_23, enum prot_type *VAR_24)
{
 union vaddress VAR_25 = {.addr = VAR_20};
 union raddress VAR_26 = {.addr = VAR_20};
 union page_table_entry VAR_27;
 int VAR_28 = 0;
 int VAR_29 = 0;
 union ctlreg0 VAR_30;
 unsigned long VAR_31;
 int VAR_32, VAR_33, VAR_34;

 VAR_30 = VAR_19->arch.sie_block->gcr[0];
 VAR_32 = VAR_30 && FUNC_3(VAR_19->kvm, 8);
 VAR_33 = VAR_32 && FUNC_3(VAR_19->kvm, 78);
 VAR_34 = VAR_30 && FUNC_3(VAR_19->kvm, 130);
 if (VAR_22.r)
  goto real_address;
 VAR_31 = VAR_22.origin * VAR_3;
 switch (VAR_22.dt) {
 case 131:
  if (VAR_25.rfx01 > VAR_22.tl)
   return VAR_8;
  VAR_31 += VAR_25.rfx * 8;
  break;
 case 130:
  if (VAR_25.rfx)
   return VAR_5;
  if (VAR_25.rsx01 > VAR_22.tl)
   return VAR_9;
  VAR_31 += VAR_25.rsx * 8;
  break;
 case 129:
  if (VAR_25.rfx || VAR_25.rsx)
   return VAR_5;
  if (VAR_25.rtx01 > VAR_22.tl)
   return VAR_10;
  VAR_31 += VAR_25.rtx * 8;
  break;
 case 128:
  if (VAR_25.rfx || VAR_25.rsx || VAR_25.rtx)
   return VAR_5;
  if (VAR_25.sx01 > VAR_22.tl)
   return VAR_11;
  VAR_31 += VAR_25.sx * 8;
  break;
 }
 switch (VAR_22.dt) {
 case 131: {
  union region1_table_entry VAR_35;

  if (FUNC_1(VAR_19->kvm, VAR_31))
   return VAR_4;
  if (FUNC_0(VAR_19->kvm, VAR_31, &VAR_35.val))
   return -VAR_0;
  if (VAR_35.i)
   return VAR_8;
  if (VAR_35.tt != VAR_15)
   return VAR_12;
  if (VAR_25.rsx01 < VAR_35.tf || VAR_25.rsx01 > VAR_35.tl)
   return VAR_9;
  if (VAR_32)
   VAR_28 |= VAR_35.p;
  VAR_31 = VAR_35.rto * VAR_3 + VAR_25.rsx * 8;
 }

 case 130: {
  union region2_table_entry VAR_36;

  if (FUNC_1(VAR_19->kvm, VAR_31))
   return VAR_4;
  if (FUNC_0(VAR_19->kvm, VAR_31, &VAR_36.val))
   return -VAR_0;
  if (VAR_36.i)
   return VAR_9;
  if (VAR_36.tt != VAR_16)
   return VAR_12;
  if (VAR_25.rtx01 < VAR_36.tf || VAR_25.rtx01 > VAR_36.tl)
   return VAR_10;
  if (VAR_32)
   VAR_28 |= VAR_36.p;
  VAR_31 = VAR_36.rto * VAR_3 + VAR_25.rtx * 8;
 }

 case 129: {
  union region3_table_entry VAR_37;

  if (FUNC_1(VAR_19->kvm, VAR_31))
   return VAR_4;
  if (FUNC_0(VAR_19->kvm, VAR_31, &VAR_37.val))
   return -VAR_0;
  if (VAR_37.i)
   return VAR_10;
  if (VAR_37.tt != VAR_17)
   return VAR_12;
  if (VAR_37.cr && VAR_22.p && VAR_33)
   return VAR_12;
  if (VAR_37.fc && VAR_33) {
   VAR_28 |= VAR_37.fc1.p;
   VAR_29 = VAR_37.fc1.iep;
   VAR_26.rfaa = VAR_37.fc1.rfaa;
   goto absolute_address;
  }
  if (VAR_25.sx01 < VAR_37.fc0.tf)
   return VAR_11;
  if (VAR_25.sx01 > VAR_37.fc0.tl)
   return VAR_11;
  if (VAR_32)
   VAR_28 |= VAR_37.fc0.p;
  VAR_31 = VAR_37.fc0.sto * VAR_3 + VAR_25.sx * 8;
 }

 case 128: {
  union segment_table_entry VAR_38;

  if (FUNC_1(VAR_19->kvm, VAR_31))
   return VAR_4;
  if (FUNC_0(VAR_19->kvm, VAR_31, &VAR_38.val))
   return -VAR_0;
  if (VAR_38.i)
   return VAR_11;
  if (VAR_38.tt != VAR_18)
   return VAR_12;
  if (VAR_38.cs && VAR_22.p)
   return VAR_12;
  if (VAR_38.fc && VAR_32) {
   VAR_28 |= VAR_38.fc1.p;
   VAR_29 = VAR_38.fc1.iep;
   VAR_26.sfaa = VAR_38.fc1.sfaa;
   goto absolute_address;
  }
  VAR_28 |= VAR_38.fc0.p;
  VAR_31 = VAR_38.fc0.pto * (VAR_3 / 2) + VAR_25.px * 8;
 }
 }
 if (FUNC_1(VAR_19->kvm, VAR_31))
  return VAR_4;
 if (FUNC_0(VAR_19->kvm, VAR_31, &VAR_27.val))
  return -VAR_0;
 if (VAR_27.i)
  return VAR_6;
 if (VAR_27.z)
  return VAR_12;
 VAR_28 |= VAR_27.p;
 VAR_29 = VAR_27.iep;
 VAR_26.pfra = VAR_27.pfra;
real_address:
 VAR_26.addr = FUNC_2(VAR_19, VAR_26.addr);
absolute_address:
 if (VAR_23 == VAR_2 && VAR_28) {
  *VAR_24 = VAR_13;
  return VAR_7;
 }
 if (VAR_23 == VAR_1 && VAR_29 && VAR_34) {
  *VAR_24 = VAR_14;
  return VAR_7;
 }
 if (FUNC_1(VAR_19->kvm, VAR_26.addr))
  return VAR_4;
 *VAR_21 = VAR_26.addr;
 return 0;
}
