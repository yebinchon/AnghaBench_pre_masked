
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_ppc_one_seg_page_size {int page_shift; int slb_enc; TYPE_1__* enc; } ;
struct TYPE_2__ {int page_shift; int pte_enc; } ;


 void* FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(struct kvm_ppc_one_seg_page_size **VAR_0,
         int VAR_1, int VAR_2)
{
 (*VAR_0)->page_shift = VAR_1;
 (*VAR_0)->slb_enc = VAR_2;
 (*VAR_0)->enc[0].page_shift = VAR_1;
 (*VAR_0)->enc[0].pte_enc = FUNC_0(VAR_1, VAR_1);



 if (VAR_1 != 24) {
  int VAR_3 = FUNC_0(VAR_1, 24);
  if (VAR_3 != -1) {
   (*VAR_0)->enc[1].page_shift = 24;
   (*VAR_0)->enc[1].pte_enc = VAR_3;
  }
 }
 (*VAR_0)++;
}
