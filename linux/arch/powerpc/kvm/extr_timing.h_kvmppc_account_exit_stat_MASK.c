
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int gdbell_exits; int dbell_exits; int signal_exits; int itlb_virt_miss_exits; int itlb_real_miss_exits; int mmio_exits; int dtlb_virt_miss_exits; int dtlb_real_miss_exits; int syscall_exits; int isi_exits; int dsi_exits; int emulated_inst_exits; int dec_exits; int ext_intr_exits; } ;
struct kvm_vcpu {TYPE_1__ stat; } ;
__attribute__((used)) static inline void FUNC_0(struct kvm_vcpu *VAR_0, int VAR_1)
{






 switch (VAR_1) {
 case 135:
  VAR_0->stat.ext_intr_exits++;
  break;
 case 140:
  VAR_0->stat.dec_exits++;
  break;
 case 136:
  VAR_0->stat.emulated_inst_exits++;
  break;
 case 139:
  VAR_0->stat.dsi_exits++;
  break;
 case 133:
  VAR_0->stat.isi_exits++;
  break;
 case 128:
  VAR_0->stat.syscall_exits++;
  break;
 case 138:
  VAR_0->stat.dtlb_real_miss_exits++;
  break;
 case 137:
  VAR_0->stat.dtlb_virt_miss_exits++;
  break;
 case 130:
  VAR_0->stat.mmio_exits++;
  break;
 case 132:
  VAR_0->stat.itlb_real_miss_exits++;
  break;
 case 131:
  VAR_0->stat.itlb_virt_miss_exits++;
  break;
 case 129:
  VAR_0->stat.signal_exits++;
  break;
 case 141:
  VAR_0->stat.dbell_exits++;
  break;
 case 134:
  VAR_0->stat.gdbell_exits++;
  break;
 }
}
