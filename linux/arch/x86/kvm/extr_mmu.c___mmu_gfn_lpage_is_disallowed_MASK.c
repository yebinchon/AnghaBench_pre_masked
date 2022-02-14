
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_memory_slot {int dummy; } ;
struct kvm_lpage_info {int disallow_lpage; } ;
typedef int gfn_t ;


 struct kvm_lpage_info* FUNC_0 (int ,struct kvm_memory_slot*,int) ;

__attribute__((used)) static bool FUNC_1(gfn_t VAR_0, int VAR_1,
       struct kvm_memory_slot *VAR_2)
{
 struct kvm_lpage_info *VAR_3;

 if (VAR_2) {
  VAR_3 = FUNC_0(VAR_0, VAR_2, VAR_1);
  return !!VAR_3->disallow_lpage;
 }

 return 1;
}
