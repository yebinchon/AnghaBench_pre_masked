
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * sca; scalar_t__ use_esca; } ;
struct kvm {TYPE_1__ arch; } ;
struct esca_block {int dummy; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(struct kvm *VAR_0)
{
 if (VAR_0->arch.use_esca)
  FUNC_1(VAR_0->arch.sca, sizeof(struct esca_block));
 else
  FUNC_0((unsigned long)(VAR_0->arch.sca));
 VAR_0->arch.sca = ((void*)0);
}
