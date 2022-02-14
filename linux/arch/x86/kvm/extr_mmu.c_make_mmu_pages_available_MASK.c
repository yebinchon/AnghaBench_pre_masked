
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct kvm_vcpu {TYPE_2__* kvm; } ;
struct TYPE_5__ {int mmu_recycled; } ;
struct TYPE_6__ {TYPE_1__ stat; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_5(struct kvm_vcpu *VAR_4)
{
 FUNC_0(VAR_3);

 if (FUNC_3(FUNC_1(VAR_4->kvm) >= VAR_1))
  return 0;

 while (FUNC_1(VAR_4->kvm) < VAR_2) {
  if (!FUNC_4(VAR_4->kvm, &VAR_3))
   break;

  ++VAR_4->kvm->stat.mmu_recycled;
 }
 FUNC_2(VAR_4->kvm, &VAR_3);

 if (!FUNC_1(VAR_4->kvm))
  return -VAR_0;
 return 0;
}
