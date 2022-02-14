
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fac_list; int fac_mask; } ;
struct TYPE_4__ {TYPE_1__ model; } ;
struct kvm {TYPE_2__ arch; } ;


 scalar_t__ FUNC_0 (unsigned long,int ) ;

__attribute__((used)) static inline int FUNC_1(struct kvm *VAR_0, unsigned long VAR_1)
{
 return FUNC_0(VAR_1, VAR_0->arch.model.fac_mask) &&
  FUNC_0(VAR_1, VAR_0->arch.model.fac_list);
}
