
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_memory_slot {int dummy; } ;
struct kvm_lpage_info {scalar_t__ disallow_lpage; } ;
typedef int gfn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct kvm_lpage_info* FUNC_1 (int ,struct kvm_memory_slot*,int) ;

__attribute__((used)) static void FUNC_2(struct kvm_memory_slot *VAR_2,
         gfn_t VAR_3, int VAR_4)
{
 struct kvm_lpage_info *VAR_5;
 int VAR_6;

 for (VAR_6 = VAR_0; VAR_6 <= VAR_1; ++VAR_6) {
  VAR_5 = FUNC_1(VAR_3, VAR_2, VAR_6);
  VAR_5->disallow_lpage += VAR_4;
  FUNC_0(VAR_5->disallow_lpage < 0);
 }
}
