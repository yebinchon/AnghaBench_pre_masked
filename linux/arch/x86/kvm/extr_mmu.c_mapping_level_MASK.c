
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int kvm; } ;
struct kvm_memory_slot {int dummy; } ;
typedef int gfn_t ;
struct TYPE_2__ {int (* get_lpage_level ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int,struct kvm_memory_slot*) ;
 int FUNC_1 (int ,int ) ;
 struct kvm_memory_slot* FUNC_2 (struct kvm_vcpu*,int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (struct kvm_memory_slot*,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct kvm_vcpu *VAR_3, gfn_t VAR_4,
    bool *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 struct kvm_memory_slot *VAR_9;

 if (FUNC_6(*VAR_5))
  return VAR_1;

 VAR_9 = FUNC_2(VAR_3, VAR_4);
 *VAR_5 = !FUNC_3(VAR_9, 1);
 if (FUNC_6(*VAR_5))
  return VAR_1;

 VAR_6 = FUNC_1(VAR_3->kvm, VAR_4);

 if (VAR_6 == VAR_1)
  return VAR_6;

 VAR_8 = FUNC_4(VAR_2->get_lpage_level(), VAR_6);

 for (VAR_7 = VAR_0; VAR_7 <= VAR_8; ++VAR_7)
  if (FUNC_0(VAR_4, VAR_7, VAR_9))
   break;

 return VAR_7 - 1;
}
