
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_vcpu_e500 {int num_shared_tlb_pages; int * gtlb_arch; int * shared_tlb_pages; int ** gtlb_priv; int * g2h_tlb1_map; int vcpu; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (uintptr_t,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (void*) ;

__attribute__((used)) static void FUNC_6(struct kvmppc_vcpu_e500 *VAR_1)
{
 int VAR_2;

 FUNC_1(&VAR_1->vcpu);
 FUNC_0(VAR_1->g2h_tlb1_map);
 FUNC_0(VAR_1->gtlb_priv[0]);
 FUNC_0(VAR_1->gtlb_priv[1]);

 if (VAR_1->shared_tlb_pages) {
  FUNC_5((void *)(FUNC_3((uintptr_t)VAR_1->gtlb_arch,
       VAR_0)));

  for (VAR_2 = 0; VAR_2 < VAR_1->num_shared_tlb_pages; VAR_2++) {
   FUNC_4(VAR_1->shared_tlb_pages[VAR_2]);
   FUNC_2(VAR_1->shared_tlb_pages[VAR_2]);
  }

  VAR_1->num_shared_tlb_pages = 0;

  FUNC_0(VAR_1->shared_tlb_pages);
  VAR_1->shared_tlb_pages = ((void*)0);
 } else {
  FUNC_0(VAR_1->gtlb_arch);
 }

 VAR_1->gtlb_arch = ((void*)0);
}
