
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct kvmppc_bat {int bepi_mask; int bepi; int vs; int vp; int raw; int brpn; int wimg; int pp; } ;
struct kvm_vcpu {int dummy; } ;



void FUNC_0(struct kvm_vcpu *VAR_0, struct kvmppc_bat *VAR_1, bool VAR_2,
                    u32 VAR_3)
{
 if (VAR_2) {

  u32 VAR_4 = (VAR_3 >> 2) & 0x7ff;
  VAR_1->bepi_mask = (~VAR_4 << 17);
  VAR_1->bepi = VAR_3 & 0xfffe0000;
  VAR_1->vs = (VAR_3 & 2) ? 1 : 0;
  VAR_1->vp = (VAR_3 & 1) ? 1 : 0;
  VAR_1->raw = (VAR_1->raw & 0xffffffff00000000ULL) | VAR_3;
 } else {

  VAR_1->brpn = VAR_3 & 0xfffe0000;
  VAR_1->wimg = (VAR_3 >> 3) & 0xf;
  VAR_1->pp = VAR_3 & 3;
  VAR_1->raw = (VAR_1->raw & 0x00000000ffffffffULL) | ((u64)VAR_3 << 32);
 }
}
