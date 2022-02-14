
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int smbase; int cr0; int hflags; } ;
struct kvm_vcpu {TYPE_1__ arch; int vcpu_id; } ;
struct kvm_segment {int selector; int base; int limit; int type; int s; int g; int present; scalar_t__ padding; scalar_t__ unusable; scalar_t__ avl; scalar_t__ l; scalar_t__ db; scalar_t__ dpl; } ;
struct desc_ptr {scalar_t__ size; scalar_t__ address; } ;
typedef int buf ;
struct TYPE_4__ {int (* set_efer ) (struct kvm_vcpu*,int ) ;int (* set_idt ) (struct kvm_vcpu*,struct desc_ptr*) ;int (* set_cr4 ) (struct kvm_vcpu*,int ) ;int (* set_cr0 ) (struct kvm_vcpu*,int) ;int (* set_nmi_mask ) (struct kvm_vcpu*,int) ;scalar_t__ (* get_nmi_mask ) (struct kvm_vcpu*) ;int (* pre_enter_smm ) (struct kvm_vcpu*,char*) ;} ;


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
 int FUNC_0 (struct kvm_vcpu*,int,int ) ;
 int FUNC_1 (struct kvm_vcpu*,char*) ;
 int FUNC_2 (struct kvm_vcpu*,char*) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*,int ) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*,int) ;
 int FUNC_6 (struct kvm_vcpu*,int ) ;
 int FUNC_7 (struct kvm_vcpu*,struct kvm_segment*,int ) ;
 int FUNC_8 (struct kvm_vcpu*) ;
 int FUNC_9 (struct kvm_vcpu*,int,char*,int) ;
 TYPE_2__* VAR_15 ;
 int FUNC_10 (char*,int ,int) ;
 int FUNC_11 (struct kvm_vcpu*,char*) ;
 scalar_t__ FUNC_12 (struct kvm_vcpu*) ;
 int FUNC_13 (struct kvm_vcpu*,int) ;
 int FUNC_14 (struct kvm_vcpu*,int) ;
 int FUNC_15 (struct kvm_vcpu*,int ) ;
 int FUNC_16 (struct kvm_vcpu*,struct desc_ptr*) ;
 int FUNC_17 (struct kvm_vcpu*,int ) ;
 int FUNC_18 (int ,int,int) ;

__attribute__((used)) static void FUNC_19(struct kvm_vcpu *VAR_16)
{
 struct kvm_segment VAR_17, VAR_18;
 struct desc_ptr VAR_19;
 char VAR_20[512];
 u32 VAR_21;

 FUNC_18(VAR_16->vcpu_id, VAR_16->arch.smbase, 1);
 FUNC_10(VAR_20, 0, 512);





  FUNC_1(VAR_16, VAR_20);






 VAR_15->pre_enter_smm(VAR_16, VAR_20);

 VAR_16->arch.hflags |= VAR_2;
 FUNC_9(VAR_16, VAR_16->arch.smbase + 0xfe00, VAR_20, sizeof(VAR_20));

 if (VAR_15->get_nmi_mask(VAR_16))
  VAR_16->arch.hflags |= VAR_1;
 else
  VAR_15->set_nmi_mask(VAR_16, 1);

 FUNC_6(VAR_16, VAR_13);
 FUNC_5(VAR_16, 0x8000);

 VAR_21 = VAR_16->arch.cr0 & ~(VAR_10 | VAR_9 | VAR_12 | VAR_11);
 VAR_15->set_cr0(VAR_16, VAR_21);
 VAR_16->arch.cr0 = VAR_21;

 VAR_15->set_cr4(VAR_16, 0);


 VAR_19.address = VAR_19.size = 0;
 VAR_15->set_idt(VAR_16, &VAR_19);

 FUNC_0(VAR_16, 7, VAR_0);

 VAR_17.selector = (VAR_16->arch.smbase >> 4) & 0xffff;
 VAR_17.base = VAR_16->arch.smbase;

 VAR_18.selector = 0;
 VAR_18.base = 0;

 VAR_17.limit = VAR_18.limit = 0xffffffff;
 VAR_17.type = VAR_18.type = 0x3;
 VAR_17.dpl = VAR_18.dpl = 0;
 VAR_17.db = VAR_18.db = 0;
 VAR_17.s = VAR_18.s = 1;
 VAR_17.l = VAR_18.l = 0;
 VAR_17.g = VAR_18.g = 1;
 VAR_17.avl = VAR_18.avl = 0;
 VAR_17.present = VAR_18.present = 1;
 VAR_17.unusable = VAR_18.unusable = 0;
 VAR_17.padding = VAR_18.padding = 0;

 FUNC_7(VAR_16, &VAR_17, VAR_3);
 FUNC_7(VAR_16, &VAR_18, VAR_4);
 FUNC_7(VAR_16, &VAR_18, VAR_5);
 FUNC_7(VAR_16, &VAR_18, VAR_6);
 FUNC_7(VAR_16, &VAR_18, VAR_7);
 FUNC_7(VAR_16, &VAR_18, VAR_8);






 FUNC_8(VAR_16);
 FUNC_4(VAR_16);
}
