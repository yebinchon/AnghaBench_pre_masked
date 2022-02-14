
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vrsave ;
struct TYPE_2__ {int sane; } ;
struct kvm_vcpu {int mode; TYPE_1__ arch; } ;
struct kvm_run {int exit_reason; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct kvm_run*,struct kvm_vcpu*) ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*,int) ;
 int FUNC_6 (struct kvm_vcpu*,int ) ;
 int FUNC_7 (struct kvm_vcpu*,int ,int) ;
 int FUNC_8 (struct kvm_vcpu*) ;
 int FUNC_9 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_10(struct kvm_run *VAR_9, struct kvm_vcpu *VAR_10)
{
 int VAR_11;





 if (!VAR_10->arch.sane) {
  VAR_9->exit_reason = VAR_3;
  VAR_11 = -VAR_1;
  goto out;
 }

 FUNC_9(VAR_10);







 VAR_11 = FUNC_8(VAR_10);
 if (VAR_11 <= 0)
  goto out;



 FUNC_1(VAR_8);


 if (FUNC_4(VAR_10) & VAR_4)
  FUNC_7(VAR_10, VAR_0, VAR_4);

 FUNC_3();

 VAR_11 = FUNC_0(VAR_9, VAR_10);

 FUNC_2(VAR_10);





 FUNC_5(VAR_10, VAR_4 | VAR_5 | VAR_6);


 FUNC_6(VAR_10, VAR_2);

out:
 VAR_10->mode = VAR_7;
 return VAR_11;
}
