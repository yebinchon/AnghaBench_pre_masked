
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ threads_indep; } ;
struct kvm {TYPE_1__ arch; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct kvm *VAR_1)
{
 if (VAR_1->arch.threads_indep)
  return 1;
 return VAR_0;
}
