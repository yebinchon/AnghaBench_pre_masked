
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int target; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct coproc_reg {struct coproc_reg const* (* access ) (struct kvm_vcpu*,struct coproc_params const*,struct coproc_reg const*) ;} ;
struct coproc_params {int is_write; int Op2; int CRm; int CRn; int Rt1; int Op1; } ;


 size_t FUNC_0 (struct coproc_reg const*) ;
 int FUNC_1 (int) ;
 struct coproc_reg const* VAR_0 ;
 struct coproc_reg* FUNC_2 (struct coproc_params const*,struct coproc_reg const*,size_t) ;
 struct coproc_reg* FUNC_3 (int ,size_t*) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*,int ) ;
 int FUNC_7 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_8 (struct coproc_reg const*) ;
 int FUNC_9 (struct coproc_params const*) ;
 struct coproc_reg const* FUNC_10 (struct kvm_vcpu*,struct coproc_params const*,struct coproc_reg const*) ;
 int FUNC_11 (int ,int ,int ,int ,int ,int ) ;
 int * FUNC_12 (struct kvm_vcpu*) ;
 int * FUNC_13 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_14(struct kvm_vcpu *VAR_1,
   const struct coproc_params *VAR_2)
{
 size_t VAR_3;
 const struct coproc_reg *VAR_4, *VAR_5;

 FUNC_11(VAR_2->Op1, VAR_2->Rt1, VAR_2->CRn,
       VAR_2->CRm, VAR_2->Op2, VAR_2->is_write);

 VAR_4 = FUNC_3(VAR_1->arch.target, &VAR_3);


 VAR_5 = FUNC_2(VAR_2, VAR_4, VAR_3);
 if (!VAR_5)
  VAR_5 = FUNC_2(VAR_2, VAR_0, FUNC_0(VAR_0));

 if (FUNC_8(VAR_5)) {

  FUNC_1(!VAR_5->access);

  if (FUNC_8(VAR_5->access(VAR_1, VAR_2, VAR_5))) {

   FUNC_6(VAR_1, FUNC_7(VAR_1));
  }
 } else {

  FUNC_4("Unsupported guest CP15 access at: %08lx [%08lx]\n",
   *FUNC_13(VAR_1), *FUNC_12(VAR_1));
  FUNC_9(VAR_2);
  FUNC_5(VAR_1);
 }

 return 1;
}
