
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct kvm_lapic {int dummy; } ;
struct kvm_apic_map {int mode; int max_apic_id; struct kvm_lapic*** xapic_cluster_map; struct kvm_lapic** xapic_flat_map; struct kvm_lapic** phys_map; } ;





 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static inline bool FUNC_2(struct kvm_apic_map *VAR_0,
  u32 VAR_1, struct kvm_lapic ***VAR_2, u16 *VAR_3) {
 switch (VAR_0->mode) {
 case 130: {
  u32 VAR_4 = (VAR_1 >> 16) * 16;
  u32 VAR_5 = VAR_0->max_apic_id;

  if (VAR_4 <= VAR_5) {
   u8 VAR_6 = FUNC_1(VAR_5 - VAR_4 + 1, 16U);

   VAR_4 = FUNC_0(VAR_4, VAR_0->max_apic_id + 1);
   *VAR_2 = &VAR_0->phys_map[VAR_4];
   *VAR_3 = VAR_1 & (0xffff >> (16 - VAR_6));
  } else {
   *VAR_3 = 0;
  }

  return 1;
  }
 case 128:
  *VAR_2 = VAR_0->xapic_flat_map;
  *VAR_3 = VAR_1 & 0xff;
  return 1;
 case 129:
  *VAR_2 = VAR_0->xapic_cluster_map[(VAR_1 >> 4) & 0xf];
  *VAR_3 = VAR_1 & 0xf;
  return 1;
 default:

  return 0;
 }
}
