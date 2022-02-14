
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmcs12 {int posted_intr_nv; int posted_intr_desc_addr; } ;
struct kvm_vcpu {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct vmcs12*,int ) ;
 scalar_t__ FUNC_3 (struct vmcs12*,int ) ;
 int FUNC_4 (struct vmcs12*) ;
 scalar_t__ FUNC_5 (struct vmcs12*) ;
 scalar_t__ FUNC_6 (struct vmcs12*) ;
 scalar_t__ FUNC_7 (struct vmcs12*) ;
 int FUNC_8 (struct kvm_vcpu*) ;
 int FUNC_9 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_10(struct kvm_vcpu *VAR_3,
        struct vmcs12 *VAR_4)
{
 if (!FUNC_7(VAR_4) &&
     !FUNC_4(VAR_4) &&
     !FUNC_6(VAR_4) &&
     !FUNC_5(VAR_4))
  return 0;





 if (FUNC_0(FUNC_7(VAR_4) &&
        FUNC_3(VAR_4, VAR_2)))
  return -VAR_1;





 if (FUNC_0(FUNC_6(VAR_4) && !FUNC_9(VAR_3)))
  return -VAR_1;
 if (FUNC_5(VAR_4) &&
    (FUNC_0(!FUNC_6(VAR_4)) ||
     FUNC_0(!FUNC_8(VAR_3)) ||
     FUNC_0((VAR_4->posted_intr_nv & 0xff00)) ||
     FUNC_0((VAR_4->posted_intr_desc_addr & 0x3f)) ||
     FUNC_0((VAR_4->posted_intr_desc_addr >> FUNC_1(VAR_3)))))
  return -VAR_1;


 if (FUNC_0(!FUNC_2(VAR_4, VAR_0)))
  return -VAR_1;

 return 0;
}
