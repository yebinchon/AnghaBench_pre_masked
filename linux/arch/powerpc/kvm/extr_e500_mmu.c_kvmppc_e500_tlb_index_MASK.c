
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvmppc_vcpu_e500 {scalar_t__ tlb1_min_eaddr; scalar_t__ tlb1_max_eaddr; unsigned int* gtlb_offset; struct kvm_book3e_206_tlb_entry* gtlb_arch; TYPE_1__* gtlb_params; } ;
struct kvm_book3e_206_tlb_entry {int dummy; } ;
typedef scalar_t__ gva_t ;
struct TYPE_2__ {int entries; int ways; } ;


 scalar_t__ FUNC_0 (struct kvm_book3e_206_tlb_entry*) ;
 scalar_t__ FUNC_1 (struct kvm_book3e_206_tlb_entry*) ;
 unsigned int FUNC_2 (struct kvm_book3e_206_tlb_entry*) ;
 int FUNC_3 (struct kvm_book3e_206_tlb_entry*) ;
 int FUNC_4 (struct kvm_book3e_206_tlb_entry*) ;
 unsigned int FUNC_5 (struct kvmppc_vcpu_e500*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct kvmppc_vcpu_e500 *VAR_0,
  gva_t VAR_1, int VAR_2, unsigned int VAR_3, int VAR_4)
{
 int VAR_5 = VAR_0->gtlb_params[VAR_2].entries;
 unsigned int VAR_6, VAR_7;
 int VAR_8;

 if (VAR_2 == 0) {
  VAR_6 = FUNC_5(VAR_0, VAR_1);
  VAR_5 = VAR_0->gtlb_params[0].ways;
 } else {
  if (VAR_1 < VAR_0->tlb1_min_eaddr ||
    VAR_1 > VAR_0->tlb1_max_eaddr)
   return -1;
  VAR_6 = 0;
 }

 VAR_7 = VAR_0->gtlb_offset[VAR_2];

 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  struct kvm_book3e_206_tlb_entry *VAR_9 =
   &VAR_0->gtlb_arch[VAR_7 + VAR_6 + VAR_8];
  unsigned int VAR_10;

  if (VAR_1 < FUNC_0(VAR_9))
   continue;

  if (VAR_1 > FUNC_1(VAR_9))
   continue;

  VAR_10 = FUNC_2(VAR_9);
  if (VAR_10 && (VAR_10 != VAR_3))
   continue;

  if (!FUNC_4(VAR_9))
   continue;

  if (FUNC_3(VAR_9) != VAR_4 && VAR_4 != -1)
   continue;

  return VAR_6 + VAR_8;
 }

 return -1;
}
