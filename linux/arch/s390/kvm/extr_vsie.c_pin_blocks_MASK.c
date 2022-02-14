
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef void* u32 ;
struct kvm_s390_sie_block {unsigned long scaol; unsigned long scaoh; unsigned long itdba; int ecb; unsigned long gvrd; int eca; int ecd; unsigned long riccbd; int ecb3; unsigned long sdnxo; } ;
struct vsie_page {int sca_gpa; int itdba_gpa; int gvrd_gpa; int riccbd_gpa; int sdnx_gpa; struct kvm_s390_sie_block scb_s; struct kvm_s390_sie_block* scb_o; } ;
struct kvm_vcpu {int kvm; } ;
struct bsca_block {int dummy; } ;
typedef unsigned long hpa_t ;
typedef int gpa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (int ,int,unsigned long*) ;
 int FUNC_3 (struct kvm_s390_sie_block*,int) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (struct kvm_vcpu*,struct vsie_page*) ;

__attribute__((used)) static int FUNC_6(struct kvm_vcpu *VAR_9, struct vsie_page *VAR_10)
{
 struct kvm_s390_sie_block *VAR_11 = VAR_10->scb_o;
 struct kvm_s390_sie_block *VAR_12 = &VAR_10->scb_s;
 hpa_t VAR_13;
 gpa_t VAR_14;
 int VAR_15 = 0;

 VAR_14 = FUNC_0(VAR_11->scaol) & ~0xfUL;
 if (FUNC_4(VAR_9->kvm, VAR_6))
  VAR_14 |= (u64) FUNC_0(VAR_11->scaoh) << 32;
 if (VAR_14) {
  if (VAR_14 < 2 * VAR_8)
   VAR_15 = FUNC_3(VAR_12, 0x0038U);
  else if ((VAR_14 & ~0x1fffUL) == FUNC_1(VAR_9))
   VAR_15 = FUNC_3(VAR_12, 0x0011U);
  else if ((VAR_14 & VAR_7) !=
    ((VAR_14 + sizeof(struct bsca_block) - 1) & VAR_7))
   VAR_15 = FUNC_3(VAR_12, 0x003bU);
  if (!VAR_15) {
   VAR_15 = FUNC_2(VAR_9->kvm, VAR_14, &VAR_13);
   if (VAR_15)
    VAR_15 = FUNC_3(VAR_12, 0x0034U);
  }
  if (VAR_15)
   goto unpin;
  VAR_10->sca_gpa = VAR_14;
  VAR_12->scaoh = (u32)((u64)VAR_13 >> 32);
  VAR_12->scaol = (u32)(u64)VAR_13;
 }

 VAR_14 = FUNC_0(VAR_11->itdba) & ~0xffUL;
 if (VAR_14 && (VAR_12->ecb & VAR_3)) {
  if (VAR_14 < 2 * VAR_8) {
   VAR_15 = FUNC_3(VAR_12, 0x0080U);
   goto unpin;
  }

  VAR_15 = FUNC_2(VAR_9->kvm, VAR_14, &VAR_13);
  if (VAR_15) {
   VAR_15 = FUNC_3(VAR_12, 0x0080U);
   goto unpin;
  }
  VAR_10->itdba_gpa = VAR_14;
  VAR_12->itdba = VAR_13;
 }

 VAR_14 = FUNC_0(VAR_11->gvrd) & ~0x1ffUL;
 if (VAR_14 && (VAR_12->eca & VAR_0) && !(VAR_12->ecd & VAR_5)) {
  if (VAR_14 < 2 * VAR_8) {
   VAR_15 = FUNC_3(VAR_12, 0x1310U);
   goto unpin;
  }




  VAR_15 = FUNC_2(VAR_9->kvm, VAR_14, &VAR_13);
  if (VAR_15) {
   VAR_15 = FUNC_3(VAR_12, 0x1310U);
   goto unpin;
  }
  VAR_10->gvrd_gpa = VAR_14;
  VAR_12->gvrd = VAR_13;
 }

 VAR_14 = FUNC_0(VAR_11->riccbd) & ~0x3fUL;
 if (VAR_14 && (VAR_12->ecb3 & VAR_1)) {
  if (VAR_14 < 2 * VAR_8) {
   VAR_15 = FUNC_3(VAR_12, 0x0043U);
   goto unpin;
  }

  VAR_15 = FUNC_2(VAR_9->kvm, VAR_14, &VAR_13);
  if (VAR_15) {
   VAR_15 = FUNC_3(VAR_12, 0x0043U);
   goto unpin;
  }

  VAR_10->riccbd_gpa = VAR_14;
  VAR_12->riccbd = VAR_13;
 }
 if (((VAR_12->ecb & VAR_2) && !(VAR_12->ecd & VAR_5)) ||
     (VAR_12->ecd & VAR_4)) {
  unsigned long VAR_16;

  VAR_14 = FUNC_0(VAR_11->sdnxo) & ~0xfUL;
  VAR_16 = FUNC_0(VAR_11->sdnxo) & 0xfUL;
  if (!VAR_14 || VAR_14 < 2 * VAR_8) {
   VAR_15 = FUNC_3(VAR_12, 0x10b0U);
   goto unpin;
  }
  if (VAR_16 < 6 || VAR_16 > 12) {
   VAR_15 = FUNC_3(VAR_12, 0x10b1U);
   goto unpin;
  }
  if (VAR_14 & ((1 << VAR_16) - 1)) {
   VAR_15 = FUNC_3(VAR_12, 0x10b2U);
   goto unpin;
  }



  VAR_15 = FUNC_2(VAR_9->kvm, VAR_14, &VAR_13);
  if (VAR_15) {
   VAR_15 = FUNC_3(VAR_12, 0x10b0U);
   goto unpin;
  }
  VAR_10->sdnx_gpa = VAR_14;
  VAR_12->sdnxo = VAR_13 | VAR_16;
 }
 return 0;
unpin:
 FUNC_5(VAR_9, VAR_10);
 return VAR_15;
}
