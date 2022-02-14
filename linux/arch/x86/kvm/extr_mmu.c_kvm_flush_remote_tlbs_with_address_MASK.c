
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct kvm_tlb_range {void* pages; void* start_gfn; } ;
struct kvm {int dummy; } ;


 int FUNC_0 (struct kvm*,struct kvm_tlb_range*) ;

__attribute__((used)) static void FUNC_1(struct kvm *VAR_0,
  u64 VAR_1, u64 VAR_2)
{
 struct kvm_tlb_range VAR_3;

 VAR_3.start_gfn = VAR_1;
 VAR_3.pages = VAR_2;

 FUNC_0(VAR_0, &VAR_3);
}
