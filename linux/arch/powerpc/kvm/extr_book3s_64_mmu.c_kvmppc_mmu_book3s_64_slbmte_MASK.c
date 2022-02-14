
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct kvmppc_slb {int large; int tb; int esid; int vsid; int valid; int Ks; int Kp; int nx; int class; int orige; int origv; void* base_page_size; } ;
struct TYPE_2__ {int slb_nr; int hflags; struct kvmppc_slb* slb; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
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
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (struct kvm_vcpu*,int) ;
 int FUNC_4 (struct kvmppc_slb*) ;

__attribute__((used)) static void FUNC_5(struct kvm_vcpu *VAR_15, u64 VAR_16, u64 VAR_17)
{
 u64 VAR_18, VAR_19;
 int VAR_20;
 struct kvmppc_slb *VAR_21;

 FUNC_2("KVM MMU: slbmte(0x%llx, 0x%llx)\n", VAR_16, VAR_17);

 VAR_18 = FUNC_0(VAR_17);
 VAR_19 = FUNC_1(VAR_17);
 VAR_20 = VAR_17 & 0xfff;

 if (VAR_20 > VAR_15->arch.slb_nr)
  return;

 VAR_21 = &VAR_15->arch.slb[VAR_20];

 VAR_21->large = (VAR_16 & VAR_12) ? 1 : 0;
 VAR_21->tb = (VAR_16 & VAR_8) ? 1 : 0;
 VAR_21->esid = VAR_21->tb ? VAR_19 : VAR_18;
 VAR_21->vsid = (VAR_16 & ~VAR_7) >> (FUNC_4(VAR_21) - 16);
 VAR_21->valid = (VAR_17 & VAR_6) ? 1 : 0;
 VAR_21->Ks = (VAR_16 & VAR_11) ? 1 : 0;
 VAR_21->Kp = (VAR_16 & VAR_10) ? 1 : 0;
 VAR_21->nx = (VAR_16 & VAR_14) ? 1 : 0;
 VAR_21->class = (VAR_16 & VAR_9) ? 1 : 0;

 VAR_21->base_page_size = VAR_3;
 if (VAR_21->large) {
  if (VAR_15->arch.hflags & VAR_0) {
   switch (VAR_16 & VAR_13) {
   case 129:
    VAR_21->base_page_size = VAR_2;
    break;
   case 128:
    VAR_21->base_page_size = VAR_4;
    break;
   }
  } else
   VAR_21->base_page_size = VAR_2;
 }

 VAR_21->orige = VAR_17 & (VAR_1 | VAR_6);
 VAR_21->origv = VAR_16;


 FUNC_3(VAR_15, VAR_18 << VAR_5);
}
