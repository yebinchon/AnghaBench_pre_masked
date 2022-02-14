
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int target; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct coproc_reg {int reg; } ;
struct coproc_params {int dummy; } ;


 size_t FUNC_0 (struct coproc_reg const*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct coproc_reg const* VAR_2 ;
 struct coproc_reg* FUNC_1 (struct coproc_params*,struct coproc_reg const*,size_t) ;
 struct coproc_reg* FUNC_2 (int ,size_t*) ;
 int FUNC_3 (int,struct coproc_params*) ;

__attribute__((used)) static const struct coproc_reg *FUNC_4(struct kvm_vcpu *VAR_3,
          u64 VAR_4)
{
 size_t VAR_5;
 const struct coproc_reg *VAR_6, *VAR_7;
 struct coproc_params VAR_8;


 if ((VAR_4 & VAR_0) >> VAR_1 != 15)
  return ((void*)0);

 if (!FUNC_3(VAR_4, &VAR_8))
  return ((void*)0);

 VAR_6 = FUNC_2(VAR_3->arch.target, &VAR_5);
 VAR_7 = FUNC_1(&VAR_8, VAR_6, VAR_5);
 if (!VAR_7)
  VAR_7 = FUNC_1(&VAR_8, VAR_2, FUNC_0(VAR_2));


 if (VAR_7 && !VAR_7->reg)
  VAR_7 = ((void*)0);

 return VAR_7;
}
